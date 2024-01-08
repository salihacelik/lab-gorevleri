//10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız. 
//(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)
#include<stdio.h>
int main()
{
    int dizi[10];
    int i;
    printf("deger giriniz\n");
    for ( i = 0; i < 10; i++)

    {
        scanf("%d",&dizi[i]);
        
    }
    i=0;
    while (i<=9)
    {
       printf("%d",dizi[9-i]);
        i++;
    }
    return 0;
}