#include <iostream>
using namespace std;
struct Point{
	double x;
	double y;
	void print(){
		cout << "(" << x << "," << y << ")";
	}
	
};
int main(){
	Point m1;
	cin >> m1.x;
	cin >> m1.y;
	m1.print();
	return 0;
	}
