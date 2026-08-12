#include <bits/stdc++.h>
using namespace std;

bool check_pallindrome(string s, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - 1 - i])
    {
        return false;
    }
    return check_pallindrome(s, i + 1, n);
}

int main()
{

    string s = "madam";
    int n = s.length();

    cout << check_pallindrome(s, 0, n) << endl;
}