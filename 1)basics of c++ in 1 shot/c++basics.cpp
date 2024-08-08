#include<bits/stdc++.h>
using namespace std;
void printabhi(int i) {
    cout << "hello wabhishek" << i << endl;
}

int addsum(int a, int b) {  // this can be array, vector,tuple,list,2d arrrays anything
    return a + b;
}

void dosomething(int n) {  //pass by value destroyed after function ends
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
}

void dosome(int& n) {  //pass by refernce modifies the original data, because is has address
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
}


int main() {
    //int,long,long long,float


    int a;
    long h = 100;
    long long y = 1020003;
    float n = 5.5;
    cout << "value of y is " << y << endl;




    //strings


    // string s;
    // cin >> s;
    // cout << "hey " << s;
    // when our string has spaces in it then
    string str;
    getline(cin, str); // picks up till the endline encounter
    cout << str << endl;





    //characters


    char ch;
    cin >> ch;
    cout << ch << endl;
    //1)basics of c++ in 1 shot/datatypes.PNG  view this






    //if else


    int age;
    cin >> age;
    if (age >= 18) {
        cout << "you are adult" << endl;

    }
    else if (age >= 10) {
        cout << "you are child" << endl;
    }
    else {
        cout << "you are kid" << endl;
    }






    //switch statements
    int day = 4;
    cin >> day;
    switch (day) {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "invalid day" << endl;
        break;
        cout << "inside of check" << endl;
    }
    cout << "outside of check" << endl;



    //arrays--> fo r simlar datatypes we will use the arrays for storing them


    int arr[2];  //arary stored in consicutive memory,, but first  address is random
    cin >> arr[0] >> arr[1]; //index starts from zero in case of c++ / in matlab it starts form 1
    cout << arr[0] << " " << arr[1] << endl;  //find out why error later





    //2d arrays
    //Used to lot of matrix and graphs problems

    int k[3][3];
    k[1][2] = 91;
    cout << k[1][2] << endl;
    cout << k[1][1] << endl; // for all remain--> garbage value
    cout << k[0][1] << endl;





    //strings as indexes-->string stores char with indexes


    string abhi = "Abhishek";
    int length = abhi.size();
    cout << abhi[0] << endl;
    cout << abhi[length - 1] << endl;
    abhi[length - 1] = 'e';
    cout << abhi << endl;





    //for loops


    for (int i = 1;i <= 10;i++) {
        cout << i << endl;
    }





    //while loop
    int i = 1;
    while (i <= 3) {
        cout << "hello" << endl;
        i++;
    }





    //do while loop--> run fo rmin one time --> use in apps free trail once



    do {
        cout << "hello do" << endl;
    } while (i <= 3);






    // FUNCTIONS
    // Functions are set of code which performs something for you
    // Functions are used to modularise code
    // function are sused to increase readability •
    // Functions are  used to use same code multiple times
    //void --> doesnt return anything
    // int --> returns integer value



    // printabhi();// calling the function
    printabhi(i);// passing withparameter

    int num1, num2;
    num1 = 89;
    num2 = 65;
    int sum = addsum(num1, num2);
    cout << sum << endl;
    int minimum = min(num1, num2);  // inbuilt function
    cout << minimum << endl;


    //pass by value
    int num = 10;
    dosomething(num);// only the copy 
    //this type mostly used in mnc companies and leetcode. So that their DB cant be corrupted
    cout << num << endl;

    int number = 10;
    dosome(num);// take refernce /address;
    cout << num << endl;


    //use for loops tp take n print array outputs
     //arrays generally only passed by reference by void main(int arr[]);


    return 0;

}
