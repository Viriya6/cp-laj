#include <iostream>
#define l long long
using namespace std;

int main(){
    l t; cin>>t;
    for(l i = 0; i < t; i++){
        l a, b, c; cin>>a>>b>>c;
        l totalabc = (a + b + c) / 3;
        l na = a - totalabc; l nb = b - totalabc; l nc = c - totalabc;
        l total = na + nb + nc;
        if(total == 0 && nb < 1){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}