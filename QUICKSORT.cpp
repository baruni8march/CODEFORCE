#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
int partition(int arr[],int lb,int ub){
    int start=lb;
    int end=ub;
    int pivot=arr[start];
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}
void quicksort(int arr[],int lb,int ub){
  if(lb<ub){
      int loc=partition(arr,lb,ub);
    quicksort(arr,lb,loc-1);
    quicksort(arr,loc+1,ub);
  }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}