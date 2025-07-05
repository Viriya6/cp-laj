#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int hi = 0;
    vector<int> step;
    
    for(int i = 0; i < n; i++){
        if(a[i + 1] == 1){
            hi++;
            step.push_back(a[i]);
        }
    }
    
    hi++;
    step.push_back(a[n - 1]);
    
    cout<<hi<<endl;
    for(int i = 0; i < hi; i++){
        cout<<step[i]<<" ";
    }
}