/**********************************************************************
 * Author        :   suifengls
 * E-mail        :   suifengls@gmail.com 
 * Last modified :	2013-06-17 16:15
 * Description   :   project euler problem 23 -- Non-abundant sums
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

int main()
{
	vector<int> abn;

	for(int i = 12; i <= 28123; i++)
	{
		int sum = 1;
		for(int j = 2; j < i - 1; j++)
		{
			if(i%j==0)
				sum += j;
		}
		if(sum > i) // abundant number
			abn.push_back(i);
	}

	long sum = 0;
	for(int i = 1; i <= 28123; i++)
	{
		bool flag = false;
		for(int j = 12; j < i; j++)
		{
			vector<int>::iterator it1 = find(abn.begin(), abn.end(), i-j);
			vector<int>::iterator it2 = find(abn.begin(), abn.end(), j);
			if(it1 != abn.end() && it2 != abn.end())
			{
				//cout << i-j << " + " << j << " = " << i << endl;
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			//cout << i << endl;
			sum += i;
		}
	}
	cout << "Total sum : "  << sum << endl;

	return 0;
}
