#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s;
    s.insert(5);
    s.insert(8);
    s.insert(3);
    s.insert(1);
    s.insert(8);
    s.insert(1);
    s.insert(5);
    s.insert(5);

    for(int i : s)
    {
        cout<<i<<" ";
    } cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(int i : s)
    {
        cout<<i<<" ";
    } cout<<endl;

    cout<<"5 present or not: "<<s.count(5)<<endl;

    // set<int>::iterator itr = s.find(5);
    // cout<<"V  "



}