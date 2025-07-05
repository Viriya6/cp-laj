#include <iostream>
using namespace std;

int main(){
    //input test case
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        //input case
        int n; cin>>n;
        int a[n]; for(int j = 0; j < n; j++){ cin>>a[j]; }
        
        //proccess
        int satu = 0; int nol = 0; int k = 1;
        for(int p = 0; p <= n - 1; p++){
            if(a[p] == 0 && a[p] == a[p - 1] && p > 0){
                k = -1;
                break;
            }
            if(a[p] == 1 && a[p] == a[p - 1]){
                k += 5;
            } else if(a[p] == 1){
                k++;
            }
        }
        
        //output
        cout<<k<<endl;
    }
}