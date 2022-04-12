#include<stdio.h>
#include<stdlib.h>
//Kullanican dizi elemanlari tek tek okuyan ve ekrana yazdiran pointer program...
 
int main(){
	int i, n, k, *ptr, max=0;
	printf(">>> Dizide kac eleman olacak : ");
	scanf("%d",&n);
	
	ptr=malloc(n*sizeof(int));
    if(ptr==NULL){
    	printf(">>> Yeterli hafiza yok!!!");
	}
	for(i=0;i<n;i++){
		printf(" %d.elemani giriniz : ",i+1);
		scanf("%d",ptr+i);
	}
	printf("\n>>> Dizi yazdiriliyor...\n");
	for(i=0;i<n;i++)
	printf("%3d",*(ptr+i));
	
	
	printf("\n\n>>> Dizi'ye kac eleman eklenecek : ");
	scanf("%d",&k);
	n+=k;
	
	ptr= realloc(ptr, n*sizeof(int));
	
	for(;i<n;i++){
		printf(" %d.elemani giriniz : ",i+1);
		scanf("%d",&ptr[i]);
	}
	
	printf("\n>>> Dizi yazdiriliyor...\n");
	for(i=0;i<n;i++)
	printf("%3d",*(ptr+i));
	
	free(ptr);
}
