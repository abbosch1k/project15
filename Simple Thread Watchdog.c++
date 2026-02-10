#include <iostream>
#include <thread>
using namespace std;
int main(){
    thread t([]{ this_thread::sleep_for(chrono::seconds(2)); });
    if(t.joinable()) t.join();
    cout<<"Thread finished";
}
