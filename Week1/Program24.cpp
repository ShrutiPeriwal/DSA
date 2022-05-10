//Prefect Numbers and Divisors - 
//Have you heard of Perfect Numbers? If not let me tell ou what is it, Perfect Numbers are integers that are equal to the sum of all its divisors except that number
//itself. Now, given an integer N, write a program to print true if it is a perfect number or false if it is not a perfect number - 

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int sum = 0;
		for(int i =1; i<n; i++) {
			if( n % i == 0) {
				sum = sum + i;
			}
		}
		if(sum == n) {
			cout<<"True"<<endl;
		} else {
			cout<<"False"<<endl;
		}
	}
	return 0;
}
