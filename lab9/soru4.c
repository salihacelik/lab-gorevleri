#include<stdio.h>
int main()
{
    int sayi,ters,sb;
    sb=0;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    int temp=sayi;
    ters=0;
    while (sayi!=0)
    {
        sb=sayi%10;
        ters=ters*10+sb;
        sayi=sayi/10;
    }
    if (temp==ters)
        printf("polidrome\n");
    
    else
        printf("not polidrome\n");
    return 0;

}