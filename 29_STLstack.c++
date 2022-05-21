#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <string> s;
    s.push("Hello");
    s.push("World");
    s.push("C++");
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    cout<<"POP"<<endl;
    cout<<"Top: "<<s.top()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;


}