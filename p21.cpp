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

int am(int n)
{
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n%i == 0)
			sum += i;
	}

	return sum;
}

int main()
{
	map<int, int> amp;
	for(int i = 2; i < 10000; i++)
		amp[i] = am(i);

	long sum = 0;
	int an;

	for(int i = 2; i < 10000; i++)
	{
		an = amp[i];
		if(i == amp[an] && i != an)
		{
			sum += i;
			cout << i << " and " << an << endl;
		}
	}
	cout << sum << endl;

    return 0;
}

