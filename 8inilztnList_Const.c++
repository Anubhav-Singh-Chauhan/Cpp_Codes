/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j) //work

    //Test(int i, int j) : a(i), b(a + j)  //work
    
    //Test(int i, int j) : b(j), a(i+b) //the compiler will throw an error because the data member “a” is being initialized
                                       // first and the “b” is being initialized second so we have to assign the value to “a” data member first.
    
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
