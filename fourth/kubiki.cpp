#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
    int n;
    cin>>n;
    cout<<n<<" ";
    string word;
    string kubik;
    cin>>word;
    int k = word.size();
    cout<<k<<" ";
    vector<int> out;
    for (int i = 0; i<n; ++i) {
        out.clear();
        cin>>kubik;
        for (int t = 0; t<6; ++t)
        for (int j = 0; j<k; ++j) {
            if (kubik[t]==word[j])
                out.push_back(j);               
        }
        cout<<out.size()<<" ";
        for (int j = 0; j<out.size();++j)
            cout<<out[j]<<" ";
    }
    std::FILE* file;
    file = std::fopen("temp","w");
    std::fprintf(file,"%d",k);
    std::fclose(file);
}