#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream a("a.txt"), b("b.txt");
    char x,y;
    while(a.get(x) && b.get(y))
        if(x!=y){ cout<<"Different\n"; return 0; }
    cout<<"Same\n";
}
