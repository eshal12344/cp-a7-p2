#include<iostream>
using namespace std;
int square(int& l) {
	
	 return pow(l, 2);
}
float rectangle(float& l, float& w) {
	int result = w * l;
	return result;
}
float circle(float r) {
	return 3.14 * pow(r, 2);

}
int main() {
	int choice;
	cout << "1.for area of sqaure" << endl;
	cout << "2.for area of rectangle" << endl;
	cout << "3.for area of circle" << endl;
	cout << "Enter your choice" << endl;
	cin >> choice;
	if (choice == 1) {
		int l;
		cout << "enter the length=" << endl;
		cin >> l;
		cout << "Area of square=" << square(l) << endl;
	}
	else if (choice == 2) {
		float l, w;
		cout << "Enter the length=" << endl;
		cin >> l;
		cout << "Enter the width=" << endl;
		cin >> w;
		cout << "Area of rectangle= " << rectangle(l, w) << endl;
	}
	else if (choice == 3) {
		float r;
		cout << "Enter the radius=" << endl;
		cin >> r;
		cout << "Area of circle=" << circle(r) << endl;
	}
}