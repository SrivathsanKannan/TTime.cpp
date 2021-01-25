#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, s, t;
	cout<<"Enter time\n";
	cout<<"\n Hours : ";
	cin>>h;
	cout<<"\n Minutes : ";
	cin>>m;
	cout<<"\n Seconds : ";
	cin>>s;
	cout<<"The time is = "<<setw(2)<<setfill('0')<<h<<":"
	                      <<setw(2)<<setfill('0')<<m<<":"
	                      <<setw(2)<<setfill('0')<<s;
	t = (h*3600) + (m*60) + s;
	cout<<"\n Time in total seconds : "<<t;
	return 0;
}
