#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    int i=1;
    int sonuc=1;
    printf("enter N\n");
    scanf("%d",&N);
    while (i<=N)
    {
     sonuc=sonuc*i;
     i++;
    }
    printf("%d",sonuc);
    return 0;
}