#include <iostream>
#include <atomic>
using namespace std;

int main(){
    static atomic<int> id{100};
    cout<<id++;
}
