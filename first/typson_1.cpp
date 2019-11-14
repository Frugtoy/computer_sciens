#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::queue;

int bfs(vector<vector<int> >&matrix,vector<int>&path,int size) {
    
    path.clear();
    vector<int>used(size,-1);
    queue<int>q;
    used[0] = 0;
    q.push(0);
    while(!q.empty() && q.front()!=1) {
        int now = q.front();
        q.pop();
        for(int i = 0; i<size;++i) {
            if(matrix[now][i] > 0 && used[i]==-1){
                used[i]=now;       
                q.push(i);
            }
        }
    }
     path.push_back(1);
     int weight;
     for(int i = used[1],weight = matrix[i][used[i]];used[i]!=0;) {
        path.push_back(i);
        if(weight > matrix[i][used[i]]) {weight = matrix[i][used[i]];}
        i =used[i];
     
    }
    path.push_back(0);
    std::reverse(path.begin(),path.end());
    cout<<"ok"<<endl;
    return weight;
}
int main(){ 
    int size;
    cin>>size;
    int start =0;
    vector<int> path;
    vector <vector<int> >matrix(size,vector<int>(size));
    for(int i = 0 ;i<size;++i){
        for(int j=0;j<size;++j){
            cin>>matrix[i][j];
        }
    }


/*    bfs(matrix,path,size);
    for(int i =0 ;i<path.size();++i)
    {
       cout<<path[i]; 
    }
*/

    
    vector<vector<int>>flow(size,vector<int>(size,0));    //алгоритм нахождуния потока
    for(int weight = bfs(matrix,path,size); weight !=0;weight = bfs(matrix,path,size))
    {
        for(size_t i =1; i < path.size();++i){
            int a = path[i-1] , b=path[i];
            flow[a][b]+=weight;
            flow[b][a]-=weight;
            matrix[a][b]-=weight;
            matrix[b][a]+=weight;
        }
        
    }

int f = 0;
for(int i =0; i<size;++i) {
    f+=flow[0][i];
}
cout<<f;
return 0;
}

