#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n]; for(int i = 0; i < n; i++){ cin>>a[i]; }
    int chest = 0; int biceps = 0; int back = 0;
    
    for(int i = 0; i < n; i += 3){ chest += a[i]; }
    for(int i = 1; i < n; i += 3){ biceps += a[i]; }
    for(int i = 2; i < n; i += 3){ back += a[i]; }
    
    if(chest > biceps && chest > back){
        cout<<"chest"<<endl;
    } else if(biceps > chest && biceps > back){
        cout<<"biceps"<<endl;
    } else if(back > chest && back > biceps){
        cout<<"back"<<endl;
    }
}