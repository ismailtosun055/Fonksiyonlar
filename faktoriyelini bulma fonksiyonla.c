#include<stdio.h>
double factoriyel(double sayi)
{
	double fact=1,i;
	
	for(i=1;i<=sayi;i++)
	{
		fact*=i;
	}
	
	return fact;
}

int main()
{
	int sayi1;
	printf("faktoriyelini ogrenmek istediginiz sayiyi girin:");
	scanf("%d",&sayi1);
	
    printf("%d sayisinin faktoriyeli:%lf'dir.",sayi1,factoriyel(sayi1));
    
    return 0;
}

