#include <iostream>
using namespace std;

int intSum(int x,int y){
	return x + y;
}

int main() {
	
	int fnum,snum,sum;
	cin>>fnum>>snum;
	
	sum = intSum(fnum,snum);
	cout<<'Sum: '<<sum<<endl;
}
