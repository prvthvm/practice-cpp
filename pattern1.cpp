/* 
#PROBLEM:
Print this pattern-

0 0 0 0 0 0 0
0 1 1 1 1 1 0
0 1 2 2 2 1 0
0 1 2 3 2 1 0
0 1 2 2 2 1 0
0 1 1 1 1 1 0
0 0 0 0 0 0 0

Note:- Take pattern size from user.
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n){

    n = 2 * n;
    for(int row = 0; row <= n; row++){
        
        for(int col = 0; col <= n; col++) {

            int everyindex = min(min(row,col), min(n-row,n-col));
            cout<<everyindex<<" ";
          
        }
        cout<<endl;
    }   
}

int main() {
	
	int num;
    cin>>num;

    pattern(num);
  
	return 0;
}
