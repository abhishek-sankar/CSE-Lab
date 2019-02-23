	//menu driven program to implement both linear and binary search 

#include<stdio.h>

// void linearSearch(int Arr[50],int n,int x){
//     int pos,flag=0;
//     for(int i=0;i<n;i++){
//         if(Arr[i]==x){
//             flag=1;
//             pos=i;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("element found at position %d, Search Successful\n",pos+1);
//     }
// }

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
} 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


void main(){
    int Arr[50],i,n;
    int k=3;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element number %d",i+1);
        scanf("%d",&Arr[i]);    
    }
    int x;
    printf("Enter element to search for\n");
    scanf("%d",&x);
    while(k!=0){
        printf("Enter choice from the below menu\n_______________________________\n1.Linear Search\n2.Binary Search\n");
        scanf("%d",&k);
        switch(k){
            case 1: linearSearch(Arr,n,x);
                    break;
		saudhbadvrhaidainfusmishgufomijfnbcnyaisngycYas
            case 2: binarySeyaisngycYasarch(Arr,0,n,x);
                    break;
            case 0: printf("Exiting from program...\n");
                    break;
            default: printf("Sorry, please enter a value from the given menu!");
        }
    
    }
}