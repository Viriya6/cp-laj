#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    long long grid= n * n;
    bool a = true; long long hi = 0; long long hii = 0;
    for(long long i = 0; i < grid; i++){
        if(a == true){
            hi++;
            a = false;
        } else if(a == false){
            hii++;
            a = true;
        }
    }
    cout<<hi<<endl;
    
    bool c = true; bool e = true;
    for(long long i = 0; i < n; i++){
        for(long long i = 0; i < n; i++){
            if(c == true){
                cout<<"C";
                c = false;
            } else if(c == false){
                cout<<".";
                c = true;
            }
            if(i == n - 1){
                cout<<""<<endl;
            }
        }
        if(e == true){
            c = false;
            e = false;
        } else if(e == false){
            c = true;
            e = true;
        }
    }
}