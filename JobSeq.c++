#include <iostream>
#include <algorithm>

using namespace std;

struct Job
{
    char id;
    int deadline;
    int profit;
};

bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

void JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comparison);
    int result[n];
    bool slot[n];
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    int total_profit=0;
    for (int i = 0; i < n; i++)
    {
        if (slot[i])
        {
            cout <<"Job: "<<arr[result[i]].id<<"  ";
            total_profit += arr[result[i]].profit;
        }
    }

    cout<<"\nMaximum Profit: "<<total_profit<<endl;
}

int main()
{
    Job arr[] = {{'a', 2, 100},
                 {'b', 1, 20},
                 {'c', 2, 30},
                 {'d', 1, 15},
                 {'e', 3, 40}};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Following is maximum profit sequence of jobs"<<endl;
    JobScheduling(arr, n);

}
