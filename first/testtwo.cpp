#include <iostream>
int main() {
    int n;
    int m;
    std::cin>>n>>m;
    int a=0; int b=0;
    for (int i = 0; i<n+m; i++) {
        int input;
        std::cin>>input;
        if (i<n) {
            a+=input;
        } else {
            b+=input;
        }
    }
    std::cout<<"3 0 0 "<<a<<" 0 0 0 0 "<<b<<" 0"<<std::endl;
}
