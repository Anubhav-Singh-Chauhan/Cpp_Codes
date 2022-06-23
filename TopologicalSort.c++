#include<iostream>
#include<stack>
#include<list>

using namespace std;

class Graph
{
int V;
list <int> *adj;
public:
Graph(int V)
{
 this->V=V;
 adj = new list<int>[V];
}

void addEdge(int x, int y)
{
    adj[x].push_back(y);
}

void TopologicalSortUtil(int v, bool visited[],stack <int> &S)
{
    visited[v]=true;
     list<int> :: iterator i;

     for (i=adj[v].begin() ; i != adj[v].end(); i++)
     {
        if(!visited[*i])
        {
            TopologicalSortUtil(*i,visited,S);
        }
     }
     S.push(v);
}

void TopologicalSort()
{
    stack <int> S;

    bool *visited = new bool[V];

    for (int i = 0; i < V; i++)
    {
       visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if(visited[i]==false)
        {
            TopologicalSortUtil(i,visited,S);
        }
    }
    while (S.empty()==false)
    {
        cout<<S.top()<<" ";
        S.pop();
    }
}

};

int main()
{
    Graph g(5);
    g.addEdge(1,0);
    g.addEdge(1,4);
    g.addEdge(0,3);
    g.addEdge(0,2);
    g.addEdge(3,4);

    cout<<"Topological Sort is: ";

    g.TopologicalSort();
}