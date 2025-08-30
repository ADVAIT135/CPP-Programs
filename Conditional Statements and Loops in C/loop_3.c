// Loop Statement in C - 3

// Print numbers divisible by 2 
# include <stdio.h>
int main(){

   int i,n;
   printf("\n Enter the value of n: ");
   scanf("%d", &n);
   printf("\n Numbers divisible by 2 are: ");
   i = 2;
   while (i <= n)
   {
       printf("\t %d", i);
       i += 2;
   }
   

   return 0;
}
   