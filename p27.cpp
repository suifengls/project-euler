/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-18 10:02
* Description   :   problem 27 - Quadratic primes
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

const int len = 1000;

int check(int a, int b)
{
	for(int n = 0; n < 100; n++)
	{
		int k = n*n + a*n + b;
		if(k < 2)
			return 0;
		for(int i = 2; i < k; i++)
		{
			if(k%i == 0)
			{
				return n-1;
			}
		}
	}

	return 0;
}



int main()
{
	int max = 0;
	int ma, mb;
	int sum = 0;
	int a, b;
	//for(a = 0; a < 10; a++)
	for(a = 999; a > -1000; a--)
	{
		//for(b = 9; b < 100; b++)
		for(b = 999; b > -1000; b--)
		{
			sum = check(a, b);
			if(sum > max)
			{
				ma = a;
				mb = b;
				//cout << "a = " << a << " b = " << b << endl;
				//cout << sum << endl;
				max = sum;
			}
		}
	}

	cout << "max produce: " << ma*mb << endl;

	return 0;
}
