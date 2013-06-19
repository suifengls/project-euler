/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :   2013-06-18 17:23
* Description   :   problem 28 - Number spiral diagonals 
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

const int len = 1001;

int main()
{
	int n[len][len];

	int i = len/2;
	int j = len/2;
	int m = 1;
	int s = 1;
	int step = 0;
	char d = 'r'; // u d l r
	while(1)
	{
		n[i][j] = m;
		m++;

		if(i==0 && j == len-1)
			break;

		switch(d)
		{
			case 'u':
				i--;
				step++;
				if(step == s)
				{
					step = 0;
					s++;
					d = 'r';
				}
				break;
			case 'd':
				i++;
				step++;
				if(step == s)
				{
					step = 0;
					s++;
					d = 'l';
				}
				break;
			case 'l':
				j--;
				step++;
				if(step == s)
				{
					step = 0;
					d = 'u';
				}
				break;
			case 'r':
				j++;
				step++;
				if(step == s)
				{
					step = 0;
					d = 'd';
				}
				break;
		}
	}

	/*
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len; j++)
			cout << n[i][j] << '\t';
		cout << endl;
	}
	*/

	long sum = 0;
	for(int i = 0; i < len; i++)
		sum += n[i][i];
	for(int i = 0; i < len; i++)
		sum += n[i][len-1-i];

	cout << "sum = " << sum-1 << endl;

	return 0;
}
