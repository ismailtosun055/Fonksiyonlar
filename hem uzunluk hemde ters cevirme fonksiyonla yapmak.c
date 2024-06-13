#include<stdio.h>
#include<string.h>

int main(){
	int i,uzunluk,uzun;
	char isim[200],atama[200];
	printf("isiminizi girin:");
	gets(isim);
	uzunluk=strlen(isim);
	uzun=uzunluk-1;
	for(i=0;i<uzunluk;i++){
		atama[i]=isim[uzun];
		uzun--;
	}
	atama[i]='\0';
	printf("isminizin tersi:%s",atama);
	return 0;
}
