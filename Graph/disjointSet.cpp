// detect cycle in an undirected graph using disjoint set
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> dsuf;
int find(int v)
{
    if (dsuf == -1)
        return v;
    return find(dsuf[v]);
}
void union_op(int fromp, int top)
{
}

bool isCyclic(vector<pair<int, int>> &edge_list)
{
    // finding absolute parent of pair
    for (auto p : edge_list)
    {
        int fromp = find(p.first); // first  ka root node
        int top = find(p.second);  // second ka root node

        // agar root node dono ke same hue tau, they belong to same set
        // and cycle is form
        if (fromp == top)
            return true;
        // agar nahin hue tau we have to do a union operation
        union_op(fromp, top);
    }
    return false;
}

int main()
{
    int E;
    int V;
    cin << E << V;
    dsuf.resize(V, -1);
    vector<pair<int, int>> edge_list; // adjacency list
    for (int i = 0; i < V; i++)
    {
        int from;
        int to;
        cin >> from >> to;
        edge_list.push_back({from, to});
    }
    if (isCyclic(edge_list))
        cout << "true";
    else
        cout << "false";
    return 0;
}