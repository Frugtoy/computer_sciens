#include <iostream>
#include <fstream>
using std::FILE;
using std::cin;
using std::cout;
using std::endl;
int main() {
    int min_flow;
    cin>>min_flow;
    int size_of_word;
    FILE* file;
    file = fopen("checker","r");
    fscanf(file,"%d",&size_of_word);
    fclose(file);
    if (size_of_word > min_flow)
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
    
    remove("checker");
return 0;
}