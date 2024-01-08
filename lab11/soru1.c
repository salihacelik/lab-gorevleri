#include<stdio.h>
int main ()
{
   char cumle[100];
   int kelime=0,x=0,i;
   printf("cumle giriniz\n");
   gets(cumle);

   for ( i = 0; cumle[i]; i++)
   {
      if(cumle[i]==32)
      {
        kelime++;
       if (cumle[i]==97)
       {
         x++;
       }
       
        printf("%d kelimede %d tane a vardir\n",kelime,x);
    
      }


   }
   
   
}