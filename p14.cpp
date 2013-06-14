#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	long n = 1000000;
	int max = 0;
	long maxn = 0;

	while(n>1)
	{
		long m = n;
		int cnt = 1;
		while(m >  1)
		{
			if(m%2==0) // even
				m = m/2;
			else
				m = 3*m+1;
			cnt++;
		
		}
		if(cnt > max)
		{
			max = cnt;
			maxn = n;
		}
		n--;
	}
	cout << maxn << endl;
	cout << max << endl;

    return 0;
}
