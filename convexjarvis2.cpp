#include<bits/stdc++.h>
using namespace std;
double cross(double x1,double y1,double x2,double y2,double x3,double y3){
    return (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
}
double dist(double x1,double y1,double x2,double y2){
    double dx=x2-x1;
    double dy=y2-y1;
    return dx*dx+dy*dy;
}
int findstart(double x[],double y[],int n){
    int start=0;
    for(int i=1;i<n;i++){
        if(x[i]<x[start] || x[i]==x[start] && y[i]<y[start]){
            start=i;
        }
    }
    return start;
}
vector<int> convexhull(double x[],double y[],int n){
   int start=findstart(x,y,n);
   int curr=start;
   vector<int>hull;
   double eps=1e-9;
      
   do{
        hull.push_back(curr);
        int next=-1;
      for(int i=1;i<n;i++){
        if(next==-1){
            continue;
        }
        double cp=cross(x[curr],y[curr],x[next],y[next],x[i],y[i]);
        if(cp<-eps){
            next=i;
        }
        else if(fabs(cp)<eps){
            if(dist(x[curr],y[curr],x[i],y[i]) > dist(x[curr],y[curr],x[next],y[next]) ){
                next=i;
            }
        }
        
      }  


curr=next;

  }while(start!=curr);
}