#include <iostream>
#define l long long
using namespace std;

int main(){
    l t; cin>>t;
    for(l i = 0; i < t; i++){
        l a, b, c, d; cin>>a>>b>>c>>d;
        l hi = 0;
        if(a < b){
            hi++;
        }
        if(a < c){
            hi++;
        }
        if(a < d){
            hi++;
        }
        cout<<hi<<endl;
    }
}