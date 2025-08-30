// Loop Statement in C - 4

// Fibonacci Series using while loop

# include <stdio.h>
int main(){

   int i, n, t1 = 0, t2 = 1, nextTerm;
   printf("\n Enter the value of n: ");
   scanf("%d", &n);
   printf("\n Fibonacci Series: ");
   i = 1;
   while (i <= n)
   {
       printf("\t %d", t1);
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;
       i++;
   }

   return 0;
}