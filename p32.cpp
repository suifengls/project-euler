/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-19 21:39
* Description   :   problem 32 -- pandigital products
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

bool check(string s, vector<int> &digits)
{
	for(int i = 0; i < s.size(); i++)
	{
		int n = s[i] - '0';
		if(n == 0)
			return false;

		vector<int>::iterator it = find(digits.begin(), digits.end(), n);
		if(it != digits.end())
		{
			//cout << "Find same digit " << n << endl;
			return false;
		}
		else
		{
			//cout << "push one digit " << n << endl;
			digits.push_back(n);
		}
	}
	return true;
}

int main()
{
	vector<int> product;
	long sum = 0;

	for(int i = 1; i < 2000; i++)
	{
		stringstream ss;
		ss << i;
		string si = ss.str();
		for(int j = 1; j < 2000; j++)
		{
			stringstream ss1;
			ss1 << j;
			string sj = ss1.str();

			int k = i * j;
			stringstream ss2;
			ss2 << k;
			string sk = ss2.str();

			if(si.size() + sj.size() + sk.size() != 9) // not 9 digits
				continue;

			vector<int>::iterator it = find(product.begin(), product.end(), k);
			if(it != product.end()) // already count
				continue;

			vector<int> digits;
			if(!check(si, digits))
				continue;
			if(!check(sj, digits))
				continue;
			if(!check(sk, digits))
				continue;

			//cout << digits.size() << endl;
			if(digits.size() == 9)
			{
				cout << i << " * " << j << " = " << k << endl;
				product.push_back(k);
				sum += k;
			}
		}
	}
	cout << "Sum of products: " << sum << endl;

	return 0;
}
