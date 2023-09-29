#include <iostream>
using namespace std;
int main(){
    int t,j;
    cout<<"How many times do you want to test the numbers :";
    cin>>t;
    
    for (int i=0;i<=t;i++){
        int num;
        cout<<"Enter number here:";
        cin>>num;
        for (int j=0;j<=t;j++){}
        if (num==1||num==0||num%j==0){
            cout<<"not a prime number"<< endl;
        }
        else{
            cout<<"prime number"<< endl;
        }
    }
    return 0;
    }