#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int v[n];
   for(int i=0; i<n; i++)
   {
     scanf("%d",&v[i]);
   }
   int pos_sum = 0;
   int neg_sum = 0;
   for(int i=0; i<n; i++)
   {
     if(v[i] > 0)
     pos_sum += v[i];
     else if(v[i] < 0)
     {
       neg_sum -= v[i];
     }
   }
   printf("%d %d\n", pos_sum, -neg_sum);
   return 0;
}