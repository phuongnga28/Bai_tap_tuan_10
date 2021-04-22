#include <iostream>
using namespace std;
struct Point{
	double x;
	double y;
	
	
};
void truyen(Point k){
    cout << &k;	
}
void truyen2(Point k){
    cout << &k;
}
int main(){
	Point m1;
	cout << &m1 << endl;
	truyen(m1);
	cout << endl;
	truyen2(m1);
	return 0;
	}
