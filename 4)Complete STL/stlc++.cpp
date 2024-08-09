#include<bits/stdc++.h>
using namespace std;





/*==========================void Function=========*/
// a function that does not return any value
void print() {
    cout << "--void func--" << endl;
    cout << "hello" << endl;
}




int sum(int a, int b) {
    cout << "--int func--" << endl;
    return a + b;
}









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
    cout << "--explain pair--" << endl;
    pair<int, int> p = { 1,3 }; // p is a pair of two
    cout << p.first << " " << p.second << endl;
    pair <int, pair<int, int >> k = { 1 ,{2 , 4} }; //nested property
    cout << k.first << " " << k.second.first << " " << k.second.second << endl;
    pair <int, int> arr[] = { {1,2},{4,5},{6,7} };
    cout << arr[1].first << arr[2].second << endl;

}







/*==============================vector=================*/
// vector is a dynamic array, it can grow or shrink in size as elements are added or removed
//internally used singly linked list-->operations are slower than list


void explainvector() {
    cout << "--explainVector--" << endl;
    vector<int> v;
    v.push_back(6); //{6}
    v.insert(v.end(), { 1,2 });//{6,1,2}

    for (auto it = v.begin(); it != v.end(); ++it) { //or u can use auto too
        cout << *it << " "; // Dereference the iterator to get the value
    }
    cout << endl;

    //using vector pairs
    vector <pair<int, int>> vector1;
    vector1.push_back({ 1,4 }); //{1,4}
    vector1.emplace_back(5, 6);//{1,4,5,6}

    for (vector<std::pair<int, int>>::iterator it = vector1.begin(); it != vector1.end(); ++it) {  //or use auto
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;

    vector <int> n1(5, 100);//{100,100,100,100,100}
    vector <int> n2(n1);//copies n1 too n2

    n2.insert(n2.begin() + 3, 56);//{100,100,100,56,100,100}
    cout << n2.size() << endl;
    n2.clear();
    cout << n2.size() << endl;
    cout << n2.empty() << endl;


}







/*===================================list===================*/
//list is also similar to vector.-->used tuply linked list internally

void explainlist() {
    cout << "--explainList--" << endl;
    list <int> ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.emplace_back(40);
    ls.push_front(2);
    ls.emplace_front(9);

    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;
    //rest functions are same as vector
    //begin,end,insert,rbegin,rend,clear,size,swap;

}








/*=============================Dequeue===================*/
void explaindeque() {
    cout << "--explainDeque--" << endl;
    deque<int> dq;
    dq.push_back(12);//{12}
    dq.push_front(10);//{10,12}
    dq.emplace_back(20);//{10,12,20}
    dq.emplace_front(15);//{15,10,12,20}
    dq.insert(dq.begin() + 2, 30);//{15,10,30,12,10,20}

    for (auto it : dq) {
        cout << it << " ";
    }

    dq.erase(dq.begin() + 2);//{15,10,12,20}
    dq.pop_back();//{15,10,12}
    dq.pop_front();//{10,12}
    cout << dq.back() << endl;//12
    for (auto it : dq) {
        cout << it << " ";
    }
    cout << endl;

}









/*============================Stack=====================*/
//Uses FIFO, main operations are top,pop,push
//all operations take O(1) -- TC

void explainstack() {
    cout << "--explainStack--" << endl;
    stack<int> s;
    s.push(10);
    s.push(13);
    s.push(15);
    s.emplace(9);//{10,13,15,9}
    cout << s.top() << endl;//9
    s.pop();//{10,13,15}
    cout << s.top() << endl;//15

}




int main() {

    print();
    int s = sum(1, 5);
    cout << s << endl;

    explainpair();

    explainvector();

    explainlist();

    explaindeque();

    explainstack();

    return 0;
}
