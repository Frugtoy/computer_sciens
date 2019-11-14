#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
typedef unsigned long long int TIMEMANAGMENT;  
 
TIMEMANAGMENT fibopeano(TIMEMANAGMENT number, TIMEMANAGMENT mod ) {

    vector<TIMEMANAGMENT>pizano(2);
    pizano[0]= 0;pizano[1]=1;
    cin>>number>>mod;
    TIMEMANAGMENT pos = 0;
    for(int i = 2; i<number;++i) {
        pizano.push_back((pizano[i-1]+pizano[i-2])%mod);
        ++pos;
        if((pizano[i]==1)&&(pizano[i-1]==0))break;
    }


return pizano[number%pos];
}

int main() {

    TIMEMANAGMENT number,mod;
    cin>>number>>mod;
    cout<<fibopeano(number,mod);

return 0;
}
