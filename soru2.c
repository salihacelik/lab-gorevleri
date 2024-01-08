#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[50];
    int i;
    printf("enter string\n");
    gets(dizi);
    for(i=0;i<50;i++)
    {
        if(dizi[i]>=97 && dizi[i]<=122 )
        {
            printf("%c",dizi[i]);
        }

    }
    return 0;
return 0;



}