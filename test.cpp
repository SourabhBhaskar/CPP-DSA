#include<iostream>
#include<cmath>
using namespace std;


int main(){

    while(1){
        
        int n;
        cin>>n;
        int lg = ceil(log2(n+1));
        int ans = pow(2, lg)-1;
        
        cout<<ans<<endl;

    }
    

}
