//Birthday Gift - 
//Abhishek and Gaurav are the best friends, today is Gourav's birthday, but Abhishek forgot to buy a gift for him. Gourav is very angry with him. Abhishek has an idea
//for a gift. Gaurav likes coding very much. So Abhishek gave him a problem to solve as his gift. Gaurav likes everything infinitely. Abhishek gave him a sequence problem,
//such that its first element is equal to A(S1 = A), and the difference between any two adjacent elements is (Si - Si-1 = C). In paricular, Gaurav wonders if his favorite
//integer B appears in this sequence, that is , there exists a positive integer i, such that Si = B. Gaurav is busy at his birthday party, he asks you to solve this problem.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		if(b==a) {
			cout<<"YES"<<endl;
		} else if(a>b && c>0 || a<b && c<0) {
			cout<<"NO"<<endl;
		} else if(c==0) {
			if(a==b) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		} else {
			long long int u = b-a;
			if(u % c == 0) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
