#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN=2000000;
ll A[MAXN];
ll B[MAXN];
void mergearr(ll a[],int lb,int mid,int ub);
void mergesort(ll a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        mergearr(a,lb,mid,ub);
    }
}
void mergearr(ll a[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            B[k]=a[i++];
        }
        else{
            B[k]=a[j++];
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            B[k++]=a[j++];
        }
    }
    else{
        while(i<=mid){
            B[k++]=a[i++];
        }
    }
    for(int t=0;t<k;t++){
        a[lb+t]=B[t]; 
    }
}
int main(){
  ll n;
  while(cin>>n && n!=0){
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergesort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i];
        if(i!=n-1){
        cout<<" ";
        }
    }
    cout<<"\n";
  }





}