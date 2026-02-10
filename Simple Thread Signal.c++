#include <atomic>
#include <iostream>
using namespace std;

int main(){
    atomic<bool> signal(false);
    signal=true;
    cout<<(signal?"Signaled":"Idle");
}
