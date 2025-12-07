#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap x and y
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// Call by reference using C++ reference variables
// int & swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main(){
    int x = 4, y = 5;
    cout << "The sum of 4 and 5 is "<<sum(4,5);
    cout << "The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap x and y
    // swapPointer(&x, &y); // This will swap x and y using pinter reference
    swapReferenceVar(x, y); // This will swap x and y using reference variables
    // swapReferenceVar(x, y) = 766; // This will swap x and y using reference variables // not working
    cout << "The value of a is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}