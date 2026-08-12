#include<bits/stdc++.h>
using namespace std;

void printNtimes(int n,int count){
    //base case
    if(count==n) return;

    cout<<count<<" "<<endl;
    printNtimes(n,count+1);
};


int main(){
    int n;
    cout<<"Enter the range of numbers to print: ";
    cin>>n;
    printNtimes(n,0);
    return 0;
}