#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::queue;

void bfs(vector<int>&path,vector<vector<int>>matrix) {
   cout<<"ok";
    int size = matrix.size();
    
    int start = 0 ;
    queue<int> q;
    q.push(start);
    vector<bool>used(size);
    vector<int>distance(size),parents(size);
    used[start]=true;
    parents[start]= -1;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(size_t i = 0;i< matrix[v].size();++i) {
            int to = matrix[v][i];
            if(!used[to]) {
                used[to]=true;
                q.push(to);
                distance[to] = distance[v]+1;
                parents[to]=v;
            if(!used[to]){
                
            }
            else {
            
                for(int v=to; v!=-1;v = parents[v]){
                    path.push_back(v);
                    std::reverse(path.begin(),path.end());    
                }          
            }
        }
    }

}
}

int main(){ 
int size;
cin>>size;
int start =0;
vector<int> path;
vector <vector<int>>matrix(size,vector<int>(size));
for(int i = 0 ;i<size;++i){
    for(int j=0;j<size;++j){
        cin>>matrix[i][j];
    }
}
bfs(path,matrix);
return 0;
}