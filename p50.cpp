/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :   2013-06-28 20:20
* Description   :   Problem 50 Consecutive prime sume 
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

int main()
{
	int max = 0;
	int cp;
	vector<int> pri;
	pri.push_back(2);
	pri.push_back(3);
	for(int i = 5; i < 100000; i++)
		if(prime(i))
			pri.push_back(i);
	int len = pri.size();

	for(int n = 953; n < 1000000; n+=2)
	{
		if(!prime(n))
			continue;

		int num = 0;
		int sum = 0;
		// from pri[s] to pri[t]
		for(int s = 0; s < len; s++)
		{
			if(pri[s] >= n)
				break;
			bool flag = false;
		
			sum += pri[s];
			num++;
			//cout << sum << endl;
			if(sum == n)
			{
				flag = true;
				//cout << s << endl;
			}
			else if(sum > n)
			{
				// reduce from the beginning
				for(int t = 0; t <= s; t++)
				{
					sum -= pri[t];
					num--;
					if(sum == n)
					{
						//cout << s - t << endl;
						flag = true;
					}
					else if(sum < n)
						break;

				}
			}
			if(flag)
			{
				if(max < num)
				{
					max = num;
					cp = n;
					break;
				}
			}
		}
	}

	cout << max << " to form " << cp << endl;



	return 0;
}
