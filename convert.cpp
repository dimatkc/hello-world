#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int ca, char* pszArgs[])
{
int celsius;
cout << "Input Temp. in Celsius:";
cin >> celsius;
int factor;
factor = 212 - 32;
int fahrenheit;
fahrenheit = factor * celsius/100 + 32;
cout << "Temp. by fahrenheit:";
cout << fahrenheit;
cout << endl;
return 0;
}



