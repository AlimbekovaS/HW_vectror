#pragma once
#include"library.h"
class Vector
{
private:
	int cur_size;
	int buf_size;
	int *els;
public:
	Vector();
	Vector(int size);
	int & push_back( int el);// pochemy &?
	int size()const// dlia raboty s conststantnumi obj
	{
		return cur_size;
	}
	int & at(int index);

	int & operator[](int index);

	Vector operator+(const Vector &obj);

	Vector operator - (const Vector &obj);

	int operator<<(int index);

	int operator>>(int el);

	bool operator==(Vector obj);

	//Vector operator=(const Vector &obj); //prisvaivanie
	
	bool operator!=(Vector obj);

	void print();


	//~Vector() { delete[]els; }
};
