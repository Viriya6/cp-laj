#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    int as = 0; int al = 0; int bs = 0; int bl = 0; int ta = 0; int tb = 0;
    for(int i = 0; i < n; i++){
        int t, x, y; cin>>t>>x>>y;
        
        if(t == 1){
            as += x;
            al += y;
            ta += x + y;
        } else if(t == 2){
            bs += x;
            bl += y;
            tb += x + y;
        }
    }
    
    if(as >= (ta / 2)){
        cout<<"LIVE"<<endl;
    } else {
        cout<<"DEAD"<<endl;
    }
    
    if(bs >= (tb / 2)){
        cout<<"LIVE"<<endl;
    } else {
        cout<<"DEAD"<<endl;
    }
}