#include<bits/stdc++.h>
using namespace std;
int findstart(int x[],int y[],int n){
    int start=0;
    for(int i=0;i<n;i++){
        if(x[i]<x[start] || (x[i]==x[start] && y[i]<y[start])){
           start=i;
        }
    }
    return start;
}
 
double dist(double x1,double y1,double x2,double y2){
    double dx=x1-x2;
    double dy=y1-y2;
    return dx*dx+dy*dy;
}

double cross(double x1,double y1,double x2,double y2,double x3,double y3){
    return (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
}


vector<int> convexhull(int x[],int y[],int n){
   vector<int>convex;
   int start=findstart(x,y,n);
   int curr=start;
   double eps=1e-9;
   do{
    int next=-1;
    for(int i=0;i<n;i++){
        if(i==curr)continue;
        if(next==-1){
            next=i;
            continue;
        }
        double pro=cross(x[curr],y[curr],x[next],y[next],x[i],y[i]);
        if(pro<-eps){
            next=i;
        }
        else if(fabs(pro)<eps){
            if(dist(x[curr],y[curr],x[i],y[i])> dist(x[curr],y[curr],x[next],y[next])){
                next=i;
            }
        }
        

    }  
    curr=next;


   }while(curr!=start);
   return convex;
}

int main(){}