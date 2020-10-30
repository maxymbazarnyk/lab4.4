// Lab_04_4.cpp 
// < Базарник Максим > 
// Лабораторна робота № 4.4 
// Табуляція функції, заданої графіком.
// Варіант 1 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6 - R)
			y = 0;
		else
			if (-6 - R < x && x <= -6)
				y = -sqrt(R * R - x * x - 12 * x - 36);
			else
				if (-6 < x && x <= -R)
					y = x + R;
				else
					if (-R < x && x <= 0)
						y = sqrt(R * R - x * x);
					else
						if (0 < x && x <= 3)
							y = (-R / 3) * x + R;
						else
							y = (x - R) / 2;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
