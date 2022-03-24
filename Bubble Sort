#include<stdio.h>
#include<stdlib.h>


int array[500];
 int comparisons=0;
 int exchanges=0;
 

void print (int *array, int size)
 {
      int i=0;
     
      printf( "Ending array ");
      for(i=0; i < size; i++) {
          printf("%d ",array[i] );
      }
      printf("\n");
}


void bubblesort(int *array, int size) {
         int i;
         int j;
         int temp;

         for(i=size-2; i>=0; i--)
             for(j=0; j<=i; j++)
                  if (array[j] > array[j+1])
                   {
                     comparisons++;
                     temp = array[j];
                     exchanges++;
                    array[j] = array[j+1];
                     exchanges++;
                    array[j+1] = temp;
                     exchanges++;
                   }
}

void main()
{   
    int size;
    
      printf("Insertion Sort: \n");
      printf("Enter the number of elements you want in: " );
      scanf("%d",&size);
        printf("Enter the elements: ");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
        }
      insertionsort(array,size);
      print(array,size);
     printf("Comparisons:%d  \n" ,comparisons ) ;
     printf("Exchanges:%d \n", exchanges );
}
