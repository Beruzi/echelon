#include "Vector.h"


#include <iostream>


int main() {
	std::cout << "Hello World!" << std::endl;

	// Define Vector & Default Init (default constructor)
	Vector<int> a;

	// List Init
	Vector b = {1, 0}; // Assign List Init
	Vector c{0, 1}; // Direct List Init
	
	// Initialize
	Vector x(b); // Direct Init (copy constructor)
	Vector y = c; // Assign Init (copy assignment)
	
	a.print();
	b.print();
	c.print();
	x.print();
	y.print();

	std::cout << "ADDITION" <<std::endl;
	Vector w = x + y;
	w.print();

	std::cout << "Multiplication" << std::endl;
	Vector ww = w * 2;
	ww.print();
	

	return 0;
}
