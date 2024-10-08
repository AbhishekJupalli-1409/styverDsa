#include<bits/stdc++.h>
using namespace std;





/*==========================void Function=========*/
// a function that does not return any value
void print() {
    cout << "--void func--" << endl;
    cout << "hello" << endl;
}



/*===========================Int Function=============*/
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
    s.push(10);//{10}
    s.push(13);//{13,10}
    s.push(15);//{15,13,10}
    s.emplace(9);//{9,15,13,10}
    cout << s.top() << endl;//9
    s.pop();//{15,13,10}
    cout << s.top() << endl;//15


    // Correct way to print the elements in the stack:
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}











/*=============================Queue=====================*/
//Uses FIFO, main operations are front,back,pop,push
//all operations take O(1) -- TC
//front returns the first element, back returns the last element
void explainqueue() {
    cout << "--explainQueue--" << endl;
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back() += 5;//{1,2,9};
    cout << q.front() << endl;//1
    cout << q.back() << endl;//9
    q.pop();//{2,9}
    cout << q.front() << endl;

    /*we cant use iterator in case of queue it doesnt support std::queue
       The std::queue container is designed for FIFO (First In, First Out) access,
       and it only provides access to the front and back elements.*/
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}






/*==============================PriorityQueue================*/
//Uses max heap, main operations are top,pop,push
//all operations take O(log n) -- TC, top --> O(1);
//largest element stays at the top
void explainpriorityqueue() {
    cout << "--priorityQueue--" << endl;
    priority_queue<int> pq;  //similar to stack
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    cout << pq.top() << endl;//8
    pq.push(3);//{8,5,3,2}
    pq.pop();//{5,3,2} //we cant output pop or push
    cout << pq.top() << endl;//5
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;


}







/*==============================Set=====================*/

   //set is an unordered collection of unique elements
   //And they are --SORTED n --UNIQUE
    //set is implemented as a binary search tree
    //set is implemented as a red-black tree
    //set is implemented as a hash table
    //set is implemented as a combination of hash table and binary search tree
    //set is implemented as a combination of hash table and red-black tree

void explainset() {
    cout << "--set--" << endl;
    set<int> st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(5);//{1,2,4,5}
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;
    auto it = st.find(4);//gives a pointer which points to the 4
    int cnt = st.count(1);// if number exsists --> T , else --> F
    cout << cnt << endl;
    auto it1 = st.lower_bound(4);
    cout << *it1 << endl;//4
    auto it2 = st.upper_bound(4);
    cout << *it2 << endl;//5

    //all remaining begin(),end(),rend(),rbegin(),size(),swap() are same

    //all operations take O(logn) --> TC







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

    explainqueue();

    explainpriorityqueue();

    explainset();

    return 0;
}
