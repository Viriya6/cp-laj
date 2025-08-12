#include <iostream>
#include <string>
using namespace std;

int main(){
	long long N, Q;
	cin>>N>>Q;
	string A[N], P[Q];
	long long B[N];
	for(long long i = 0; i < N; i++){
		cin>>A[i]>>B[i];
	}
	for(long long i = 0; i < Q; i++){
		cin>>P[i];
	}

	for(long long i = 0; i < Q; i++){
		for(long long j = 0; j < N; j++){
			if(P[i] == A[j]){
				cout<<B[j]<<endl;
			}
		}
	}
	 
}
//by Viriya6 (Time Limit Exceeded)
