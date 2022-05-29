//BFS Algo Implementation

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfsTraversal(int vertex, vector<int> adjList[])
{
    vector<int> bfs;
    vector<int> visitedVertex(vertex+1,0);

    for (int i = 1; i <= vertex; i++)
    {
        if (!visitedVertex[i])
        {
            queue<int> q;
            q.push(i);
            visitedVertex[i] = 1;
            while (!q.empty())
            {
                int top = q.front();
                q.pop();
                bfs.push_back(top);

                for(auto itr:adjList[top])
                {
                    if(!visitedVertex[itr])
                    {
                        q.push(itr);
                        visitedVertex[itr] = 1;
                    }
                }
            }
            
        }
        
    }

    //print out the values of vector bfs;
    
}

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    vector<int> adjList[vertex+1];

    for (int i = 0; i < edges; i++)
    {
        int ver1,ver2;
        cin>>ver1>>ver2;

        adjList[ver1].push_back(ver2);
        adjList[ver2].push_back(ver1);
    }
    
    bfsTraversal(vertex,adjList);
}