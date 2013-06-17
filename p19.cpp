#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

const int len = 12;

int main()
{
	// 1901.1.1 - 2000.12.31
	map<int, int> m2d;
	m2d[1] = 31;
	m2d[2] = 28;
	m2d[3] = 31;
	m2d[4] = 30;
	m2d[5] = 31;
	m2d[6] = 30;
	m2d[7] = 31;
	m2d[8] = 31;
	m2d[9] = 30;
	m2d[10] = 31;
	m2d[11] = 30;
	m2d[12] = 31;

	int Sundays = 0;
	long days = 0;
	// 1901.1.1 Tuesday
	int fd = 366%7;
	//cout << 366%7 << endl;
	for(int y = 1901; y <= 2000; y++)
	{
		// Jan
		fd += m2d[1]%7;
		fd = fd%7;
		if(fd == 0)
			Sundays++;
		// Feb
		if(y%4==0 && y%400 != 0)
		{
			fd += (m2d[2]+1)%7;
		}
		else
		{
			fd += (m2d[2])%7;
		}
		fd = fd%7;
		if(fd == 0)
			Sundays++;

		// Mar - Dec
		for(int m = 3; m <= 12; m++)
		{
			fd += m2d[m]%7;
			fd = fd%7;
			if(fd == 0)
				Sundays++;
		}
		//cout << fd << endl;
	}


	//cout << "Total days: " << days-366 << endl;
	if(fd == 0)
		Sundays--;
	cout << "Total Sundays: " << Sundays << endl;

    return 0;
}
