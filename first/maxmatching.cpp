#include <iostream>
#include <vector>
int main() {
    int n,m,size,temp;
    std::cin>>n>>m;
    size = m + n + 2;
    std::cout<<size<<" 0 0 ";
    for (int i=0; i<size-2; i++) {
        if (i<n) {std::cout<<"1 ";}
        else {std::cout<<"0 ";}
    }
    for (int i=0; i<size; i++) {
        std::cout<<"0 ";
    }
    for (int i=0; i<size-2; i++) {
        if (i<n) {
            std::cin>>temp;
            std::cout<<"0 0 ";
        } else {
            temp=-1;
            std::cout<<"0 1 ";
        }
        bool* is_there_a_way;
        is_there_a_way= new bool[m];
        for (int j=0; j<m; j++) {
            is_there_a_way[j]=false;
        }
        for (int j=0; j<temp; j++) {
            int offset;
            std::cin>>offset;
            is_there_a_way[offset]=true;
        }
        for (int j=0; j<size-2; j++) {
            if (j<n) {std::cout<<"0 ";} else
            if (is_there_a_way[j-n]) {std::cout<<"1 ";} 
            else {std::cout<<"0 ";}
        }
    }
}