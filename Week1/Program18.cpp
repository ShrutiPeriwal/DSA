//Sum of Digits - 
//prepBuddy gave you a number X and asks you to find the sum of the digits present in the number.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x, sum=0;
	cin>>x;
	while(x!=0) {
		sum= sum+x%10;
		x= x/10;
	}
	cout<<sum;
	return 0;
}
