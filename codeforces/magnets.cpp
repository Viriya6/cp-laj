#include <iostream>
#include <string>
#define l long long
using namespace std;

int main(){
    l n; cin>>n;
    string a[n]; for(long long i = 0; i < n; i++){ cin>>a[i]; }
    l hi = 1;
    for(long long i = 0; i < n - 1; i++){
        if(a[i] != a[i + 1]){
            hi++;
        }
    }
    cout<<hi<<endl;
}