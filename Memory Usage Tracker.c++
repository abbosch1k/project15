#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(100000);
    cout<<"Allocated "<<v.size()*sizeof(int)<<" bytes";
}
