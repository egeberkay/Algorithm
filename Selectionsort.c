#include <stdio.h>
int selectionSort(int size,int array[]){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for (int j=i+1;j<size;j++){
            if (array[j]<array[minIndex]){
                minIndex=j;
            }   
        }   
        int temp=array[i];
        array[i]=array[minIndex];
        array[minIndex]=temp;
    }
}
int main(){
    int arr[] = {2,4,6,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
    selectionSort(n,arr);
    printf("After Sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}