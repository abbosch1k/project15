#include <iostream>
using namespace std;
bool connect(){ static int i=0; return ++i==3; }
int main(){
    for(int i=0;i<5;i++){
        if(connect()){ cout<<"Connected"; break; }
        cout<<"Retry\n";
    }
}
