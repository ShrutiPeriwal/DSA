//Ten from Two - Let us solve a fun maths question now. Just do the simple calculation behind it and you are done. You are given a number n and younare asked to make n divisibe by 10.
//The only operation you can do on n is to multiply n by 2. Given n find out how many operations are required to make n divisible by 10.

#include<bits/stdc++.h>
using namespace std;

int multiplyby2(int n) {
	int rem, value;
	rem = n % 10;
	switch(rem) {
		case 0:
			value = 0;
			break;
		case 5:
			value = 1;
			break;
		default:
			value = -1;
	}
	return value;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<multiplyby2(n)<<endl;
	}
	return 0;
}
