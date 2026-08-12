#include<bits/stdc++.h>
using namespace std;

void printforward(int n, int count) {
    // base case
    if (count == n) return;

    cout << count+1 << " " << endl;
    printforward(n, count + 1);
}

void printreverse(int n, int count) {
    // base case
    if (count < 0) return;

    cout << count+1 << " " << endl;
    printreverse(n, count - 1); // backtracking the recursion tree 
}



int main() {
    int n;
    cin >> n;
    
    cout << "Printing in forward order: " << endl;
    printforward(n, 0);
    cout << "Printing in reverse order: " << endl;
    printreverse(n, n - 1);
    return 0;
}