#include<iostream>
#include<array>

using namespace std;
int main()
{
    int arr[3]={2,4,6};

    array <int,4> arr1 = {1,2,3,4};
    int size = arr1.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<endl;
    }

    cout<<"2nd Index Element: "<<arr1.at(2)<<endl;
    cout<<"Empty or not: "<<arr1.empty()<<endl;
    cout<<"First Element: "<<arr1.front()<<" Last Element: "<<arr1.back()<<endl;

}
