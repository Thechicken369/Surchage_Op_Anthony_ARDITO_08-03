#pragma once
#include <iostream>

using namespace std;

class point
{
	static int npt;
	static int npt_dyn;
	int x, y;
	int xTab[100];
public:
	point(int abs = 0, int ord = 0) {
		for (int i = 0; i < 100; i++)
		{
			xTab[i] = 0;
		}
		x = abs;
		y = ord;
		npt++;
		cout << "** nombre totale de point : " << npt << endl;
	};
	point(const  point &mp) {
		x = mp.x;
		y = mp.y;
		npt++;
	}

	//Surchage operateur +
	//friend point operator+(point, point);
	point operator+(point) const;

	//Surchage operateur -
	point operator-(point) const;

	//Surchage operateur +=
	point operator+=(point);

	//Surchage operateur -=
	point operator-=(point) ;

	//Surchage operateur *=
	point operator*=(point) ;

	//Surchage operateur /=
	point operator/=(point) ;

	//Surchage operateur ==
	bool operator==(point) const;

	//Surchage operateur !=
	bool operator!=(point) const;

	//Surchage operateur =
	point operator=(point);

	//Surchage operateur
	int & operator[](unsigned i);





	//Surchage operateur ++
	point operator++();
	point operator++(int n);

	friend ostream& operator<<(ostream& os, const point& mp);//surchage cout

	friend istream& operator >> (istream& is, point& mp);//surchage cin


	void affiche() const {
		cout << "x=" << x << " y=" << y << endl;
	}
	~point();
	void * operator new(size_t sz);
	void operator delete(void * dp);
};

