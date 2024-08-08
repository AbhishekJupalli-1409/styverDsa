#include<bits/stdc++.h>
using namespace std;


void pattern5(int t) {
    int n = t;
    for (int i = 0;i < n;i++) {
        for (int j = n;j > i;j--) {
            cout << "*";
        }
        cout << endl;
    }
}


int main() {
    int t;
    cin >> t;
    pattern5(t);
}



/*


*****
****
***
**
*



*/