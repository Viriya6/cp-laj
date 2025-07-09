#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        string s;
        for(int j = 0; j < 8; j++){
            cin>>s;
            for(int k = 0; k < 8; k++){
                if(s[k] != '.'){
                    cout<<s[k];
                }
            }
        }
        cout<<""<<endl;
    }
}