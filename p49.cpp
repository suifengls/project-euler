/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :   2013-06-28 16:36
* Description   :   Problem 49 Primes permutation 
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

bool prime(int n)
{
	for(int i = 2; i <= n/2; i++)
		if(n%i == 0)
			return false;
	return true;
}

bool check(int a, int b, int c, int d)
{
	vector<int> pri;
	int n[4] = {a,b,c,d};
	int size = 0;
	int final = 0;

	for(int i = 0; i< 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(j == i)
				continue;
			for(int k = 0; k < 4; k++)
			{
				if(k == i || k == j)
					continue;
				for(int l = 0; l < 4; l++)
				{
					if( l == k || l == j || l == i)
						continue;
					int sum = n[i]*1000+n[j]*100+n[k]*10+n[l];
					if(prime(sum))
					{
						vector<int>::iterator it = find(pri.begin(), pri.end(), sum);
						if(it == pri.end())
							pri.push_back(sum);
					}
				}
			}
		}
	}

	//cout << "Num of primes: " << pri.size() << endl;
	if(pri.size() < 3)
		return false;
	else if(pri.size() == 3)
	{
		if((pri[1] - pri[0]) == (pri[2] - pri[1]))
			return true;
		else return false;
	}

	sort(pri.begin(), pri.end());
	vector<int> dif;
	for(int i = 1; i < pri.size(); i++)
	{
		dif.push_back(pri[i] - pri[i-1]);
		//cout << pri[i]-pri[i-1] << endl;
	}
	for(int t = 0; t < dif.size(); t++)
	{
		for(int i = 1; i < dif.size(); i++)
		{
			// cut once from 0 - i
			for(int j = t; j < i; j++)
			{
				int sum1 = 0, sum2 = 0;
				for(int k = t; k <=j; k++)
					sum1 += dif[k];
				for(int k = j+1; k <= i; k++)
					sum2 += dif[k];
				if(sum1 == sum2)
				{
					if(pri[t] < 1000 || sum1 == 0)
						return false;
					cout << pri[t] << " " << pri[j+1] << " " << pri[i+1] << endl;
					return true;
				}

			}
		}
	}

	return false;
}

int main()
{
	//cout << check(1,4,7,8) << endl;;
	for(int a = 0; a <= 9; a++)
	{
		for(int b = 0; b <= 9; b++)
		{
			for(int c = 0; c <= 9; c++)
			{
				for(int d = 0; d <= 9; d++)
				{

					//cout << "test: " << a << " " << b << " " << c << " " << d << endl;
					check(a, b, c, d);
				}
			}
		}
	}

	return 0;
}
