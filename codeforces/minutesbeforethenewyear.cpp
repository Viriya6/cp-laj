#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int h, m; cin>>h>>m;
        m += h * 60;
        int newyer = 1440 - m;
        cout<<newyer<<endl;
    }
}