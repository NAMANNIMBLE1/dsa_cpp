#include<bits/stdc++.h>
#include<cmath>
#include<iostream>

using namespace std;

int number_of_digits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

bool armstrong_number(int n){
    int num_digits = number_of_digits(n);
    int sum=0;
    int temp = n;

    while(n>0){
        int digit = n%10;
        sum += pow(digit, num_digits);
        n/=10;
    }

    if(sum == temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int n;
    cout<<"enter number: ";
    cin>>n;

    cout<<armstrong_number(n) ? "true" : "false";

    return 0;
}