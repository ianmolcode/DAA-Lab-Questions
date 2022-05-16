// when the graph is disconnected
//  function

void DFS_Final(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    // cout << s << " ";
    for (int u; adj[s])
    {
        if (visited == false)
        {
            visited[u] == true;
            DFS_Final(adj, u, visited);
        }
    }
}
int DFS(vector<int> adj, int v)
{
    int count = 0;
    vector<bool> vec(v, false);
    // or
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            DFS_Final(adj, i, visited);
    count++;
    return count;
}