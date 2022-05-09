//Operators - PrepBuddy wants you to get familiar with various relational operators. He provides you with two numerial values X and Y and your task is to find the relation between
//them that is - X is smaller than Y, X is greater than Y, X is equal to Y

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y;
	cin>>x>>y;
	if(x<y) {
		cout<<x<<" is smaller than "<<y;
	} else if(x>y) {
		cout<<x<<" is greater than "<<y;
	} else {
		cout<<x<<" is equal to "<<y;
	}
	return 0;
}
