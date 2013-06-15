#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

const int len = 1000;

int main()
{
	double n = pow(2.0, len);
	long sum = 0;
	
	stringstream s;
	s << fixed << n;
	string nn;
	s >> nn;
	
	int i = 0;
	while(i < nn.size())
	{
		if(nn[i] != '.')
			sum += nn[i] - 48;
	    //cout << nn[i] << endl;
		i++;
	}
	cout << "sum = " << sum << endl;


    return 0;
}
