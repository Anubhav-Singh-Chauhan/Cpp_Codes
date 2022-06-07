#include<iostream>
#include<algorithm>

using namespace std;

struct Activity{
    char act;
    int start,finish;
};

bool activityCompare(Activity s1,Activity s2)
{
  return (s1.finish < s2.finish);
}

void printMaxActivity(Activity arr[],int n)
{
    sort(arr,arr+n,activityCompare);

    cout<<"Following Activities are selected"<<endl;
    int i=0;
    cout<<arr[i].act<<"\nStart->"<<arr[i].start<<"\nFinish->"<<arr[i].finish<<endl;;
    
    for (int j = 1; j < n; j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
            cout<<arr[j].act<<"\nStart->"<<arr[j].start<<"\nFinish->"<<arr[j].finish<<endl;;
            i=j;
        }
    }
    
}



int main()
{
  Activity arr[]={{'A',5,9},{'B',1,2},{'C',3,4},
                 {'D',0,6},{'E',5,7},{'F',8,9}};
  int n=sizeof(arr)/sizeof(arr[0]);   
  printMaxActivity(arr,n);  

}