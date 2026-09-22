#include <bits/stdc++.h>
using namespace std;

int sumofdigit(int i) {
    int n = 0;
    while(i > 0) {
        n += i % 10;
        i = i / 10;
    }
    return n;
}

int main() {
    int a, b;
    cin >> a >> b;

    long long x = sumofdigit(a) * b;

    while(x > 10) {
        x = sumofdigit(x);
    }

    cout << x;
}