#include<iostream>
#include<map>

using namespace std;

int main()
{
    map <string,int> m;
    m["Bus"]=100;
    m["Truck"]=120;
    m["Car"]=20;
    m.insert({{"Scooter",80},{"Auto", 50}});
    map <string,int> :: iterator iter;
    for(iter=m.begin();iter!=m.end();iter++)
    {
      cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
}