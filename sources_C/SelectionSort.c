#include <stdio.h>
#include <malloc.h>

int size;//Size of the Array

void swap(int* n1,int *n2)//Swaps values of two given numbers
{
  int temp=*n1;
  *n1=*n2;
  *n2=temp;
  /**n1=*n1+*n2;
  *n2=*n1-*n2;
  *n1=*n1-*n2;*/
}


void display(int *arr)
{
  int i;
  for(i=0;i<size;i++)
    printf("%d ",arr[i]);
}
/*takes a size as input,creates an array of length size
inputs element into array*/
int* input()
{
  int *arr,i;

  //Input the Size of the array
  printf("\n\nEnter Size of the list:");
  scanf("%d",&size);

  //Allocation of memory for the array
  arr=(int*)malloc(size*sizeof(int));

  //Input Elements
  for(i=0;i<size;i++)
    {
      printf("\nEnter List item %d : ",i+1);
      scanf("%d",&arr[i]);
    }
  //return the filled List
  return arr;
}

int* selectSort(int* arr)//Sorting using minimum selection
{
  int i,j,minIndex;

  for(i=0;i<size-1;i++)//scan each position
  {
    printf("\n");
    display(arr);
    printf("\n");
    minIndex=i;
    for(j=i+1;j<size;j++)//find the Minimum number
      {
        if(arr[j]<arr[minIndex])
          minIndex=j;
      }

    swap(&arr[minIndex],&arr[i]);//swap it with the current position in concern
  }
  return arr;
}

int main()
{
  int* arr;
  printf("\n*********Selection Sort*******");

  arr=input();
  printf("\nThe List\n");
  display(arr);
  printf("\nSorting...\n");
  printf("\nIterations");
  arr=selectSort(arr);
  printf("\nSorted List\n");
  display(arr);

  return 0;
}
