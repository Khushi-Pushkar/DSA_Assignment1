#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Lower range=";
    cin>>a;
    cout<<"Upper range= ";
    cin>>b;
    
    for(int i=a;i<=b;i++){
        bool prime=true;
        if(i==1 or i==0){
            prime=false;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=false;    
                break;
            }
        }
        if(prime==true){
            cout<<i<<"\n";
        }    
}
    return 0;
}