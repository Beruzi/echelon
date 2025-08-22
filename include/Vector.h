#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>
 

template<typename T> 
class Vector {
private:
	std::vector<T> data;
public:
	// Default 
	Vector() : data{} {}

	// Copy Constructor
	Vector(const Vector& other) : data(other.data) {}

	// Move Constructor
	Vector(const Vector&& other) : data(std::move(other.data)) {}

	// Copy Assignment Constructor
	Vector& operator=(Vector& other) {
		if(this != other) {
			data = other.data;	
		}	
		return this;
	}
	
	// Move Assignment Constructor
	Vector& operator=(Vector&& other) {
		if(this != other) {
			data = std::move(other.data);
		}	
		return this;
	}
	
	// Direct Init List Constructor
	Vector(std::initializer_list<T> list) {
		data = std::vector(list);
	}

	// Assignment Init List Constructor
	Vector& operator=(std::initializer_list<T> list) {
		data = std::vector(list);
		return this;
	}
	

	// Access
	T operator[](int i) {
		return data.at(i);
	}

	// Vector Operatiosn
	Vector operator+(const Vector& other) {
		Vector<T> sum;
		
		for(int i = 0; i < other.data.size(); ++i) {
			sum.data.push_back(data[i] + other.data[i]);
		}
		return sum;
	}

	// Utility
	void print() {
		int n = static_cast<int>(data.size());
		printf("Dimension: %i | Components: ", n); 
		for(auto x : data) {
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}

	






	// TODO: maybe std::vector support, etc. 
	/*
	// Accessors & Utility
	T operator[](int i) {
		return data.at(i);
	}

	int dim() {
	  }

	// Vector Operations
	Vector operator+(const Vector& other) {
		std::vector<T> sum;
		for(int i = 0; i < other.size(); ++i) {
			sum.push_back(*this[i] + other[i]);
		}	

		return Vector(sum); 
	}
	*/
};

#endif // VECTOR_H

