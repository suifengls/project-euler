/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-20 20:56
* Description   :   problem 38 Pandigital multiples 
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
vector<char> num;
int len = 0;

bool check(int n)
{
	stringstream ss;
	ss << n;
	string s = ss.str();
	len += s.size();
	
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '0')
			return false;

		vector<char>::iterator it = find(num.begin(), num.end(), s[i]);
		if(it != num.end())  // already in num[]
		{
			//cout << s[i] << " is already in num" << endl;
			return false;
		}

		num.push_back(s[i]);
	}
	return true;
}

int main()
{
	string max("000000000");

	for(int n = 1; n < 10000; n++)
	{
		bool flag = false;
		len = 0;
		num.clear();
		for(int i = 1; i < 10; i++)
		{
			if(!check(n*i))
			{
				flag = false;
				break;
			}
			else
				flag = true;
			if(len == 9)
				break;
		}

		if(flag)
		{
			string mm("000000000");
			cout << "Find " << endl;
			for(int i = 0; i < num.size(); i++)
			{
				mm[i] = num[i];
				cout << num[i];
			}
			if(mm > max)
				max = mm;
			cout << endl;
		}
	}

	cout << " Max = " << max << endl;


	return 0;
}
