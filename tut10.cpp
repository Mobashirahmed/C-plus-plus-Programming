#include <iostream>

using namespace std;

int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
    1. For loop
    2. While loop
    3. do While loop
    */
    /*For loop in C++*/
    // int i = 1;
    // cout <<i;
    // i++;

    // Syntax for for loop
    // for(initialisation; condition; updation)
    // {
    //     loop body(C++ code)
    // }

    for (int i = 1; i <= 40; i++)
    {
        /* code */
        cout << i << endl;
    }
    // Example of infinite for  loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //      /* code */
    //      cout <<i<<endl;
    // }

    /*While loop in C++*/
    //  Syntax:
    //    while (condition)
    //    {
    //     /* code */
    //      C++ statements;
    //    }
    //    Printing 1 to 40 using while loop
    int i = 1;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }
    //    Example of infinite while loop
    //   int i = 1;
    //   while(true){
    //     cout << i <<endl;
    //     i++;
    //   }

    /*do-while loop*/
    //  Syntax
    //  do
    //  {
    //      /* code */
    //  } while (condition);
    //  Printing 1 to 40 using do-while loop
    int j = 1;
    do
    {
        /* code */
        cout << j << endl;
        j++;
    } while (j <= 40);
    do
    {
        cout << j << endl;
        j++;
    }
    while (false);
    
    int num = 6;
    int k = 1;
    do
    {
        cout << num << " * " << k << " = " << num * k << endl;
        k++;
    } while (k <= 10);

    return 0;
}