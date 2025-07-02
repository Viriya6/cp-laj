#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    int l = s.length();
    int hi = 0;
    
    for(int i = 0; i < l - 1; i++){
        if(s[i] == s[i + 1]){
            hi++;
        }
    }
    cout<<hi<<endl;
}