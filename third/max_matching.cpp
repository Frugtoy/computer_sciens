#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;



int main() {

int left , right;
cin>>left>>right;
int size = left+right+2;

cout<<size<<" ";
for(int i = 0; i<2;++i){
    for(int j = 0; j<size;++j)
        if((i == 0 )&&(j>1 && j<2+left)) {
            cout<<"1 ";
        }else cout<<"0 ";
}
for (int i =2;i<2+left;++i){
    for (int j = 0 ; j< 2+left;++j)
        cout<<"0 ";
    vector<bool>vertex(right,false);
    int a;
    cin>>a;
    for (int j =0; j<a; ++j)
    {
        int value;
        cin >>value;
        vertex[value]= true;
    }
    for(int j =0; j<right;++j)
        if(vertex[j]){
            cout<<"1 ";
        }else cout<<"0 ";

}
for(int i = 0; i<right;++i) {
    for(int j =0; j<size ; ++j)
     if(j==1){
         cout<<"1 ";
     }else cout<<"0 ";
     
}
return 0;
}
