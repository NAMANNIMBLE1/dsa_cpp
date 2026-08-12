#include<bits/stdc++.h>
using namespace std;
int main(){

    int number = 12345;

    int count = 0;

    while(number){
        number = number / 10;
        count++;
    }
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}   