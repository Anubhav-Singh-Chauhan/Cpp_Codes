#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(3);
    d.push_front(6);
    d.push_front(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // d.pop_back();
    // for(int i: d)
    // {
    //     cout<<i<<" "
    // }
    cout << "1st Index Element: " << d.at(1) << endl;
    // d.front() //d.back() //d.empty() //d.size()

    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase Size is: " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
}
