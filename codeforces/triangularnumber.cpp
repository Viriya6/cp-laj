#include <iostream>
#define l long long
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 0; i < 500; i++){
        l formula = (i * (i + 1)) / 2;
        if(formula == n){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}