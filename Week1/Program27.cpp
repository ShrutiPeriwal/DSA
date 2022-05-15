//Bank Manager
//Gaurav work in a bank and one-day bank manager gave him a character P which is already printed and told him to print character P exactly 
//N times. The bank manager told Gaurav, you are allowed to perform only these operations.
//1. Copy All – This operation will copy all the printed characters.
//2. Paste – This operation will paste all the characters which are already copied.
//Gaurav asks you for help to print character P exactly N times with the minimum number of operations.\

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      int curr = 1;
        int prev = 0;
        int ans = 0;
        while(curr < n)
        {
            if(n%curr == 0)
            {
                prev = curr; // Copy
                curr += prev; // Paste
                ans += 2;
            }
            else{
                curr += prev; // Paste
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
  }

