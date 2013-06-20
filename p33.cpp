/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-19 21:39
* Description   :   problem 32 -- pandigital products
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

const int len = 200;

int main()
{
	double sum = 1;
	
	// i/j
	for(int i = 1; i < 100; i++)
	{
		if(i%10 == 0)
			continue;
		for(int j = i+1; j < 100; j++)
		{
			if(j%10 == 0)
				continue;

			double k = (double)i/j;
			if(i%10 != j/10)
				continue;
			int d = i/10;
			int n = j%10;
			double kk = (double)d/n;
			if(k == kk)
			{
				cout << i << " " << j << endl;
				sum *= k;	
			}
		}
	}

	cout << "Result " << 1/sum << endl;

	return 0;
}
