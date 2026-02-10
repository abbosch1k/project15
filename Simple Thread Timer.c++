#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    thread t([]{
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"Timer done\n";
    });
    t.join();
}
