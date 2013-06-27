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

int main()
{
	int count = 0;

	for(long i = 1; i < 10000000; i++)
	{
		long long h = i*(i+1)/2;
		for(long j = 1; j < i; j++)
		{
			long long p = j*(3*j-1)/2;
			if(p != h)
				continue;
			for(long k = 1; k <= i/2+1; k++)
			{
				
				long long t = k*(2*k-1);
				if(t != p || t != h)
					continue;
				count++;
				cout << i << " " << j << " " << k << endl;
				cout << t << endl;
				if(count == 2)
					return 0;
			}
		}
	}

	return 0;
}
