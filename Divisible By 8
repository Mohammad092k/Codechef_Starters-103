Problem
You are given a positive integer 
�
N. Note that 
�
N may exceed the range of a 64-bit integer.

Find a positive integer 
�
M (without leading zeroes) divisible by 
8
8, formed by changing minimum number of digits in 
�
N.
Note that the number of digits in 
�
M must be equal to the number of digits in 
�
N.

If there are multiple answers, you may print any one of them.
My Code
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n; 
        string s; 
        cin >> s;

        ll num;         
        string ltd;    
        if (n == 1)
            cout << 8 << endl;
        else {
            if (n >= 3)
                ltd = s.substr(n - 3, 3);
            else
                ltd = s;
            if (n >= 3)
                num = stoll(ltd);
            else
                num = stoll(s);
            if (num % 8 == 0) {
                cout << s << endl;
            } else {
                ll rem = num % 8;
                if (num % 10 >= rem) {
                    num -= rem;
                } else {
                    num += 8 - rem;
                }
                string res = "";
                if (n > 3)
                    res = s.substr(0, n - 3);
                string convertValue = to_string(num);
                reverse(convertValue.begin(), convertValue.end());
                while (convertValue.size() != ltd.size()) {
                    convertValue += '0';
                }
                reverse(convertValue.begin(), convertValue.end());
                res += convertValue;
                cout << res << endl;
            }
        }
    }

    return 0;
}
