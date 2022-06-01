//DFS Algo Implementation

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int i,vector<int> visitedArray,vector<int> adjList[],vector<int> storeDFS)
{
    storeDFS.push_back(i);
    visitedArray[i] = 1;
    for(auto itr: adjList[i])
    {
        if(visitedArray[itr]==0)
        {
            dfs(itr,visitedArray,adjList,storeDFS);
        }
    }
}

vector<int> dfsofGraph(int vertex,vector<int> adjList[])
{
    vector<int> storeDFS;
    vector<int> visitedArray(vertex+1,0);

    for (int i = 1; i <= vertex; i++)
    {
        if (!visitedArray[i])
        {
            dfs(i,visitedArray,adjList,storeDFS);
        }
        
    }
    return storeDFS;
    
}

int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    vector<int> adjList[vertex+1];

    for (int i = 1; i < edge; i++)
    {
        int ver1,ver2;
        cin>>ver1>>ver2;

        adjList[ver1].push_back(ver2);
        adjList[ver2].push_back(ver1);
    }

    vector<int> res;

    res = dfsofGraph(vertex,adjList);
    
}