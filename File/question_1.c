#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int *p, n, i;
printf("Kac int deger tutulacak:");
scanf_s("%d", &n);
p = (int *)malloc(n*sizeof(int));
for (i = 0; i < n; i++)
{
printf("Deger gir:");
scanf_s("%d", p + i);
}
for (i = 0; i < n; i++)
printf("Adres: %d Deger:%d\n", p + i, *(p + i));
return 0;
}
