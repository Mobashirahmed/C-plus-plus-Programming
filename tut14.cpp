#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };
typedef struct employee
{
    /* data */
    int eId; // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
} ep;
union money
{
    /* data */
    int rice; // 4 bytes
    char car; // 1 byte
    float pounds; // 4 bytes
};

int main(){
    enum Meal {breakfast, lunch, dinner};
    
    Meal m2 = breakfast;
    cout << m2 <<endl;
    Meal m3 = lunch;
    cout << (m3==1);

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.car <<endl;
    
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 12000;
    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.eId<<endl;
    return 0;
}