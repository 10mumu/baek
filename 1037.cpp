#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    int small,big;
    small =big =a[0];
    for(int i=1; i<n; ++i){
        if(small>a[i]) small = a[i];
        if(big<a[i]) big =a[i];
    }

    cout<<small*big<<'\n';
    return 0;
}