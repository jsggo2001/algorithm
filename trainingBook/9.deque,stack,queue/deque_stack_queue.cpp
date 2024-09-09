#include <bits/stdc++.h>

using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(5); // [5]
    dq.push_back(2); // [5,2]
    dq.push_front(3); // [3,5,2]
    dq.pop_back(); // [3,5]
    dq.pop_front(); // [5] 

    cout << "deque "; 
    for (auto a : dq) {
        cout << a << " ";
    }
    cout << endl;

    cout << "stack" << endl;

    stack<int> s;
    s.push(2); // [2]
    s.push(5); // [2,5]
    cout << s.top() << endl; // 5
    s.pop(); // [5]
    cout << s.top() << endl; // 2

    cout << "queue" << endl;

    queue<int> q;
    q.push(2); // [2]
    q.push(5); // [2, 5]
    cout << q.front() << endl; // 2
    q.pop(); // [5]
    cout << q.back() << endl; // 5

    return 0;
}