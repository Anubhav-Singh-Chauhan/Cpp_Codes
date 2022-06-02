#include<iostream>
#include<cstring>

using namespace std;

int max(int a,int b)
{
    return (a>b)?a:b;
}

int LCS(char* A,char* B,int i,int j)
{
    if(A[i]=='\0'|| B[j]=='\0');
    {
    return 0;
    }
    if(A[i]==B[j])
    {
        return 1+LCS(A,B,i+1,j+1);
    }
    else{
        return max(LCS(A,B,i+1,j),LCS(A,B,i,j+1));
    }
}



int main(){
  char A[]="AGGTAB";
  char B[]="GXTXAYB";
  int m=strlen(A);
  int n=strlen(B);
  cout<<LCS(A,B,m,n);
  return 0;
}