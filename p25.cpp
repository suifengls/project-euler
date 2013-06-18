/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-17 21:16
* Description   :   problem 25 - 1000-digit Fibonacci number 
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

const int len = 1000;

string sum(string n, string m)
{
	bool add = false;
	bool flag = false;
	int i = n.size();
	int j = m.size();
	vector<char> ss;

	while(i>0 && j>0)
	{
		if(add)
		{
			flag = true;
		}

		add = false;
		int s = 0;

		if(flag)
		{
			flag = false;
			s = 1 + n[i-1] - '0' + m[j-1]-'0';
		}
		else
			s = n[i-1] - '0' + m[j-1]-'0';

		//cout << s << endl;
		if(s >= 10)
		{
			add = true;
		}

		ss.push_back(s%10+'0');
		i--;
		j--;
	}

	if(add)
	{
		if(j != 0)
			ss.push_back(m[0]+1);
		else
			ss.push_back('1');
	}
	else if(j != 0)
		ss.push_back(m[0]);


	string sline(ss.rbegin(), ss.rend());
	//cout << n << " + " << m << " = " << sline << endl;

	return sline;
}

int main()
{
	string n = "1";
	string m = "1";
	int th = 2;
	
	//sum("233", "377");
	
	while(1)	
	{
		th++;
		n = sum(n, m);
		if(n.size() == len)
			break;
		th++;
		m = sum(m, n);
		if(m.size() == len)
			break;

	}
	
	cout << th << endl;

	return 0;
}
