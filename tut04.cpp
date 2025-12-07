#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout << glo;
}

int main(){
    int glo = 9;
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 14, b = 15;
    float pi= 3.14;
    char c = 'u';
    sum();
    cout << "This is Tutorial 4.\n Here the value of a is " <<a<<"\nThe value of b is " << b;
    cout <<"\nThe value of pi is: " <<pi;
    cout <<"\nThe value of c is: "<<c;
    cout << glo;
    return 0;
}