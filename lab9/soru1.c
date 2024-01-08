#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C;
    printf("A B C degerleri giriniz\n");
    scanf("%d %d %d",&A,&B,&C);
    if (A>B&&A>C)
    {
       printf("en buyuk sayi=%d\n",A);
    }
      if (B>A&&B>C)
    {
       printf("en  buyuk  sayi=%d\n",B);
    }
      if (C>B&&C>A)
    {
       printf("en  buyuk  sayi=%d\n",C);
    }
    if (A==B&&A==C)
    {
       printf("sayilar esittir\n");
    }
    
    
}