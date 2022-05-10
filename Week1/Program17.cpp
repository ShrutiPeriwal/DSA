//First Digit of an Integer - 
//We already saw how to find the last digit of a number. Let's proceed ahead with finding the first digit. Given a four-digit number N, find its first digit.
//There will be no leading zerors in the integer N.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t; 
	while(t--) {
		int firstN, count, num;
		cin>>num;
		count = log10(num);
		firstN = num/pow(10,count);
		cout<<firstN<<endl;
	}
}
