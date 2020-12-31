#include<stdio.h>
struct customer {
    int accountno[20],phno[10];
    char name[50];
    float balance;
    char gender[10];
    int upi;
};
void data(struct customer[],int);
void display(struct customer[], int);
int find(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
void data(struct customer list[100],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter data for the record no.%d",i+1);
        printf("\nEnter accountno : ");
        scanf("%d",&list[i].accountno);
        printf("Enter name: ");
        scanf("%s",list[i].name);
        printf("Enter phone : ");
        scanf("%d",&list[i].phno);
        printf("Enter the gender: ");
        scanf("%s",&list[i].gender);
        printf("Enter the UPI id: ");
        scanf("%d", &list[i].upi);
        list[i].balance = 0;
    }
}

void display(struct customer list[100],int n){
    int i;
    printf("\n\nA/c number\tName\tphone\tbalance\tGender\tUPI\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%-10d\t%f\t%s\t%d\n",list[i].accountno,list[i].name,list[i].phno,list[i].balance,list[i].gender,list[i].upi);
    }
}
int find(struct customer list[100],int n,int number){
    int i;
    for(i=0;i<n;i++){
        if(list[i].accountno == number){
            return i;
        }
    }
    return - 1;
}
void deposit(struct customer list[100],int n,int number,int amount){
    int i=find(list, n, number);
    if(i==-1){
        printf("record not found\n");
    }
    else {
        list[i].balance += amount;
    }
}
void withdraw(struct customer list[100],int n,int number,int amount){
    int i=find(list,n,number);
    if(i==-1){
        printf("Record not found\n");
    }
    else if(list[i].balance<amount) {
        printf("Insufficient balance\n");
    }
    else {
        list[i].balance -=amount;
    }
}
int main(){
    struct customer value[50];
    int n,choice, accountno, amount, index;
    printf("Banking system\n\n");
    printf("Number of customer records you want to enter : ");
    scanf("%d", &n);
    data(value,n);
    
    do {
        printf("\nBanking system menu : \n");
        printf("press 1 to display all records.\n");
        printf("press 2 to search a record.\n");
        printf("press 3 to deposit amount.\n");
        printf("press 4 to withdraw amount.\n");
        printf("press 5 to exit\n");
        printf("\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                display(value,n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d",&accountno);
                index = find(value, n, accountno);
                if(index == - 1){
                    printf("Record not found");
                }
                else {
                    printf("A/c no: %d\nName: %s\nPhone: %d\nBalance: %f\nGender: %s\nUPI: %d\n",value[index].accountno,value[index].name,value[index].phno,value[index].balance,value[index].gender,value[index].upi);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d",&accountno);
                printf("Enter amount to deposit : ");
                scanf("%d",&amount);
                deposit(value, n, accountno, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d",&accountno);
                printf("Enter amount to withdraw : ");
                scanf("%d",&amount);
                withdraw(value, n, accountno, amount);
                break;
        }
    }
    while(choice != 5);
    return 0;
}