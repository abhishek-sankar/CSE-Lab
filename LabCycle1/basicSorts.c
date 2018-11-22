// C program for implementation of Bubble sort,Selection sort and Insertion sort

#include <stdio.h>
#include <math.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
 
// Driver program to test above functions
int main()
{
    int arr[50];
    int n,ch;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element at position %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Choose the type of sort you want to implement\n______________________________\n1.BubbleSort\n2.SelectionSort\n3.InsertionSort\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:bubbleSort(arr, n);
            break;
    case 2:selectionSort(arr,n);
            break;
    case 3:insertionSort(arr,n);
            break;
    default:printf("Sorry, invalid choice\n");
    }
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
