#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    int len = s.length();
    int left = 0; int right = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == 'L'){
            left++;
        } else if(s[i] == 'R'){
            right++;
        }
    }
    int result = left + right + 1;
    cout<<result<<endl;
}