/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-20 10:31
* Description   :   problem 34 -- Digit factorials
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

int fac(int n)
{
	int sum = 1;
	while(n > 1)
	{
		sum *= n;
		n--;
	}
	return sum;
}	

int main()
{
	long sum = 0;

	for(int n = 3; n < 1000000; n++)
	{
		int s= 0;
		stringstream ss;
		ss << n;
		string m = ss.str();
		int i = m.size();
		while(i > 0)
		{
			s += fac(m[i-1]-'0');
			if(s > n)
				break;
			i--;
		}

		if(s == n)
		{
			cout << " m = " << n << " -> s = " << s << endl;
			sum += n;
		}
	}

	cout << "Result " << sum << endl;

	return 0;
}
