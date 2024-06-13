#include<stdio.h>

int main()
{
	int i,k,m,n;
	int toplama=0,carpma=1;
	printf("m degeri giriniz:");
	scanf("%d",&m);
	printf("n degeri giriniz:");
	scanf("%d",&n);
	
	for(i=1;i<=m;i++){  
	 
	    toplama=0;
	    
		for(k=1;k<=n;k++){
			toplama=toplama+i+k;
		}
		carpma=carpma*toplama;
	}
	
	printf("sonucu=%d",carpma);
	
	return 0;
}
