#include<stdio.h>
#include<math.h>
int main()
{
    int sayi,i; 
    float sonuc=0;
    int faktoriyel=1;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    for (i = 1; i <= sayi; i++)
    {
        faktoriyel*=i;
        sonuc=sonuc+pow(sayi,i/faktoriyel);
    }
    printf("sonuc=%f",sonuc);
    return 0;
    
  


}