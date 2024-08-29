#include <bits/stdc++.h>

using namespace std;

vector<int> subset;
int n;

void search(int k) {
    if (k == n + 1){ 
        cout << "{ ";
        for (int i : subset) {
            cout << i << " ";
        }
        cout << "}" << "\n";
    } else {
        // k가 있는 경우
        subset.push_back(k);
        search(k + 1);
        // k가 없는 경우
        subset.pop_back();
        search(k + 1);
    }
}


int main() {
    cout << "n을 입력하세요: ";
    cin >> n;
    
    search(1);

    return 0;
}
