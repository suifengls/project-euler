/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-20 11:02
* Description   :   problem 35 -- Circular primes
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

void rotate(string &m)
{
	char s = m[0];
	for(int i = 0; i < m.size()-1; i++)
	{
		m[i] = m[i+1];
	}
	m[m.size()-1] = s;
}

int main()
{
	long sum = 0;

	for(int n = 2; n < LEN; n++)
	{
		vector<int> ro;
		ro.push_back(n);

		int s = 0;
		stringstream ss;
		ss << n;
		string m = ss.str();
		int l = m.size();

		while(l > 0 && m.size() > 1)
		{
			rotate(m);
			int mm = 0;
			for(int i = 0; i < m.size(); i++)
			{
				mm = mm*10 + m[i] - '0';
			}
			ro.push_back(mm);
			l--;
		}

		bool flag = false;
		for(int i = 0; i < ro.size(); i++)
		{
			//cout << ro[i] << endl;
			if(!prime(ro[i]))
			{
				flag = false;
				break;
			}
			flag = true;
		}

		if(flag)
		{
			cout << "Circular primes " << n << endl;
			sum++;
		}
	}

	cout << "Result " << sum << endl;

	return 0;
}
