#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int a, b; cin>>a>>b;
    int hi = 0;
    while(true){
        a *= 3;
        b *= 2;
        hi++;
        if(a > b){
            break;
        }
    }
    cout<<hi<<endl;
}