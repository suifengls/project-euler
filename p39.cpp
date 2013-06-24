/**********************************************************************
 * Author        :   suifengls
 * E-mail        :   suifengls@gmail.com 
 * Last modified :	2013-06-20 12:08
 * Description   :   problem 37 -- Truncatable primes
 **********************************************************************/
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <limits>
#include <iomanip>

using namespace std;


int main()
{
	int max = 0;
	int mp, LEN;

	for(LEN = 3; LEN < 1000; LEN++)
	{
		int sum = 0;
		for(int a = 1; a < LEN/2; a++)
		{
			for(int b = 1; b < LEN-a; b++)
			{
				int c = LEN - a - b;
				if(c < 1)
					continue;

				if(a*a + b*b == c*c)
				{
					sum++;
					cout << "p = " << LEN << " " << a << " " << b << " " << c << endl;
				}
			}
		}

		if(sum > max)
		{
			max = sum;
			mp = LEN;
		}
		
	}
	cout << " Max = " << max << " p = " << mp << endl;


	return 0;
}
