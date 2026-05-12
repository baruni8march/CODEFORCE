#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
}
int cross(point a,point b,point c){
    return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
int dist(point a,point b){
    int dx=a.x-b.x;
    int dy=a.y-b.y;
    return dx*dx+d.y*d.y;

}
bool compare(point a,point b){
    int pro=cross(anchor,a,b);
    if(pro==0){
        return dist(anchor,a)<dist(anchor,b);
    }
    return pro>0;
}

vector<int> graham(){
    vector<int>hull;
     int idx = 0;
    for (int i = 1; i < n; i++) {
        if (points[i].y < points[idx].y ||
           (points[i].y == points[idx].y && points[i].x < points[idx].x)) {
            idx = i;
        }
    }
    swap(points[0],points[idx]);

    sort(points.begin()+1,points.end(),compare);
    hull.push_back(points[0]);
    hull.push_back(points[1]);
    for(int i=2;i<n;i++){
        point a=hull[hull.size()-2];
        point b=hull[hull.size()-1];
        point c=points[i];

        while(hull.size()>=2 && cross(a,b,c)<=0){
            hull.pop_back();
        }
        hull.push_back(i);
    }
    return hull;
}krus