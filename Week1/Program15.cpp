//Journey of Bablu and Dablu - 
//Bablu and Dablu are travelling at train. This time they are travelling without their parents. Bablu wants to know the arrangement of seats inside the train coach.
//The entire coach could be viewed as an arrangement of consecutive blocks of size 8.
//Berth Number   Compartment
//1 -  8    1
//9 - 16    2
//17 - 24    3
//..and so on
//Each of these size-8 blocks are further arranged as:
//1LB , 2MB, 3UB, 4LB, 5MB, 6UB, 7SL, 8SU, 9LB, 10MB.....
//Here LB denotes lower berth, MB middle berth, and UB upper berth.
//THe following berths are called Train - Partners:
//7SL | 8SU
//3UB | 6UB
//2MB | 5MB
//1LB | 4LB
//and the pattern is repeated for every set of 8 berths.
//Bablu and Dablu are playing a game of finding the train partner of each berth. But they are not able to find the right partner, they ask for help.
 
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    	int t = 1;
	cin >> t;
	string berth[8] = {"SL\n", "LB\n", "MB\n", "UB\n", "LB\n", "MB\n", "UB\n", "SU\n"};
	while (t--) {
	    int n;
	    cin >> n;
	    if (n % 8 < 4 && n % 8 > 0) cout << n + 3 << berth[n % 8];
	    else if (n % 8 > 3 && n % 8 < 7) cout << n - 3 << berth[n % 8];
	    else if (n % 8 == 0) cout << n - 1 << berth[0];
	    else cout << n + 1 << berth[7];
	}
    return 0;
  }

