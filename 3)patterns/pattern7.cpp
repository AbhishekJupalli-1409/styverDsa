#include<bits/stdc++.h>
using namespace std;

void pattern7(int t) {
    int n = t;
    for (int i = 0; i < n; i++) {
        for (int k = 0;k < n - i - 1;k++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";


        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    pattern7(t);
}


/*

   *
  ***
 *****
*******




*/