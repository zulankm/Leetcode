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


void selectionsort(int *array, int size) {
     int i;
     int j;
     int min;
     int temp;

     for(i=0; i < (size-1); i++) {
          min = i;
          for(j=i+1; j <= (size-1); j++)
              if (array[j] < array[min]) 
              {
                     comparisons++;
                     min = j;
              }
                    temp = array[i];
                    exchanges++;
                    array[i] = array[min];
                    exchanges++;
                    array[min] = temp;
                    exchanges++;
      }
}
void main()
{   
    int size;
    
      printf("Selection Sort: \n");
      printf("Enter the number of elements you want in: " );
      scanf("%d",&size);
        printf("Enter the elements: ");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
        }
      selectionsort(array,size);
      print(array,size);
     printf("Comparisons:%d  \n" ,comparisons ) ;
     printf("Exchanges:%d \n", exchanges );
}
