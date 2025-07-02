#include <iostream>
#include <string>
using namespace std;

int main(){
    string t1, t2; cin>>t1>>t2;
    int len = t1.length();
    for(int i = 0; i < len; i++){
        if(t1[i] != t2[i]){
            cout<<"1";
        } else {
            cout<<"0";
        }
    }
}