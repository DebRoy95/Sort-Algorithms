//Author: Deb Roy
//Insertion Sort

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

int* insertionSort(int* arr)//Sorting using insertion at the right position
{
  int i,j,key;

  for(i=1;i<size;i++)
  {
    printf("\n");
    display(arr);
    printf("\n");

    key=arr[i];
    j=i-1;

    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
  printf("\n");
  display(arr);
  printf("\n");

  return arr;
}

int main()//main Function
{
  int* arr;
  printf("\n*********Insertion Sort*******");

  arr=input();
  printf("\nThe List\n");
  display(arr);
  printf("\nSorting...\n");
  printf("\nIterations");
  arr=insertionSort(arr);
  printf("\nSorted List\n");
  display(arr);

  return 0;
}
