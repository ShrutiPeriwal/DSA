//Shopping Cost - Tina is preparing a shopping list containning N items. She knows the quantity and price of each item on the list. The shop is offering a 20% discount on the items with
//a quantity of more than 100 units. Given the quantity and price of each of the N items , yur task is to calculate how much each item will cost.

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,p,q,a,b,c;
	float d = 0.2;
	cin>>n;
	while(n--) {
		cin>>p>>q;
		if(p>100) {
			a = p*q*0.2;
			c = p*q;
			b = c-a;
			cout<<fixed;
			cout<<setprecision(1);
			cout<<(float)b<<endl;
		} else if(p<=100) {
			c = p*q;
			cout<<fixed;
			cout<<setprecision(1);
			cout<<(float)c<<endl;
		}
	}
	return 0;
}
