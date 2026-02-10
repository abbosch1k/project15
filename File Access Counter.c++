#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream f("a.txt");
    cout<<(f.is_open()?1:0);
}
