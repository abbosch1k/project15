#include <fstream>
int main(){
    std::ifstream in("a.txt");
    std::ofstream out("a.bak");
    out<<in.rdbuf();
}
