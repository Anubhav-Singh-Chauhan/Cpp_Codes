#include<iostream>
#include<list>

using namespace std;
int main()
{
    list <int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    l.erase(l.begin());
    cout<<"After Erase: "<<endl;
    for(int i: l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //l.size() //l.begin() //l.end()

   list <int> a(l);
   for(int i: a)
   {
       cout<<i<<" ";
   }cout<<endl;

   list <int> b(6,69); 
   for(int i: b)
   {
       cout<<i<<" ";
   }

}