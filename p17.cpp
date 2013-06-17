#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

void two(string m);
map<char, int> let;
long sum = 0;

int main()
{
	let['0'] = 0;
	let['1'] = 3;  // one
	let['2'] = 3;  // two 
	let['3'] = 5;  // three
	let['4'] = 4;  // four
	let['5'] = 4;  // five
	let['6'] = 3;  // six
	let['7'] = 5;  // seven
	let['8'] = 5;  // eight
	let['9'] = 4;  // nine

	for(int n = 1; n <= 1000; n++)
	{
		stringstream ss;
		ss << n;
		string m = ss.str();
		//cout << m.size() << endl;

		if(m.size() == 1) // 1 - 9
			sum += let[m[0]];
		else if(m.size() == 4) // one thousand
		{
			sum += 11;
		}
		// 10 - 99
		else if(m.size() == 2)
		{
			two(m);
		}
		else if(m.size() == 3)
		{
			sum += let[m[0]]; // X--
			sum += 10; // hundred + and
			if(m[2] == '0' && m[1] == '0')
				sum -= 3; // no and
			two(m);
		}
		//cout << m << " -> " << sum << endl; 
	}
	cout << "sum = " << sum << endl;

	return 0;
}

void two(string m)
{
	//sum += let[m[m.size()-1]];
	if(m[m.size()-2] == '1') // 10 - 19
	{
		switch (m[m.size()-1])
		{
			case '0': // ten
				sum += 3;
				break; 
			case '1': // eleven
				sum += 6;
				break;
			case '2': // twelve
				sum += 6;
				break;
			case '3': // thirteen
				sum += 8;
				break;
			case '4': // fourteen
				sum += 8;
				break;
			case '5': // fifteen
				sum += 7;
				break;
			case '6': // sixteen
				sum += 7; 
				break; 
			case '7':  // seventeen
				sum += 9;
				break;
			case '8':  // eighteen
				sum += 8;
				break;
			case '9':  // nineteen
				sum += 8;
				break;
		}
	}
	else  // [2-9]X
	{
		//if(m[m.size()-1] != '0')
		sum += let[m[m.size()-1]];
		switch (m[m.size()-2])
		{
			case '2': // twenty 
				sum += 6;
				break;
			case '3': // thirty
				sum += 6;
				break;
			case '4': // forty
				sum += 5;
				break;
			case '5': // fifty
				sum += 5;
				break;
			case '6': // sixty
				sum += 5;
				break;
			case '7': // seventy
				sum += 7;
				break;
			case '8': // eighty
				sum +=6;
				break;
			case '9': // ninety
				sum += 6;
				break;
		}
	}
}
