//Number Pattern - 
//Print in the output the exact pattern provided below - 
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

#include<bits/stdc++.h>
using namespace std;
int main() {
	int rows = 5;
	for(int i = rows; i>=1; --i) {
		for(int j =1; j<=i; ++j) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
