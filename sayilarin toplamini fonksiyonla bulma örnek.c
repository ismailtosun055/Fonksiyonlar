#include<stdio.h>

int toplama(int sayi11,int sayi12)
{	
	return(sayi11+sayi12);
}

int main()
{
	int sayi1,sayi2;
	printf("iki sayi giriniz:\n");
	scanf("%d%d",&sayi1,&sayi2);
	printf("sayilarin toplami:%d",toplama(sayi1,sayi2));
	
	return 0;
}
