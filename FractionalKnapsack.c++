#include<iostream>
#include<algorithm>
using namespace std;

struct Item
{
    int value;
    int weight;
};

class ProfitEarned
{
    public:
    bool static comp(Item a,Item b)
    {
        double r1 = (double)a.value/(double)a.weight;
        double r2 = (double)b.value/(double)b.weight;
        return r1>r2;
    }

    double FracKnapsack(int W,Item arr[],int n)
    {
        sort(arr,arr+n,comp);
        int curWeight=0;
        double profit=0.0;
        for (int i = 0; i < n; i++)
        {
            if(curWeight + arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                profit += arr[i].value;
            }
            else
            {
                int remain = W-curWeight;
                profit += (arr[i].value / (double) arr[i].weight) * (double) remain;
                break;
            }
        }
        return profit;
    }
};

int main()
{
    int n=3, W = 50;
    Item arr[n] ;//= {{100,20},{60,10},{120,30}};
    for(int i =0;i<n;i++)
    {
        cout<<"Enter Weight and Profit: "<<endl;
        cin>>arr[i].value>>arr[i].weight;
        cout<<endl;
    }
    ProfitEarned obj;
    double ans = obj.FracKnapsack(W,arr,n);
    cout<<" Max Profit Earned: "<<ans<<endl;
    return 0;
}