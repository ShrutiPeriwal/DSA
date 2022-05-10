//One pattern - 
//Print in the output the exact pattern provided below - 
//1
//1 1
//1 1 1
//1 1 1 1
//1 1 1 1 1

#include<bits/stdc++.h>
using namespace std;
int main() {
	int k = 1;
	for(int i = 1; i<=5; i++) {
		for(int j = 1; j<=i; j++) {
			cout<<k<<" ";
		}
	cout<<endl;
	}
	return 0;
}
