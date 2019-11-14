#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::FILE;

int main() {
    int cube_quantity;
    cin>>cube_quantity;
    cout<<cube_quantity<<" ";
    string word;
    string cube;
    cin>>word;
    int size_of_world = word.size();
    cout<<size_of_world<<" ";
    vector<int> out;
    for (int i = 0; i<cube_quantity; ++i) {
        out.clear();
        cin>>cube;
        for (int t = 0; t<6; ++t)
        for (int j = 0; j<size_of_world; ++j) {
            if (cube[t]==word[j])
                out.push_back(j);               
        }
        cout<<out.size()<<" ";
        for (int j = 0; j<out.size();++j)
            cout<<out[j]<<" ";
    }
    FILE* file;
    file = fopen("checker","w");
    fprintf(file,"%d",size_of_world);
    fclose(file);
}