#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;
    bool operator<(const point &p) {
        if (x == p.x) return y < p.y;
        else return x < p.x;
    }
};


int main() {

    vector<point> points = {{3, 4}, {1, 2}, {5, 1}, {3, 2}, {1, 3}};

    sort(points.begin(), points.end());

    for (const auto& p : points) {
        cout << "(" << p.x << ", " << p.y << ")\n";
    }


    return 0;
}