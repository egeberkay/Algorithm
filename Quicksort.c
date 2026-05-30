#include <stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int low ,int high){
    int pivot = arr[high];
    int i = (low -1);
    for (int j=low; j<high; j++){
        if (arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}            
void quickSort(int arr[],int low ,int high){
    if (low < high){
         int pi = partition(arr,low,high);
         quickSort(arr,low,pi-1);//LEFT
         quickSort(arr,pi+1,high);//RIGHT
    }
}
void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
       printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {10,7,8,9,1,5};
    printf("Before Sorting :\n");
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("\n");
    printf("After Sorting : \n");
    printArray(arr,n);

    return 0;
}