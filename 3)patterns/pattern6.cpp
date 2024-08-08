#include<bits/stdc++.h>
using namespace std;


void pattern6(int t) {
    int n = t;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n - i;j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}


int main() {
    int t;
    cin >> t;
    pattern6(t);
}


/*


12345
1234
123
12
1

*/