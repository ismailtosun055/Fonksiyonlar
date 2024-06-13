#include<stdio.h>

void bastir(int dizi[][3],int size){
	int i,k;
	for(i=0;i<size;i++){
		for(k=0;k<3;k++){
			printf("%d ",dizi[i][k]);
		}
		printf("\n");
	}
	
}
int main(){
	int i,k;
	int matris[3][3];
	printf("matrisinizi olusturun:");
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			scanf("%d",&matris[i][k]);
		}
	}
	bastir(matris,3);
	return 0;
}
