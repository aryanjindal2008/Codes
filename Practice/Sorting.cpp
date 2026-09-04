#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0 ;i<n-1;i++){
        bool isSwap= false;
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }  
        if (!isSwap){
            return ;
        }
    }    

}   
void printArray(int arr[],int n){
    for(int i=0 ;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;    

}
void selectionSort(int arr[],int n ){
    for (int i=0;i<n-1;i++){
        int smallestIdx =i;
        for(int j=i+1=;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0&&arr[prev]>curr)
    }
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    selectionSort(arr,n);
    printArray(arr,n);  
    return 0;
}