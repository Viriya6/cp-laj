#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
	while(b != 0){
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(){
	long long A, B;
	cin>>A>>B;

	cout<<gcd(A, B)<<endl;
	return 0;
}

//by Viriya6
