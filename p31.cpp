/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-19 19:07
* Description   :   problem 31 - Coin sums
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

const int len = 200;

int main()
{
	int sum = 0;
	// L1
	for(int i = 0; i <= 2; i++)
		// 50p
		for(int j = 0; j <= 4; j++)
			// 20p
			for(int k = 0; k <= 10; k++)
				// 10p
				for(int w = 0; w <= 20; w++)
					// 5p
					for(int u = 0; u <= 40; u++)
						// 2p
						for(int v = 0; v <= 100; v++)
							// 1p
							for(int t = 0; t <= 200; t++)
							{
								if(100*i + 50*j + 20*k + w*10 + u*5 + v*2 + t == len)
									sum++;
							}
	// L2
	cout << "ways to 2 pound: " << sum+1 << endl;

	return 0;
}
