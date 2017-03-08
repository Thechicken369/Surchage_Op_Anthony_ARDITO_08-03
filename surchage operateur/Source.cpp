#include "point.h"
#include <stdlib.h>

using namespace std;


int point::npt = 0;       // initialisation membre statique npt
int point::npt_dyn = 0;   // initialisation membre statique npt_dyn


int main() {
	
	point a(1, 3), b(5, 4), c(7, 6), d(1, 3), x;

	//test affichage <<
	cout << a;
	
	//test >>
	cin >> b;
	cout << b;

	//test +
	x = a + c;
	cout << x;

	//test -
	x = c - d;
	cout << x;

	//test +=
	a += c;
	cout << a;

	//test -=
	c -= b;
	cout << c;

	//test *=
	d *= b;
	cout << d;

	//test /=
	a /= c;
	cout << a;

	//test == 
	if (a==d)
	{
		cout << "a est egale a d" << endl;
	}
	else {
		cout << "a n'est pas egale a d" << endl;
	}

	//test != 
	if (a != d)
	{
		cout << "a est different a d" << endl;
	}
	else {
		cout << "a est egale a d" << endl;
	}

	//test =
	a = b;
	cout << a;
	cout << b;

	//test new et delete
	point * a1 = new point(1, 2);
	delete a1;

	//Test  []
	a[20] = 40;
	a[200] = 500;





	system("pause");

}