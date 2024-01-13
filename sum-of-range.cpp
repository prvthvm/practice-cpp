#include <iostream>
using namespace std;

int sumRange(){
	
	int start,end;
	cin>>start>>end;
	int sum = 0;
	
	for(int i=start; i<=end; i++){
	
	    sum += i;	
	}
	
	return sum;
}

int main() {
	
	cout<<"Sum of the given Range: "<<sumRange()<<endl;
	
	return 0;
}
