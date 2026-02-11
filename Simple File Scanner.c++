#include <filesystem>
#include <iostream>
using namespace std;
namespace fs = std::filesystem;

int main(){
    for(auto& p: fs::directory_iterator("."))
        cout<<p.path().string()<<"\n";
}
