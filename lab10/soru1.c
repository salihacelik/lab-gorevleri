//8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp 
//ekrana yazdırın.


#include<stdio.h>
int main()
{
    float dizi[8];

    float toplam=0;
    printf("8 adet deger giriniz\n");
    for (size_t i = 0; i < 8; i++)
    {
        scanf("%f",&dizi[i]);
        toplam+=dizi[i];
    }
    
    printf("deger ortalamasi=%f\n",toplam/8);
    return 0;
}