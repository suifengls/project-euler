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
    int num[20][20];
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 20; j++)
            num[i][j] = 0;

    ifstream fp("input");
    string line, wd;
    int r = 0;
    while(getline(fp, line))
    {
        istringstream words(line);
        for(int i = 0; i < 20; i++)
        {
            words >> wd;
            num[r][i] = atoi(wd.c_str());
            //cout << wd << endl;
        }
        r++;
    }
    fp.close();


    long p0 = 0; 
    long p1 = 0;//, p2 = 0, p3 = 0;

    int ii = 0;
    int jj = 0;
    bool flag = true;
    while(flag)
    {
        flag = false;
        if(ii < 20 && jj+3 < 20)
        {
            p1 = num[ii][jj] * num[ii][jj+1] * num[ii][jj+2] * num[ii][jj+3];
            p0 = p1 > p0? p1 : p0;
            flag = true;
        }

        if(jj < 20 && ii+3 < 20)
        {
            p1 = num[ii][jj] * num[ii+1][jj] * num[ii+2][jj] * num[ii+3][jj];
            p0 = p1 > p0? p1 : p0;
            flag = true;
        }

        if(jj+3 < 20 && ii+3 < 20)
        {
            p1 = num[ii][jj] * num[ii+1][jj+1] * num[ii+2][jj+2] * num[ii+3][jj+3];
            p0 = p1 > p0? p1 : p0;
            flag = true;
        }

        if(jj+3 < 20 && ii-3 >=0)
        {
            p1 = num[ii][jj] * num[ii-1][jj+1] * num[ii-2][jj+2] * num[ii-3][jj+3];
            p0 = p1 > p0? p1 : p0;
            flag = true;
        }



        jj++;
        jj = jj % 20;
        if(jj==0)
            ii++;

    }
    cout << p0 << endl;

    return 0;
}
