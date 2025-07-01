#include <iostream>
#define l long long
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int d = 2;
    
    int total = (n * m) % d;
    int sisa = ((n * m) - total) / d;
    cout<<sisa<<endl;
}