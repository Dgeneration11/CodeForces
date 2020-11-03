#include<stdio.h>

int main(){ 
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&n,&x,&m),cn=0;rll ans=0;
		while(m--) scanf("%d%d",&u,&v),mer();
		for(it i=1;i<=cn;++i) ans+=b[i].r-b[i].l+1;//printf("%d %d\n",b[i].l,b[i].r);
		printf("%lld\n",ans+(cn==0));
	}
	return 0;
}