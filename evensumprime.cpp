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
bool prime(int n){
    int flag=0;
    if(n==1)    return false;
    for(int i=2;i*i<=n;i++){
        if (n%i==0) flag=1;
    }
    if (flag==1) return false;
    else    return true;
}
int main() {
    int a,b; cin>>a>>b;
    int c=0;
    for(int i=a;i<=b;i++){
        if (prime(i) && sumofdigit(i)%2==0) c++;
    }
    cout<<c;
}