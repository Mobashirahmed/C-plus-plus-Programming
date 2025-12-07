#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 34;
    char c = 'c';
    cout <<"The value of a was: "<<a;
    cout <<"The value of c was: "<<c;
    a = 45;
    c = '4';
    cout << "The value of a is: "<<a;
    cout << "The value of c is: "<<c;

    // Constants in C++
    const int b = 3;
    cout <<"The value of b was: "<<b;
    // b = 45; // You will get an error because b is a constant
    cout <<"The value of b is: "<<b;

    // Manipulators in C++

    int d = 3, e = 78, f = 1233;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    cout<<"The value of f without setw is: "<<f<<endl;

    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    cout<<"The value of e is: "<<setw(4)<<e<<endl;
    cout<<"The value of f is: "<<setw(4)<<f<<endl;

    // Operator Precedence
    int g = 3, h = 4;
    // int i = (g*5)+h);
    int i = ((((g*5)+h)-45)+87);
    cout << i;
    return 0;
}