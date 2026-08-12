#include <bits/stdc++.h>
using namespace std;

vector<int> find_divisors(int n) {
    vector<int> ans;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }

    return ans;
}

vector<int> find_divisors_optimized(int n) {
    vector<int> ans;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);

            if(i != n / i) {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> divisors = find_divisors(n);
    for(int i = 0 ; i < divisors.size() ; i++){
        cout << divisors[i] << " ";
    }

    vector<int> divisors_optimized = find_divisors_optimized(n);
    cout << endl;
    for(int i = 0 ; i < divisors_optimized.size() ; i++){
        cout << divisors_optimized[i] << " ";
    }

    return 0;
}