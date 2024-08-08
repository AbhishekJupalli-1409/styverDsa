#include<bits/stdc++.h>
using namespace std;


void pattern4(int t) {
    int n = t;
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < i+1;j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}


int main() {
    int t;
    cin >> t;
    pattern4(t);
}



/*

1
22
333
4444
55555


*/