#include <iostream>
using namespace std;

int main(){
    // input P, Q, R, N, dan T
    long long P, Q, R, N;
    cin>>P>>Q>>R;
    cin>>N;
    
    long long T[N];
    for(int n = 0; n < N; n++){
        cin>>T[n];
    }
    
    for(int t = 0; t < N; t++){
        if(T[t] % P == 0 && T[t] % Q == 0 && T[t] % R == 0 ){
            cout<<"YA"<<endl;
        } else {
            cout<<"TIDAK"<<endl;
        }
    }

}

//by Viriya6