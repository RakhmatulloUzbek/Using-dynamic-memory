#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i, n;
	char *ptr;
	
    ptr=calloc(50,sizeof(char));
    
	printf(">>> Bir cumle girirniz : ");
	gets(ptr);

	n=strlen(ptr);
	ptr = realloc (ptr, n*sizeof(char));

    for (i=n-1; i>=0; i--){
        if (ptr[i] == ' '){       
            ptr[i] = '\0';
			 printf("%s ", (ptr+i+1));
        }
    }
  puts(ptr);

	free(ptr);
}

