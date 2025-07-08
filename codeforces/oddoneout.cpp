#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int a, b, c; cin>>a>>b>>c;
        if(a == b && a != c){
            cout<<c<<endl;
        } else if(a == c && a != b){
            cout<<b<<endl;
        } else if(b == c && b != a){
            cout<<a<<endl;
        }
    }
}