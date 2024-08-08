#include<bits/stdc++.h>
using namespace std;


/*

C++ STL divided into 4 parts
1)Algorithms
2)Containers -- queue,set,list etc
3)Functions
4)Iterators

we will only learn about 2,3 and 4 in this 

*/

/* ==================================Pairs=================== */
// pairs are used to store two values in a single variable

void explainpair() { 
    pair<int, int> p = { 1,3 }; // p is a pair of two
    cout << p.first << " " << p.second << endl;
    pair <int, pair<int, int >> k = { 1 ,{2 , 4} }; //nested property
    cout << k.first << " " << k.second.first << " " << k.second.second << endl;
    pair <int, int> arr[] = { {1,2},{4,5},{6,7} };
    cout << arr[1].first << arr[2].first << endl;

}







/*==========================void Function=========*/
// a function that does not return any value
void print() {
    cout << "hello" << endl;
}




int sum(int a, int b) {
    return a + b;
}


int main() {

    print();
    int s = sum(1, 5);
    cout << s << endl;

    explainpair();

    
    return 0;
}
