/*
# PROBLEM:

FOR SAMPLE INPUT-
5

SAMPLE OUTPUT-
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
    int actualN = n;
    n = 2 * n;
    for(int row = 0; row <= n; row++){
        
        for(int col = 0; col <= n; col++) {

            int everyindex = actualN - min(min(row,col), min(n-row,n-col));
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
