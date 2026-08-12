#include<bits/stdc++.h>
using namespace std;

int gcd_(int a, int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}

int eucledian_gcd(int a, int b){
    if(b==0){
        return a;
    }
    return eucledian_gcd(b,a%b);
}


int main(){

    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    cout<<"gcd of "<<a<<" and "<<b<<" is: "<<gcd_(a,b)<<endl;
    cout<<"gcd of "<<a<<" and "<<b<<" using eucledian algorithm is: "<<eucledian_gcd(a,b)<<endl;

    return 0;
}