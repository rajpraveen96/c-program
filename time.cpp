#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t1,m1,t2,m2,min1,min2,totmin1,totmin2,time;
	cin>>t1>>m1;
	cin>>t2>>m2;
	min1=t1*60;
	totmin1=min1+m1;
	min2=t2*60;
	totmin2=min2+m2;
	time=totmin2-totmin1;
	cout<<time;
	return 0;
}