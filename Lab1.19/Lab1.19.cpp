#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float radius;
	float width, height;
	float pointX, pointY;
	cout << "Enter radius of half circle: ";
	cin >> radius;
	cout << "\nEnter height and width of rectangle: ";
	cin >> height >> width;
	cout << "\nEnter point position: ";
	cin >> pointX >> pointY;
	if (((pointX >= 0) && (sqrt(pow((0 - pointY), 2) + pow((0 - pointX), 2))) <= radius)||((pointX <= 0)&&(abs(pointX) <= width)&&(abs(pointY) <= height/2))) {
		cout << "\nPoint in area";
	}
	else {
		cout << "\nPoint out of area";
	}
}
