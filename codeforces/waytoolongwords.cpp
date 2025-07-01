#include <iostream>
#include <string>
#define l long long
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        string s; cin>>s;
        int len = s.length();
        
        if(len > 10){
            int lent = len - 2;
            cout<<s[0]<<lent<<s[len - 1]<<endl;
        } else {
            cout<<s<<endl;
        }
    }
}