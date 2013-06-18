/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-18 09:13
* Description   :   problem 26 - Reciprocal cycles
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

int check(string s)
{
	int sum = 0;
	for(int i = 0; i < s.size()/2; i++)
	{
		bool same = false;
		for(int l = 1; l < s.size()/2; l++)
		{
			string s1 = s.substr(i, l);
			string s2 = s.substr(i+l, l);
			if(s1 == s2)
			{
				same = true;
				sum = l;
				break;
			}
		}
		//if(same)
		//	break;
	}
	//cout << "0." << s << " has " << sum << endl;
	return sum;
}

// 1.0/d
string divide(int d)
{
	string result(5000, '0');
	
	int s = 10;
	int i = 0;
	while(i < 5000)
	{
		if(s < d)
		{
			result[i] = '0';
			s = s*10;
			i++;
		}
		else
		{
			int r = 1;
			bool end = false;
			while(1)
			{
				if((1+r)*d == s)
				{
					result[i] = r+1 + '0';
					i++;
					end = true;
					break;
				}
				if(r*d < s && (r+1)*d > s)
				{
					result[i] = r + '0';
					i++;
					s = s - r*d;
					s = s*10;
					break;
				}
				r++;
			}
			if(end)
				break;
		}
	}
	//cout << result << endl;

	return result;
}

int main()
{
	int max = 0;
	int nw = 0;
	int md = 0;
	for(int d = 2; d < 1000; d++)
	{
		/*
		std::ostringstream buff;
		buff << std::setprecision(std::numeric_limits<double>::digits10+1);
		buff << 1.0/d;
		cout << buff.str() << endl;
		//cout << 1.0/d << endl;
		nw = check(buff.str());
		*/
		string buff = divide(d);
		nw = check(buff);

		if(nw > max)
		{
			md = d;
			max = nw;
		}
	}
	//divide(7);

	cout << "1/" << md << " has ";
	cout << max << "-digit recurring cycle." << endl;

	return 0;
}
