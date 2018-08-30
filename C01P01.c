//menu driven program to implement both linear and binary search 

#include<stdio.h>

void linearSearch(int Arr[50],int n){
    int ele,pos,flag=0;
    printf("enter element to be searched for\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(Arr[i]==ele){
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1){
        printf("element found at position %d, Search Successful\n",pos+1);
    }
}

void binarySearch(int Arr[50],int n){
    int beg,end,mid,flag=1,ele,pos;
    beg = 0;
    end = n;

    printf("Enter the element to be searched for\n");
    scanf("%d",&ele);
    while(flag){
        mid = (beg+end)/2;
        if(Arr[mid]>ele){
            end = mid;
        }else if (Arr[mid]<ele){
            beg = mid;
        }else if (Arr[mid]==ele){
            flag = 0;
            pos = mid;
            break;
        }
    }
}

void sortArray(int Arr[50],int n){
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(Arr[i]>Arr[j]){
                temp = Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }    
    }
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
    
    while(k!=0){
        printf("Enter choice from the below menu\n_______________________________\n1.Linear Search\n2.Binary Search\n");
        scanf("%d",&k);
        switch(k){
            case 1: linearSearch(Arr,n);
                    break;
            case 2: binarySearch(Arr,n);
                    break;
            case 0: printf("Exiting from program...\n");
                    break;
            default: printf("Sorry, please enter a value from the given menu!");
        }
    
    }
}