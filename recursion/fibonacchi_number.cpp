#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int second_last = 0;
    int last = 1;
    
    cout <<second_last<<" "<< last <<" ";
    
    for(int i = 2 ; i <= n ; i++){

        int curr = second_last + last;
        second_last = last;
        last = curr;

        cout<<curr << " ";
    }
}