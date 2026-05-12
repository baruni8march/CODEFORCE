#include<bits/stdc++.h>
using namespace std;
void mergesort(int arr[],int lb,int mid,int ub){
   int i=lb;
   int j=mid+1;
   int k=lb;
   int b[1000];
   while(i<=mid && j<=ub){
    if(arr[i]<=arr[j]){
        b[k]=arr[i];
    }
    else{
        b[k]=arr[j];
    }
    k++;
   
   }
    if(i>mid){
        while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else {
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int x=lb;x<=ub;x++){
        arr[x]=b[x];
    }


}

void mergearr(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
       
        mergearr(arr,lb,mid);
        mergearr(arr,mid+1,ub);
         mergesort(arr,lb,mid,ub);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergearr(arr,0,n-1);
}