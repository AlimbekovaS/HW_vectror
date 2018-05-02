#include"library.h"
#include"vector.h"
int main()
{
	Vector v1, v2;
	cout << "Vector 1: \n";
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(6);
	v1.push_back(4);
	v1.push_back(9);
	v1.print();
	cout << "Vector 2: \n";
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(6);
	v2.push_back(8);
	v2.push_back(9);
	v2.print();

	cout << "\nOperator []\n";
	v1[2] = 122;
	v1.print();

	cout << "\nOperator + \n";
	v1 + v2;
	v1.print();

	cout << "\nOperator - \n";
	v2[0] = 11;
	v2[1] = 22;
	v2[2] = 128;
	v1 - v2;
	v1.print();

	cout << "\nOperator << \n";

	v2.print();
	int a = v2<<1;
	cout << a << endl;
	v2.print();

	cout << "\nOperator >> \n";

	v2>>55;
	v2.print();

	cout << "\nOperator == \n";
	cout<<(v1 == v2)<<endl;

	cout << "\nOperator != \n";
	cout << (v1 != v2) << endl;
	system("pause");
	return 0;
}

