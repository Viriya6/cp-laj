#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s; cin>>s; 
    string real = s;
    int len = s.length();
    int down = 0; int upper = 0;
    for(int i = 0; i < len; i++){
        if(islower(s[i])){
            ++down;
        }
        if(isupper(s[i])){
            ++upper;
        }
    }
    if(upper == len){
        for(int i = 0; i < len; i++){
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    } else if(down == 1 && upper > 1 && islower(real[0])){
        for(int i = 0; i < len; i++){
            s[0] = toupper(s[0]);
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            
            }
        }
        cout<<s<<endl;
    } else if(down == 1 && len == 1){
        s[0] = toupper(s[0]);
        cout<<s<<endl;
    } else if(down == 1 && upper == 1){
        s[0] = toupper(s[0]);
        s[1] = tolower(s[1]);
        cout<<s<<endl;
    } else {
        cout<<s<<endl;
    }
}