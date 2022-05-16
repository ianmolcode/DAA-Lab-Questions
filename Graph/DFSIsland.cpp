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
