#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int n; cin>>n;
        vector<int> a;
        for(int j = 0; j < n; j++){
            string s; cin>>s;
            if(s[0] == '#'){
                a.push_back(1);
            } else if(s[1] == '#'){
                a.push_back(2);
            } else if(s[2] == '#'){
                a.push_back(3);
            } else {
                a.push_back(4);
            }
        }
        
        for(int k = n - 1; k >= 0; k--){
            cout<<a[k]<<" ";
        }
        cout<<""<<endl;
    }
}