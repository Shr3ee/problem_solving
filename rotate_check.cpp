#include <bits/stdc++.h>
using namespace std;
int main() {
	int n1,n2,k;cin>>n1>>n2>>k;
	cin.ignore();
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	string rr_s=s1.substr(n1-k,k)+s1.substr(0,n1-k);
	string lr_s=s2.substr(k,n2-k)+s2.substr(0,k);
	string s3=rr_s+lr_s;
	cout<<s3<<" ";
	string temp=s3;
	std::reverse(s3.begin(), s3.end());
	if(temp==s3)    cout<<"True";
	else    cout<<"False";
}