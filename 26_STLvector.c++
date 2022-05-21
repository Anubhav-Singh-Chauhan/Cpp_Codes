#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; 
    // cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    // cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(4);
    // cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "2nd Index Element: " << v.at(2) << endl;
    //v.front //v.back

    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl<<"POP"<<endl;
    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout<<"Before Clear Size: "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size: "<<v.size()<<endl;

    vector <int> a(6,1); //Size = 6 and all initialized with 1
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector <int> b(a); //copies a vector in b
    for(int i:b)
    {
        cout<<i<<" ";
    }
}