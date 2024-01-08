#include<stdio.h>
int main()
{
    float temp;
    printf("Fahrenheit degeri giriniz\n");
    scanf("%f",&temp);

    printf("%f Celsius",(temp-32)/1.8);
    return 0;
}