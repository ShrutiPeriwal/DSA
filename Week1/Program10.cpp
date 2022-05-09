//Second Smallest - You are given 3 distinct integer numbers X, Y and Z. Task is to print the second smallest number among the three provided numbers.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,z;
	cin>>x>>y>>z;
	if((x>y && x<z) || (x>z && x<y)) {
		cout<<x<<endl;
	} else if((y>x && y<z) || (y>z && y<x)) {
		cout<<y<<endl;
	} else {
		cout<<z;
	}
	return 0;
}
