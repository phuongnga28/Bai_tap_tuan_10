#include <iostream>
using namespace std;
struct Point{
	const double x;
	const double y;
	void mid_point( Point & k ){
		cout << "Middle point is (" << (x+ k.x)/2 << "," << (y+k.y)/2 << ")" ;	
	}	
};
int main(){
	Point m1 = {2,5};
	Point m2 = {3,6};
	m1.mid_point(m2);
	return 0;
}
	

