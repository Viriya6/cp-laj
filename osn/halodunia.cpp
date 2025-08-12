#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string S;
	getline(cin, S);
	string a = "halo dunia";
	int p = 0;
	for(int i = 0; i < 10; i++){
		if(tolower(S[i]) == a[i]){
			p++;
		}
	}
	cout<<p<<endl;
}

//by Viriya6
