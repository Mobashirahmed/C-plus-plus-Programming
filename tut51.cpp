#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout << "The real part is " <<real<<endl;
            cout << "The imaginary part is " <<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(1, 54);
    (*ptr).getData();

    Complex *pointer = new Complex;
    (*pointer).setData(23, 57);
    (*pointer).getData();

    Complex *p = new Complex;
    p->setData(14, 76);
    p->getData();

    // Array of Objects
    Complex *arr = new Complex[4];
    arr->setData(1, 4);
    arr->getData();
    return 0;
}