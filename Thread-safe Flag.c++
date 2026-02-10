#include <atomic>
#include <iostream>
using namespace std;
int main(){
    atomic<bool> ready(false);
    ready.store(true);
    cout<<ready.load();
}
