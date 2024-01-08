//Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan 
//programı yazınız.
/*#include<stdio.h>
int main()
{
    int  dizi[5];
    int i=0,sayi=0;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    while (i<5)
    {
       dizi[i]=sayi%10;
       sayi=sayi/10;
       i++;
       printf("dizi[%d]=%d\n",i,dizi[i]);
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int sayi, tersSayi = 0;
    int basamaklar[5];
    int i = 0;

    printf("Maksimum 5 basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);

    
    while (sayi > 0) {
        tersSayi = tersSayi * 10 + sayi % 10;
        sayi /= 10;
    }

    
    while (tersSayi > 0) {
        basamaklar[i] = tersSayi % 10;
        tersSayi /= 10;
        i++;
    }

    
    printf("Sayinin basamaklari:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", basamaklar[j]);
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int basamak[5];
    int i,sayi,sonbasamak=0;

    printf("5 basamakli bir sayi giriniz\n");
    scanf("%d",&sayi);
    for (i = 0; i < 5; i++)
    {
        basamak[i]=sayi%10;
        sayi/=10;
        printf("basamak[%d] = %d\n",i,basamak[i]);
    }
    return 0;
    

}