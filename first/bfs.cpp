//the bfs 
#include<iostream>
#include<vector>
#include<queue>
using std::vector;
using std::queue;
using std::cin;
using std::cout;
//n-число вершин в графе от 1 до n , start -начальная вершина Q- очередь 
int bfs(int n,int start, vector<vector<int>>&V) {
    int maxEdge = -1;
    vector<int> D(n+1,-1);
    D[start]=0;
    queue<int> Q;
    Q.push(start);
    while(!Q.empty()) {
        int u = Q.front();
        Q.pop();
        for(auto v : V[u])
            if(D[v]==-1)
            {
                D[v]=D[u]+1;
                Q.push(v);
                if(v > maxEdge)
                    maxEdge = v;
            }
    }
    return maxEdge;   
} 


int main(){

vector<vector<int>> matrix = {{1,3,7},
                              {2,5,1},
                              {9,1,1}};
int maxEdge = bfs(3,1,matrix);
cout<<maxEdge<<std::endl;



 return 0;
}