#include<bits/stdc++.h>
using namespace std;
 int start(double x[],double y[],int n){
    int start=0;
    for(int i=0;i<n;i++){
        if(x[i]<x[start]  || x[i]==x[start]&& y[i]<y[start]){
            start=i;
        }
    }


 }
 double dist(double x1,double x2,double y1,double y2){
      double x=(x1-x2)*(x1-x2);
      double y=(y1-y2)*(y1-y2);
      return x+y;
 }

 double cross(double x1,double y1,double x2,double y2,double x3,double y3 ){
   return (x2-x1)*(y3-y1) -(y2-y1)*(x3-x1);
 }


int main(){
    


}