/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-28 12:11
* Description   :   Probelm 47 Distinct primes factors 
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
const int len = 4;

bool prime(int n)
{
	for(int i = 2; i <= n/2; i++)
		if(n%i == 0)
			return false;
	return true;
}

// n have 4 distinct prime factors?
bool check(int n)
{
	int num = 0;
	int m = n;
	vector<int> div;

	for(int i = 2; i < n/2+1; i++)
	{
		vector<int>::iterator it;
		if(prime(i) && m%i == 0)
		{
			it = find(div.begin(), div.end(), i);
			if(it == div.end()) // new factor
			{
				//cout << i << " of " << n << endl;
				div.push_back(i);
				if(div.size() > len)
					return false;
			}
			m = m/i;
			if(m < 2)
				break;
		}
	}
	//cout << div.size() << " factors of " << n << endl;
	if(div.size() == len)
	{
		//cout << div.size() << " factors of " << n << endl;
		return true;
	}
	return false;
}

int main()
{
	int num = 0;
	int n = 130000;
	//cout << check(644) << endl;;
	//while(0)
	while(num < len)
	{
		if(check(n))
		{
			num++;
			//cout << "Find " << n << " with num = " << num << endl;
		}
		else
			num = 0;

		n++;
	}

	cout << "First one " << n-len << endl;
	return 0;
}
