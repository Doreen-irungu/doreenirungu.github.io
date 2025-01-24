#include <iostream>
#include <cmath>

using namespace std;

double calculatevolume(double radius, double height) {
	return M_PI * radius * radius * height;
}

int main() {
	double radius, height;

	// Prompt the user to enter the radius
	cout << "Enter the radius of the cylinder: ";
	cin >> radius;

	// Prompt the user to enter the height
	cout << "Enter the height of the cylinder: ";
	cin >> height;

	// Calculate the volume
	double volume = calculatevolume(radius, height);

	// Output the volume of the cylinder
	cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;

	return 0;
}