//Implement adjacency list

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int vertex,edge;
    cin>>vertex>>edge;

    // vector<int> adjList[vertex+1];

    // for (int i = 0; i < edge; i++)
    // {
    //     int ver1,ver2;
    //     cin>>ver1>>ver2;

    //     adjList[ver1].push_back(ver2);
    //     adjList[ver2].push_back(ver1); //if graph is directed then ommit this line.
    // }

    //if weight is associated with edges then

    vector<pair<int,int>> adjList[vertex+1];

    for (int i = 0; i < edge; i++)
    {
        int ver1,ver2,weight;
        cin>>ver1>>ver2>>weight;

        adjList[ver1].push_back({ver2,weight});
        adjList[ver2].push_back({ver1,weight}); //if graph is directed then ommit this line.
    }
    
}