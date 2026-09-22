#include <bits/stdc++.h>
using namespace std;
int sumofdigit(int i){
    int n=0;
    while(i>0){
            n+=i%10;
            i=floor(i/10);
        }
    return n;
}
void count(int a, int b){
    int c=0;
    for(int i=a;i<=b;i++){
        if(i%3==0){
            int n=sumofdigit(i);
            if(n%2==0)  c++;
        }
    }
    cout<<c;
}

int main() {
    int a,b; cin>>a>>b;
    count(a,b);
    
}