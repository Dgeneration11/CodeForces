#include<iostream>
#include<cstring>
#include<ctype.h>
#include<conio.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    string sa[t];
    int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
        for(int j=0; j<n;j++){
            string s;
            cin>>s;
            int l=s.length();
            for(int k=0;k<l;k++){
                char x = s.at(k);
                switch(x){
                    case 'a': A++;
                    break;
                    case 'b': B++;
                    break;
                    case 'c': C++;
                    break;
                    case 'd': D++;
                    break;
                    case 'e': E++;
                    break;
                    case 'f': F++;
                    break;
                    case 'g': G++;
                    break;
                    case 'h': H++;
                    break;
                    case 'i': I++;
                    break;
                    case 'j': J++;
                    break;
                    case 'k': K++;
                    break;
                    case 'l': L++;
                    break;
                    case 'm': M++;
                    break;
                    case 'n': N++;
                    break;
                    case 'o': O++;
                    break;
                    case 'p': P++;
                    break;
                    case 'q': Q++;
                    break;
                    case 'r': R++;
                    break;
                    case 's': S++;
                    break;
                    case 't': T++;
                    break;
                    case 'u': U++;
                    break;
                    case 'v': V++;
                    break;
                    case 'w': W++;
                    break;
                    case 'x': X++;
                    break;
                    case 'y': Y++;
                    break;
                    case 'z': Z++;
                    break;
                }
            }
            if(A%n==0 && B%n==0 && C%n==0 && D%n==0 && E%n==0 && F%n==0 && G%n==0 && H%n==0 && I%n==0 && J%n==0 && K%n==0 && L%n==0 && M%n==0 && N%n==0 && O%n==0 && P%n==0 && Q%n==0 && R%n==0 && S%n==0 && T%n==0 && U%n==0 && V%n==0 && W%n==0 && X%n==0 && Y%n==0 && Z%n==0){
            sa[i]="YES";
            }
            else
            {
                sa[i]="NO";
            }
        }
    }
    for(int y=0;y<t;y++){
        cout<<sa[y]<<endl;
    }
}