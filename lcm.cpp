#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int c = gcd(a, b);
    long long int lcm = 0;
    // here use formula that ==>  gcd(a,b)*lcm(a,b) = a*b
    if (c != 0) {
        // this condition is to prevent seg fault in case of a = 0 & b = 0 as
        // input
        lcm = (a * b) / c;
    }
    cout<<"new";
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}