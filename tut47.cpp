#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    private:
        int a, b;
    public:
        void getDataSimple(){
            cout<< "Enter the value of a: "<<endl;
            cin >> a;
            cout<< "Enter the value of b: "<<endl;
            cin >> b;
        }
        void performOperationsSimple(){
            cout<<"The value of a+b is: "<<a + b<<endl;
            cout<<"The value of a-b is: "<<a - b<<endl;
            cout<<"The value of a*b is: "<<a * b<<endl;
            cout<<"The value of a/b is: "<<a / b<<endl;
        }

};

class ScientificCalculator{
    private:
        float a, b;
    public:
        void getDataScientific(){
            cout<< "Enter the value of a: "<<endl;
            cin >> a;
            cout<< "Enter the value of b: "<<endl;
            cin >> b;
        }

        void performOperationsScientific(){
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};

class HybridCalculator: public ScientificCalculator, public SimpleCalculator{

};

int main(){
    // SimpleCalculator calc;
    // calc.getData();
    // calc.performOperationsSimple();

    // ScientificCalculator res;
    // res.getData();
    // res.performOperationsScientific();

    HybridCalculator cal;
    cal.getDataScientific();
    cal.performOperationsScientific();

    cal.getDataSimple();
    cal.performOperationsSimple();

    return 0;
}