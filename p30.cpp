/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-19 17:55
* Description   :   problem 30 - digit fifth powers
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

int main()
{
	double sum = 0;
	for(int n = 2; n < 10000000; n++)
	{
		stringstream ss;
		ss << n;
		string num = ss.str();
		//cout << num << endl;
		int l = num.size();

		int m = n;
		double s = 0;
		while(l > 0)
		{
			s += pow(m%10, 5);
			m = m/10;
			l--;
		}


		if(n == s)
		{
			sum += n;
		}
	}

	cout << "SUM = " << sum << endl;

	return 0;
}
