#include<stdio.h>
int main()
{ int sicak;

    printf("degeri giriniz\n");
    scanf("%d",&sicak);

    if (sicak<0)
    {
     printf("%d donma noktasi altinda\n",sicak);

    }
 if (sicak>0)

 {
    printf("%d donma noktasiüstünde\n",sicak);
 
 }
    return 0;
}