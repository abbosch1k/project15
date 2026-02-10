#include <fstream>
#include <iostream>
int main(){
    std::ifstream f("a.txt");
    char c; unsigned h=0;
    while(f.get(c)) h=h*31+c;
    std::cout<<h;
}
