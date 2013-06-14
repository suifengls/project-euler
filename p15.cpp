#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

const int len = 21;

int main()
{
	long lat[len][len];
	for(int i = 0; i < len-1; i++)
		for(int j = 0; j < len-1; j++)
			lat[i][j] = 2;
	for(int i = 0; i < len; i++)
	{
		lat[len-1][i] = 1;
		lat[i][len-1] = 1;
	}


	int num = 0;
	for(int i = len-1; i >= 0; i--)
	{
		for(int j = len-1; j >= 0; j--)
		{
			if(i+1 < len && j+1 < len)
				lat[i][j] = lat[i+1][j] + lat[i][j+1];
			else if(i+1 < len && j+1 >= len)
				lat[i][j] = lat[i+1][j];
			else if(i+1 >= len && j+1 < len)
				lat[i][j] = lat[i][j+1];
		}
	}

	cout << lat[0][0] << endl;



    return 0;
}
