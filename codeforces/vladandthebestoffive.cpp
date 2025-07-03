#include <iostream>
#include <string>
using namespace std;

int main(){
	int t; cin>>t;
	for(int i = 0; i < t; i++){
		string s; cin>>s;
		int a = 0; int b = 0;
		for(int j = 0; j < 5; j++){
			if(s[j] == 'A'){
				a++;
			} else {
				b++;
			}
		}
		if(a > b){
			cout<<"A"<<endl;
		} else {
			cout<<"B"<<endl;
		}
	}
}
