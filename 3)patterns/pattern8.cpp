#include<bits/stdc++.h>
using namespace std;

void pattern8(int t) {
    int n = t;
    for (int i = 0;i < n;i++) {
        for (int k = 0;k < i;k++) {
            cout << " ";

        }
        for (int j = 0;j < 2 * n - 1 - 2 * i;j++) {
            cout << "*";

        }


        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    pattern8(t);
}


/*

*******
 *****
  ***
   *




*/