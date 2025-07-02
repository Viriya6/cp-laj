#include <iostream>
#include <string>
using namespace std;

int main(){
    string t1, t2, t3; cin>>t1>>t2>>t3;
    if((t1[0] == t3[2] && t1[1] == t3[1] && t1[2] == t3[0]) && (t2[0] == t2[2])){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}