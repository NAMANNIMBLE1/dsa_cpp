#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;

    int count = 0;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            count++;

            if(i != n/i) {
                count++;
            }
        }
    }

    return count == 2;
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << isPrime(n) << endl;

    return 0;
}