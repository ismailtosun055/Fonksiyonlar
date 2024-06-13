#include<stdio.h>

void ikiliksayi(int sayi1){
	int dizi[100],i,j,a;
	for(i=0;sayi1!=0;i++){
		dizi[i]=sayi1%2;
		sayi1=sayi1/2;
	}
	printf("sayinin ikili tabandaki degerinin karsiligi:");
	for(j=i-1;j>=0;j--){
		printf("%d",dizi[j]);
	}
}
int main(){
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	ikiliksayi(sayi);
	return 0;
}

