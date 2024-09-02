#include <bits/stdc++.h>

using namespace std;

int n; 
int answerCount = 0;
vector<int> col;
vector<int> diag1;
vector<int> diag2;

void search(int y) {
    if (y == n) {
        answerCount++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main() {
    cout << "Enter the value of n: ";
    cin >> n;
    col.assign(n, 0);
    diag1.assign(2*n-1, 0);
    diag2.assign(2*n-1, 0);
    
    search(0);

    cout << "Number of solutions: " << answerCount << endl;

    return 0;
}
