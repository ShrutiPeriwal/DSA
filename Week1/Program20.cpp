//Reverse the Number - 
// PrepBuddy gave you a number X and asks you to reverse that number and print it -

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, rev=0, rem;
	cin>>n;
	while(n!=0) {
		rem = n%10;
		rev = rev *10 +rem;
		n = n /10;
	}
	cout<<rev;
	return 0;
}
