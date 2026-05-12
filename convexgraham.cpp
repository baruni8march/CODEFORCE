#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

Point anchor;

// cross product of AB x AC
int cross(Point A, Point B, Point C) {
    return (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
}

int dist2(Point A, Point B) {
    int dx = A.x - B.x;
    int dy = A.y - B.y;
    return dx * dx + dy * dy;
}

bool compare(Point p1, Point p2) {
    int cp = cross(anchor, p1, p2);

    if (cp == 0) {
        return dist2(anchor, p1) < dist2(anchor, p2);
    }

    return cp > 0;
}

vector<Point> grahamScan(vector<Point> points) {
    int n = points.size();

    if (n <= 2) return points;

    // Step 1: find anchor = lowest y, if tie then lowest x
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (points[i].y < points[idx].y ||
           (points[i].y == points[idx].y && points[i].x < points[idx].x)) {
            idx = i;
        }
    }

    swap(points[0], points[idx]);
    anchor = points[0];

    // Step 2: sort by polar angle around anchor
    sort(points.begin() + 1, points.end(), compare);

    // Step 3: build hull
    vector<Point> hull;
    hull.push_back(points[0]);
    hull.push_back(points[1]);

    for (int i = 2; i < n; i++) {
        while (hull.size() >= 2 &&
               cross(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) <= 0) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }

    return hull;
}

int main() {
    vector<Point> points = {
        {0, 3}, {1, 1}, {2, 2}, {4, 4},
        {0, 0}, {1, 2}, {3, 1}, {3, 3}
    };

    vector<Point> hull = grahamScan(points);

    cout << "Convex Hull:\n";
    for (Point p : hull) {
        cout << "(" << p.x << ", " << p.y << ")\n";
    }

    return 0;
}