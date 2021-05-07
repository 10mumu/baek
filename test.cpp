#include <iostream>
using namespace std;

int main(){

  
  for(int count =0; count<20; ++count){
      if((count%4)==0)
            continue;
    
    cout<<count<<'\n';
  }
    
}