#include<stdio.h>
int sayilaricarpma(int dizi1[],int size){
	int toplam=1,i;
	for(i=0;i<size;i++){
		toplam*=dizi1[i];
	}
	return toplam;
}
int main(){
	int sayi,i,dizi[5];
	printf("5 sayilik dizinizi girin:");
	for(i=0;i<5;i++){
	   scanf("%d",&dizi[i]);
    }
    printf("dizinin elemanlarinin carpimi sonucu:%d",sayilaricarpma(dizi,5));
    return 0;
}

