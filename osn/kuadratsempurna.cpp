#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long N;
	cin>>N;
	long long n = pow(N, 0.5);
	if(n*n == N){
		cout<<n<<endl;
	} else {
		cout<<0<<endl;
	}
}

//by Viriya6