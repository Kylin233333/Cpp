/* #include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159;
class cCircle
{
private:
	double radius;
public:
	void setr(double r);
	double getr();
	double area();
	double perimeter();
};
void cCircle::setr(double r)
{
	radius = r;
}
double cCircle::getr()
{
	return radius;
}
double cCircle::area()
{
	return PI * pow(radius, 2);
}
double cCircle::perimeter()
{
	return 2 * PI * radius;
}
int main()
{
	cCircle c1;
	cCircle c2;
	c1.setr(2.5);
	c2.setr(3.5);
	cout << "the first one:" << c1.getr()<< " " << c1.area() << " " << c1.perimeter() << " " << endl;
	cout << "the next one:" << c2.getr() << " " << c2.area() << " " << c2.perimeter() << " " << endl;

}*/
#include <iostream>
using namespace std;
class Array
{
private:
	int a, b;
public:
	Array(int x, int y) // Constructor
	{
		a = x;
		b = y;
	}
	~Array() // Destructor
	{}
	Array(Array& i) // Copy constructor
	{
		a = i.a;
		b = i.b;
	}
	void SetAt(int x, int y)
	{
		a = x;
		b = y;
	}
	void GetAt()
	{
		cout << "a = " << a << " b = " << b << endl;
	}
};

int main()
{
	const int T1 = 1;
	const int T2 = 2;

	Array x1(T1, T2);
	x1.GetAt();
	Array x2(x1);
	x2.GetAt();
}