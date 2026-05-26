#include <stdio.h>
void bubleSort(int size,int array[]){
   for (int i=0;i<size;i++){
      for (int j=0;j<size-1;j++){
         if (array[j]>array[j+1]){
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1]=temp;
         }
      }  
   }
}

int main(){
     int arr[]={7,1,3,9,0,2,4,5,8,6};
     int n = sizeof(arr)/sizeof(arr[0]);
     printf("Before Sorting\n");
     for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }printf("\n");
     bubleSort(n,arr);
     printf("After Sorting\n");
     for (int j=0;j<n;j++){
        printf("%d ",arr[j]);
     }
     
     
    return 0;
}