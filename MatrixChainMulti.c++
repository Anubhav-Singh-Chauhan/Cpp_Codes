#include<iostream>
#include<limits.h>
using namespace std;

int matrixChain(int m[],int i,int j)
{
    //Base Case
    if(i==j)
    {
        return 0;
    }

    int ans = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int temp = matrixChain(m,i,k) + matrixChain(m,k+1,j) + m[i-1]*m[k]*m[j];
        ans = min(ans,temp);
    }
    return ans;
    
}


int main()
{
    int matrix[]={3,2,4,2,5};
    int n = sizeof(matrix)/sizeof(int);

    cout<<matrixChain(matrix,1,n-1);


}