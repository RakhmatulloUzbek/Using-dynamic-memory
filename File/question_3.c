#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Girilen kelimeyi tersten yazdiran program...
int main(){
	int i, n;
	char *ptr;
	
    ptr=calloc(100,sizeof(char));
    
	printf(">>> Bir kelime girirniz : ");
	gets(ptr);
	

	n=strlen(ptr);
	ptr = realloc (ptr, n*sizeof(char));

    for (i=n-1; i>= 0; i--){
    	 printf("%c",*(ptr+i));
    }

	free(ptr);
}
