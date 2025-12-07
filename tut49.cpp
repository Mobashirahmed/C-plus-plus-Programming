#include<iostream>
using namespace std;
/*
Syntax for Initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(j*2)
        // Test(int i, int j): a(i), b(a+j)
        // Test(int i, int j): b(j), a(b+i) --> RED flag this will create problems because a will be initialized first
        Test(int i, int j): a(i)
        {
            b = j;
            cout << "Constructor Executed" <<endl
                 << "Value of a is " << a <<endl
                 << "Value of b is " << b <<endl;
        }
};
int main(){
    Test t(4, 6);
    return 0;
}