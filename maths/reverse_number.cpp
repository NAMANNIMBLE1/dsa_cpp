#include<bits/stdc++.h>
using namespace std;\


int reverse_number(int n){
    int rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}


int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;

    cout<<(reverse_number(n)==n ? "Palindrome" : "Not Palindrome")<<endl;

    return 0;
}