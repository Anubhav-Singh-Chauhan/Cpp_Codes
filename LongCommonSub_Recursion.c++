#include <iostream>
#include <cstring>

using namespace std;

int max(int a, int b);

int LCS(char *A, char *B, int x, int y)
{
    int L[x + 1][y + 1];
    int i, j;
    for (i = 0; i <= x; i++)
    {
        for (j = 0; j <= y; j++)
        {
            if (i==0 || j==0)
            {
                L[i][j]=0;
            }
            
            else if(A[i - 1] == B[j - 1])
            {
                L[i][j] = 1 + L[i - 1][j - 1];
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[x][y];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char A[] = "AGGTAB";
    char B[] = "GXTXAYB";
    int m = strlen(A);
    int n = strlen(B);
    cout << LCS(A, B, m, n);
    return 0;
}