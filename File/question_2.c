#include<stdio.h>
#include<stdlib.h>

 
int main(){
	int i, n, k, *ptr, max=0;
	printf(">>> Dizide kac eleman olacak : ");
	scanf("%d",&n);
	
	ptr=malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		printf(" %d.elemani giriniz : ",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\n>>> Dizi yazdiriliyor...\n");
	for(i=0;i<n;i++)
	printf("%3d",*(ptr+i));
	
	for(i=0;i<n;i++)
	if(*(ptr+i)>max)
	max=*(ptr+i);
	
	printf("\n\n>>> Dizideki en buyuk eleman : %d",max);
	free(ptr);
	
	
	return 0;
}
