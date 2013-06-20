/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-20 11:21
* Description   :   problem 36 -- DOuble-base palindromes
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

bool check(string s)
{
	for(int i = 0; i < s.size()/2; i++)
	{
		if(s[i] != s[s.size()-i-1])
			return false;
	}
	return true;
}

string transfer(int n)
{
	vector<char> vec;
	while(n > 0)
	{
		if(n%2 == 0)
		{
			vec.push_back('0');
		}
		else
			vec.push_back('1');

		n = n/2;
	}

	string ss(vec.rbegin(), vec.rend());
	return ss;
}
		

int main()
{
	long sum = 0;
	
	// include 0?
	for(int n = 1; n < LEN; n++)
	{
		stringstream ss;
		ss << n;
		string m = ss.str();

		if(!check(m)) // m != palindromes
			continue;

		//10-base palindromes
		// transfer to 2-base
		string m2 = transfer(n);

		if(!check(m2)) // m != palindromes
			continue;

		cout << m << " = " << m2 << endl;
		sum += n;
	}

	cout << "Result " << sum << endl;

	return 0;
}
