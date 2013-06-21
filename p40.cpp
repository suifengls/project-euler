/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-21 13:41
* Description   :   problem 40 Champernwne's constant
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
	long product = 1;

	int pos = 10;
	int cpos = 1;
	int i = 2;
	while(pos < 10000000)
	{
		stringstream ss;
		ss << i;
		string n = ss.str();

		// find a digit in n
		if(cpos + n.size() >= pos)
		{
			int dd = n[pos - cpos - 1] - '0';
			cout << "Find " << dd << " in pos " << pos << endl;
			product *= dd;
			pos *= 10;
		}
		cpos += n.size();
		i++;
	}

	cout << "Product: " << product << endl;

	return 0;
}
