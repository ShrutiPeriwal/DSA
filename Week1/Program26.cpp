//House Number -
//Rahul is living in a colong containning N houses. He needs to label each house with a number from 1 to N. Each house will be labelled with a distinct number.
//Rahul wants to know how many digits he will have to write down as he labels the houses.

#include<bits/stdc++.h>
using namespace std;

long long int totalDigits(int n) {
	long long int number_of_digits = 0;
	for(int i = 1; i <= n; i *= 10)
		number_of_digits += (n -i +1);
		
	return number_of_digits;
}
int main() {
	long long int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<totalDigits(n)<<endl;
	}
	return 0;
}
