#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n, m; cin>>n>>m;
    int hi = n; int hii = m;
    
    hii = hi + 1;
    while(!isprime(hii)){
        hii++;
    }
    
    if(isprime(n) == true && m == hii){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
}