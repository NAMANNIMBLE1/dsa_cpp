#include<bits/stdc++.h>
using namespace std;


int find_recursive_sum(int n) {
    // base case
    if (n == 0) return 0;

    return n + find_recursive_sum(n - 1); // backtracking the recursion tree
}

// using the forward tree recursion approach

int find_recursive_sum_forward(int n, int count) {
    // base case
    if (count == n) return 0;

    return count + 1 + find_recursive_sum_forward(n, count + 1); // backtracking the recursion tree
}

int main() {
    int n;
    cout<<"enter the number of elements to sum: ";
    cin>>n;

    cout << "Sum of first " << n << " natural numbers is: " << find_recursive_sum(n) << endl;
    cout << "Sum of first " << n << " natural numbers using forward recursion is: " << find_recursive_sum_forward(n, 0) << endl;
    return 0;
}