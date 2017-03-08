#include "point.h"



point point::operator+(point a) const
{
	point p;
	p.x = x + a.x;
	p.y = y + a.y;
	return p;
}

point point::operator-(point a) const
{
	point p;
	p.x = x - a.x;
	p.y = y - a.y;
	return p;
}

point point::operator+=(point p) 
{
	x += p.x;
	y += p.y;
	return *this;
}

point point::operator-=(point p) 
{
	x -= p.x;
	y -= p.y;
	return *this;
}

point point::operator*=(point p)
{
	x *= p.x;
	y *= p.y;
	return *this;
}

point point::operator/=(point p)
{
	
	if (x != 0 && y != 0) {
		x /= p.x;
		y /= p.y;
		return *this;
	}
	return *this;
	
}

bool point::operator==(point a) const
{
	if (x == a.x && y == a.y)
	{
		return true;
	}
	else {
		return false;
	}
}

bool point::operator!=(point a) const
{
	if (x != a.x || y != a.y)
	{
		return true;
	}
	else {
		return false;
	}
}

point point::operator=(point p)
{
	x = p.x;
	y = p.y;
	return *this;
}

int & point::operator[]  (unsigned i)
{
	if (i>99)
	{
		cerr << ("You can't do that !!!!") << endl;
	}
	return xTab[i];
}

point point::operator++()
{
	x++;
	y++;
	return *this;
}

point point::operator++(int n)
{
	point p = *this;
	x++;
	y++;
	return p;
}

point::~point()
{
	npt--;
}

/*point operator+(point p, point p1)
{
	point p2;
	p2.x = p.x + p1.x;
	p2.y = p.y + p1.y;
	return p2;
}*/

ostream & operator<<(ostream & os, const point & mp)
{
	
	os << "X: " << mp.x << " Y: " << mp.y << "\n";
	return os;
}

istream & operator >> (istream & is, point & mp)
{
	cout << "Saisir X: " << endl;
	is >> mp.x;
	cout << "Saisir Y: " << endl;
	is >> mp.y;
	return is;
}

void * point::operator new (size_t sz)                     // new surdéfini
{
	npt_dyn++;
	cout << "     il y a " << npt_dyn << " points dynamiques sur un \n";
	return ::new char[sz];
}

void point::operator delete (void * dp)
{
	npt_dyn--;
	cout << "     il y a " << npt_dyn << " points dynamiques sur un \n";
	::delete (dp);
}
