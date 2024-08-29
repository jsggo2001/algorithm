#include <bits/stdc++.h>

using namespace std;

vector<int> permutation;
vector<bool> chosen;
int n;

void search() {
    if (permutation.size() == n) {
        cout << "{ ";
        for (int x : permutation) {
            cout << x << " ";
        }
        cout << "}" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (!chosen[i]) {
                chosen[i] = true;
                permutation.push_back(i);
                search();
                chosen[i] = false;
                permutation.pop_back();
            }
        }
    }
}

void search2() {
    for (int i = 1; i <= n; i++) {
        permutation.push_back(i);
    }

    do {
        cout << "{ ";
        for (int x : permutation) {
            cout << x << " ";
        }
        cout << "}" << endl;
    } while (next_permutation(permutation.begin(), permutation.end()));

}

int main() {
    cout << "n을 입력하세요 ";
    cin >> n;
    cout << "\n"; 

    chosen.resize(n + 1, false);
    search2();
    return 0;
}