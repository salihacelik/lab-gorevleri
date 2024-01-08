//Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini 
//ekrana basan programı yazınız.

#include<stdio.h>
int main()
{
    int dizi[10];
    int i;
    int sonuc=1;
    printf("deger giriniz\n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&dizi[i]);
        if (0>dizi[i])
        {
            break;
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        sonuc=dizi[i]*dizi[i];
        printf("%d\n",sonuc);
        if (0>dizi[i])
        {
            break;
        }


    }
    
    
   
    return 0;
}