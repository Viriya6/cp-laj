#include <iostream>
using namespace std;

int main(){
	long long t; cin>>t;
	for(long long i = 0; i < t; i++){
		long long a, b, c; cin>>a>>b>>c;
		long long hi = a + b + c;
		if(hi % 2 == 0){
			cout<<"Second"<<endl;
		} else {
			cout<<"First"<<endl;
		}
	}
}
