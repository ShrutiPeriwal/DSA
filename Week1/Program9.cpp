//Leap Year or Not - We all have made fun of our friends who have their birthdays on 29th February. Given birthday year N of your friend, can you tell her if that is leap year or not
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	int year;
	cin>>year;
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
}
