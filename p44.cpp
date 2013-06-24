/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-23 21:49
* Description   :   Probelm 44* Pentagon numbers 
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

using namespace std;

bool checkpentagon(long n, int s, int t)
{
		for(int i = 1; i < 2*s; i++)
		{
			if( n == ((long)i*(3*i-1)/2))
				return true;
		}
		return false;
}

int main()
{
	long minD = 100000000;

	int i, j;
	i = 1;
	while(1)
	{
		long pi = i*(3*i-1)/2;
		for(j = i-1; j >= 1; j--)
		{
			long pj = j*(3*j-1)/2;
			long sum =  pi + pj;
			long dif = abs(pj - pi);
			//cout << pi << " and " << pj << endl;
			if(!checkpentagon(sum, i, 1) || !checkpentagon(dif, j, 0))
			{
				continue;
			}

			if(dif < minD)
			{
				minD = dif;
				cout << "Min D = " << minD << endl;
				return 0;
			}
		}
		i++;
	}

	return 0;
}

					


