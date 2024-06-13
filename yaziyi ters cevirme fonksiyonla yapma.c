#include<stdio.h>
#include<string.h>

void terscevir(char isim[]){
	int i,gecici,uzunluk;
	uzunluk=strlen(isim);
	for(i=0;i<uzunluk/2;i++){
		gecici=isim[i];
		isim[i]=isim[uzunluk-1-i];
		isim[uzunluk-1-i]=gecici;
	}
}
int main()
{
	char yazi[100];
	printf("isminizi girin:");
	gets(yazi);
	terscevir(yazi);
	printf("yazinin ters cevrilmis hali:%s",yazi);
	return 0;
}
