#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
int size_of_a,size_of_b;
cin>>size_of_a>>size_of_b;

int value;
int inf = 0;
vector<int>a;
vector<int>b;

for(int i = 0;i<size_of_a;++i) {
    cin>>value;
    a.push_back(value);
}
for(int i = 0; i<size_of_b;++i) {
    cin>>value;
    inf+=value;
    b.push_back(value);
}
cout<< ((size_of_a>size_of_b?size_of_a:size_of_b)+2)<<" ";
int stream_matrix_size = ((size_of_a>size_of_b?size_of_a:size_of_b)+2);

for(int i = 0; i<stream_matrix_size;++i){
    for(int j = 0; j<stream_matrix_size;++j) {
        if (((i==1)&&(j==0))||(i ==j)||(i == 1)||(j==0)) {
            cout<<"0 ";
        }
        else if(i ==0) {
            if (j-2 < a.size()) {
                cout<<a.at(j-2)<<" ";
            } 
        else cout<<"0 ";
        
        } 
        else if(j==1) {
            if(i - 2 < b.size()) {
                cout<<b.at(i-2)<<" ";
            } 
            else cout<<"0 ";
        } 
        else cout<<inf<<" ";
    }
}
return 0;
}