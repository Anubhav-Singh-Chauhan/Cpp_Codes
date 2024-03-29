#include<iostream>
#include<map>
#include<list>
using namespace std;

/*
   2-----1
   |     |
   |     |
   3-----0
   |
   |
   4-----5
*/

template<typename T>

class Graph{
   map<T,list<T> >l;
   public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

void dfs_helper(T src, map<T,bool> &visited)
{
    //Recursive Function that will traverse graph
cout<<src<<" ";
visited[src]=true;
//go to all nbr of that node that is not visited
for(T nbr : l[src])
{
    if(!visited[nbr])
    {
        dfs_helper(nbr,visited);
    }
}
}

void dfs(T src){
    map<T,bool> visited;
    //Mark all the nodes as not visited in the beginning
    for(auto p : l)
    {
        T node = p.first;
        visited[node]=false;
    }

    dfs_helper(src, visited);

    }
    


};

int main(){
    Graph <int> g; 
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.dfs(0);

    return 0;

}