#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector <int> g[N];
bool vis[N];

void dfs(int vertex)
{
    cout<< vertex << endl;
    vis[vertex]=true;
    for(int child: g[vertex])
    {
        cout<< "Parent: "<<vertex<<", Child: "<<endl;
        if(vis[child]) continue;
        dfs(child);
    }
    
}

int main()
{
    int n,m;
    cin>> n >> m;
    for(int i=0;i<9;++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        dfs(v1);
    }
}