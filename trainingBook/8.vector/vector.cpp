#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {1,2,2,3,4,5,5,6,7,7,8,9};

    cout << *v.begin() << endl;
    cout << *(v.end() - 1) << endl;

    cout << endl;

    auto a = lower_bound(v.begin(), v.end(), 5);
    auto b = upper_bound(v.begin(), v.end(), 5);

    cout << "lower bound : " << *a << endl;
    cout << "upper bound : " << *b << endl << endl;

    cout << "v 벡터 시작" << endl;

    for (auto x : v) {
        cout << x << "\n";
    }

    cout << "v 벡터 끝" << endl;

    cout << endl;

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "v 중복제거 벡터 시작" << endl;

    for (auto x : v) {
        cout << x << "\n";
    }

    cout << "v 중복제거 벡터 끝" << endl;

    return 0;
}