#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Triangle.h"
#include "client.h"
using namespace std;

int main() {
	const int size = 6;
	Shape* shapes[size];

	shapes[0] = new Circle();
	shapes[1] = new Circle(2, 10, 20);
	shapes[2] = new Rect();
	shapes[3] = new Rect(3, 4, 30, 40);
	shapes[4] = new Triangle();
	shapes[5] = new Triangle(5, 6, 50, 60);

	out_shapes(cout, shapes, size);

	cout << "total area = "
		<< total_area(shapes, size) << endl;

	for (int i = 0; i < size; i++)
	{
		delete shapes[i];
	}
	
	return 0;
}