#include<iostream>
using namespace std;
struct Point
{
     double x;
     double y;
     void address_point( Point point1){
   cout << "Address of point is " << &(point1.x) << " " << &(point1.y);

}
};
int main () {
    Point point1 = {1, 2};
    point1.address_point(point1);
    return 0;
// dia chi cua c�c phan tu b�n trong Point c�ch nhau 8 bit v� 4 byte
}
