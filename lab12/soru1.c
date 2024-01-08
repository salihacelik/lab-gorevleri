#include<stdio.h>
int main()
{
    char string1[10],string2[10],sonuc;

    printf("ilk string ifadeyi giriniz\n");
    scanf("%s",&string1);

    printf("ikinci ifadeyi giriniz\n");
    scanf("%s",&string2);
    sonuc = string1 + " " + string2;
    printf("%s",sonuc);
    return 0;
}
