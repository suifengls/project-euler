/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-26 17:52
* Description   :   Probelm 46 Goldbach's other conjecture 
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

bool prime(int n)
{
	for(int i = 2; i <= n/2; i++)
		if(n%i == 0)
			return false;
	return true;
}

bool check(int n)
{
	// n = p + 2*t*t
	for(int i = 1; i < n/2; i++)
	{
		if(n-2*i*i < 2)
			return false;

		if(prime(n-2*i*i))
			return true;
	}
	return false;
}

int main()
{
	int n = 9;

	while(1)
	{
		if(!prime(n))
		{
			if(!check(n))
			{
				break;
			}
		}
		
		n += 2;
	}

	cout << n << endl;
	return 0;
}
