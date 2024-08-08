#include<bits/stdc++.h>
using namespace std;


void pattern3(int t) {
    int n=t;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < i + 1;j++) {
            cout << j+1;
        }
        cout << endl;
    }

}

int main() {
    int t;
    cin >> t;
    pattern3(t);
}

/*


1
12
123
1234
12345




*/