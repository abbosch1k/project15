#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream f("a.txt");
    string s; int c=0;
    while(getline(f,s)) if(!s.empty()) c++;
    cout<<c;
}
