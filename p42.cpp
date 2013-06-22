/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-21 20:49
* Description   :   Problem 42 Coded triangle numbers
**********************************************************************/
#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

bool check(int n)
{
	for(int i = 1; i < 10000; i++)
	{
		int t = i*(i+1)/2;
		if(n == t)
			return true;
		else if(n < t)
			return false;
	}
	return false;
}

int main()
{
	int tot = 0;
	string name;
	cin >> name;

	istringstream ss(name);
	string token;
	vector<string> names;

	while(getline(ss, token, ','))
	{
		names.push_back(token);
		//cout << token << endl;
	}

	sort(names.begin(), names.end());
	for(int i = 0; i < names.size(); i++)
	{
		int sum = 0;
		//cout << names[i] << endl;
		for(int j = 1; j < names[i].size()-1; j++)
		{
			//cout << names[i][j] << endl;	
			sum += names[i][j] - 'A' + 1;
		}
		//cout << sum << endl;
		if(check(sum))
		{
			tot++;
		}

	}
			
	cout << "Total: " << tot << endl;

    return 0;
}

