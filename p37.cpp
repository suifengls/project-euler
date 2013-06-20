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

const int LEN = 1000000;

bool prime(int n)
{
	if(n == 1)
		return false;
	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}	

int main()
{
	long sum = 0;
	int count = 0;

	for(int n = 13; n < LEN; n++)
	{
		int s = 0;
		stringstream ss;
		ss << n;
		string m = ss.str();

		//cout << m << endl;

		if(m[m.size()-1] != '2' && m[m.size()-1] != '3' && m[m.size()-1] != '5' && m[m.size()-1] != '7')
			continue;

		int mm = 0;
		for(int j = 0; j < m.size(); j++)
		{
			mm = mm*10 + m[j] - '0';
		}
		if(!prime(mm))
			continue;

		int l = m.size();
		int i = 0;
		bool flag = true;
		while(i <= m.size())
		{
			flag = true;
			string t(m, i, m.size()-1);
			//cout << t << endl;

			int mm = 0;
			for(int j = 0; j < t.size(); j++)
			{
				mm = mm*10 + t[j] - '0';
			}
			if(!prime(mm))
			{
				flag = false;
				break;
			}
			i++;
		}

		if(!flag)
			continue;

		i = 0;
		while(i <= m.size())
		{
			flag = true;
			string t(m, 0, m.size()-i);

			int mm = 0;
			for(int j = 0; j < t.size(); j++)
			{
				mm = mm*10 + t[j] - '0';
			}
			if(!prime(mm))
			{
				flag = false;
				break;
			}
			i++;
		}

		if(!flag)
			continue;

		count++;
		cout << "Find: " << n << endl;
		sum += n;
		if(count == 11)
			break;

	}

	cout << count << endl;
	cout << "Result " << sum << endl;

	return 0;
}
