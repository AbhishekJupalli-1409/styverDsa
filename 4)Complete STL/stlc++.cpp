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



/*==============================vector=================*/
// vector is a dynamic array, it can grow or shrink in size as elements are added or removed


void explainvector() {
    vector<int> v;
    v.push_back(6); //{6}
    v.insert(v.end(), { 1,2 });//{6,1,2}

    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " "; // Dereference the iterator to get the value
    }
    cout << endl;

    //using vector pairs
    vector <pair<int, int>> vector1;
    vector1.push_back({ 1,4 }); //{1,4}
    vector1.emplace_back(5, 6);//{1,4,5,6}

    for (std::vector<std::pair<int, int>>::iterator it = vector1.begin(); it != vector1.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;

    vector <int> n1(5, 100);//{100,100,100,100,100}
    vector <int> n2(n1);//copies n1 too n2






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

    explainvector();


    return 0;
}
