#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    if(n<=3){
        return true;
    }
    for(int i=3;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
    return true;
}
int main(){
    int n;
    while(cin>>n){
        if(prime(n)==true){
            cout<<"Prime "<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
}
