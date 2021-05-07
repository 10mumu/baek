#include <iostream>
using namespace std;

bool prime(int k){
    if(k<2){
        return false;
    }
    for(int i=2; i*i<=k; ++i){
        if(k%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){

    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; ++i){
        int num;
        cin>>num;
        if(prime(num)){
            count +=1;
        }
    }
    cout<<count<<'\n';
    return 0;
    
    
}