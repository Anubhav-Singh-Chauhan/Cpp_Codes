#include <iostream>
#include <map>
#include <list>

using namespace std;

class Graph
{
    int V;
    // Array Of List
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool cycle_helper(int node, bool *visited, int parent)
    {
        visited[node] = true;
        for (auto nbr : l[node])
        {
            if (!visited[nbr])
            {
                bool cycle = cycle_helper(nbr, visited, node);
                if (cycle)
                {
                    return true;
                }
            }
            else if (nbr != parent)
            {
                return true;
            }
        }
        return false;
    }

    bool contains_cycle()
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
    return cycle_helper(0, visited, -1);
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 0);

   if(g.contains_cycle())
   {
    cout<<"Cycle Present";
   }
   else
   cout<<"Cycle Not Present";
}
