#include <iostream>
using namespace std;

int main(){
	long long N;
	cin>>N;
	int nol = 0;
	for(int i = 5; N / i >= 1; i *= 5){
		nol += N / i;
	}

	cout<<nol<<endl;
	return 0;
}

//by Viriya6
