#include<stdio.h>
void bsearch()

{


   int c,i,tcase, first, last, middle, n, search, array[100];
   scanf("%d",&tcase);
   for(i=0;i<tcase;i++)
   {
     scanf("%d",&n); 
    for (c = 0; c < n; c++)
      scanf("%d",&array[c]); 

      scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search)
       {
         printf("Present %d", search);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not Present.\n");
      
   }

}
int main()
{
    lsearch();
    return 0;
}