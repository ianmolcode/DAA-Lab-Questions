#include <bits/stdc++.h>
using namespace std;

struct node
{
    int parent;
    int rank;
};
struct Edge
{
    int sr;
    int dst;
    int wt;
};

int main()
{
    int E;
    int V;
    cin >> E >> V;
    // mark all nodes with a independent  set
    dsuf.resize(V);
    for (int i = 0; i < V; i++)
    {
        dsuf[i].parent = -1;
        dsuf[i].rank = 0;
    }

    vector<Edge> edge_list;
    Edge temp;
    for (int i = 0; i < E; i++)
    {
        int from, to, wt;
        cin >> from >> to >> wt;
        temp.sr = from;
        temp.dst = to;
        temp.wt = wt;
        edge_list.push_back(temp);
    }
    Krushkal(edge_list, V, E);
    printMST(mst);
    return 0;
}