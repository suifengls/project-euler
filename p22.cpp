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

int main()
{
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

	long score = 0;
	sort(names.begin(), names.end());
	for(int i = 0; i < names.size(); i++)
	{
		long sum = 0;
		//cout << names[i] << endl;
		for(int j = 1; j < names[i].size()-1; j++)
		{
			//cout << names[i][j] << endl;	
			sum += names[i][j] - 'A' + 1;
		}
		//cout << sum << endl;

		score += (i+1)*sum;
		//cout << score << endl;
	}
			
	cout << "Total score: " << score << endl;

    return 0;
}

