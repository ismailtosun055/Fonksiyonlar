#include<stdio.h>
#include<string.h>

int uzunluk(char yazi[100]){
	int i,uzun=0;
	for(i=0;yazi[i]!='\0';i++){
		if(yazi[i]==' ');
	    else uzun++;
    }
	return(uzun);
}

int main(){
	char isim[100];
	printf("bir yazi yaziniz:");
	gets(isim);
	printf("yazdiginiz yazinin uzunlugu:%d",uzunluk(isim));
	return 0;
}
