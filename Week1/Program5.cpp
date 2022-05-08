//Clocks and Angles - PrepBuddy has an analog clock which consists of two hands one for hour and another for minute. She wants to calculate the shorter angle formed between hour and
// minute hand at any given time.
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int H, M, Hr, Min, angle;
		cin>>H>>M;
		Hr = 0.5 * (H * 60 + M);
		Min = 6 * M;
		angle = abs(Hr-Min);
		angle = min(360 - angle, angle);
		cout<<angle<<endl;
	}
	return 0;
}

