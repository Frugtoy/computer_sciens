#include<iostream>
#include<vector>
#include<queue>
using std::vector;
using std::queue;
using std::cin;
using std::cout;
using std::endl;
int size;

int bfs(vector<int>&path,vector<vector<int> > matrix) {

    vector<int>used(size,-1);
    path.clear();
    used.at(0)=0;
    int now = 0;
    queue<int> poss;
    poss.push(now);
    bool flag = true;
    while (flag) {
        now=poss.front();
        if (now==1) {flag==false; break;} 
        poss.pop();
        for (int i = 0; i<size; i++) {
            if ((matrix[now][i]>0) && used[i]==-1) {
                poss.push(i);
                used.at(i)=now;
                if (i==1) {flag = false; break;}
            }
        }
        if (poss.size() == 0 || poss.back()==1) {
             flag=false;
        } 
    }
    int min = 0;
    if (used[1]==-1) {return min;}
    {
        int i = 1;
        min=matrix[used.at(i)][i];
        while (i!=0) {
            if(matrix[used.at(i)][i]<min && matrix[used.at(i)][i]>0) min=matrix[used.at(i)][i];
            path.push_back(i);
            i=used.at(i);
        }
        path.push_back(0);
    }
    return min;
}

int main() {

    cin>>size;
    static vector<vector<int> > matrix (size, vector<int>(size));
    for(int i =0; i< size; i++) {
        for(int j =0; j <size;j++){
            cin>>matrix[i][j];
        }
    }

    vector<vector<int> > flow (size, vector<int>(size,0));
    int min;
    int max(0);

    vector<int> way;
    bool flag = true;
    while (flag){   
        min = bfs(way, matrix);
        if (min==0) {flag = false; break;}
        for (int i=0; i<way.size()-1; i++) {
            int a,b;
            a=way[i+1];
            b=way[i];
        (min  > max ? max : min) = min;
        matrix[a][b] <= min ? matrix[a][b] = 0 : matrix[a][b];
        
    }
}
cout<<max<<endl;
}