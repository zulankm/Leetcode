#include<stdio.h>
#include<math.h>

int min(int a,int b)
{
    return (a>b) ?   b:a;
}
int jSearch(int arr[], int x, int n)
{
 
    int step = sqrt(n);
 
    
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
 

    while (arr[prev] < x)
    {
        prev++;
 
       
        if (prev == min(step, n))
            return -1;
    }
   
    if (arr[prev] == x)
        return prev;
 
    return -1;
}
int main()
{
     int tcase,i,c,n,x,arr[100];
     scanf("%d",&tcase);
   for(i=0;i<tcase;i++)
   {
     scanf("%d",&n); 
    for (c = 0; c < n; c++)
      scanf("%d",&arr[c]); 
      scanf("%d", &x);
      int pos= jSearch(arr,x,n);
      
      printf("Element at %d",pos);
      
   }


}