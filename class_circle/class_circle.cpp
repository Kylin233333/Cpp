#include <iostream>
#include <cmath>
using namespace std;

//class cCircle
class cCircle
{
private:
    double radius;
    int x, y;
public:
    cCircle() {};
    cCircle(double, int, int);
	void setr(double r);
	void setxy(int x, int y);
    void getr(double&);
    void getxy(int&, int&);
    ~cCircle() {};
};
cCircle::cCircle(double r, int x, int y)
{
    radius = r;
    this->x = x;
    this->y = y;
}
void cCircle::setr(double r)
{
    radius = r;
}
void cCircle::setxy(int x,int y)
{
    this->x = x;
    this->y = y;
}
void cCircle::getr(double& r)
{
	r = radius;
}
void cCircle::getxy(int& x, int& y)
{
	x = this->x;
	y = this->y;
}

//class cPoint
class cPoint
{
private:
	int x, y;
public:
    cPoint() {};
	cPoint(int, int);
	void setxy(int x, int y);
	void getxy(int&, int&);
	~cPoint() {};
};
cPoint::cPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}
void cPoint::setxy(int x, int y)
{
	this->x = x;
	this->y = y;
}
void cPoint::getxy(int& x, int& y)
{
	x = this->x;
	y = this->y;
}

int getdis(int x1, int y1, int x2, int y2)
{
    double a;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return a;
}
int main()
{
    cCircle c1, c2;
    c1.setr(2.2);
    c2.setr(3.3);
    c1.setxy(3,5);
    c2.setxy(6,4);
    int x1, y1, x2, y2;
    c1.getxy(x1, y1);
    c2.getxy(x2, y2);
    double r1, r2;
    c1.getr(r1);
    c2.getr(r2);
    getdis(x1, y1, x2, y2);
    if (getdis(x1, y1, x2, y2) > (r1+r2))
    {
		cout << "Two circles are not intersected" << endl;
	}
    else
    {
		cout << "Two circles are intersected" << endl;
	}
	return 0;
}