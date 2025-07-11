#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

bool contains_digit(const string& s) {
    return any_of(s.begin(), s.end(), [](unsigned char c){
        return isdigit(c);
    });
}

int main(){
    int n; cin>>n;
    string s[n]; int sus = 0;
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    
    for(int i = 0; i < n; i++){
        bool hi = contains_digit(s[i]);
        if(hi == true){
            int hii = stoi(s[i]);
            if(hii < 18){
                sus++;
            }
        } else if(hi == false){
            if(s[i] == "ABSINTH" || s[i] == "BEER" || s[i] == "CHAMPAGNE" || s[i] == "BRANDY" || s[i] == "GIN" || s[i] == "RUM" || s[i] == "SAKE" || s[i] == "TEQUILA" || s[i] == "VODKA" || s[i] == "WHISKEY" || s[i] == "WINE"){
                sus++;
            }
        }
    }
    cout<<sus<<endl;
}