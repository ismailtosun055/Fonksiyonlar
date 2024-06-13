#include<stdio.h>

void hatayibas(int hata)
{
	printf("hata kodu %d\nbu sayi negatiftir!!! yanlis girdiniz!!!",hata);
}

int main()
{
	int sayi;
	printf("lutfen negatif olmayan bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0){
		hatayibas(404);
	}
	
	else if(sayi==0){
		printf("sayiniz sifira esit");
	}
	
	else {
		printf("%d sayisi pozitiftir",sayi);
	}
	return 0;
}
