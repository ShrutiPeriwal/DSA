//FASCINATING NUMBER - 
// PrepBuddy find any four digit number fascinating that has all the 4 digits unique. For example 1234 is a fascinating number. His friend Rahul gave him n numbers
//and asks him to find the minimum number which is strictly larger than the given one and has only distinct digits.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a, b, c, d;
		int year;
		cin>>year;
		while(1) {
			year++;
			a = year/1000;
			b = year/100%10;
			c= year/10%10;
			d= year%10;
			if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
				break;
			}
		}
		cout<<year<<endl;
	}
	return 0;
}
