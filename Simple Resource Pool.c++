#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> pool={1,2,3};
    int r=pool.back(); pool.pop_back();
    cout<<"Using "<<r;
}
