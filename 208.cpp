#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
const double PRECISION = 1E-6;
double N[4];
string expression[4];
bool search_24(int n)
{
	if(n == 1)
	{
		if(fabs(N[0]-24)<PRECISION) 
		{
		cout << expression[0];
		return true;
		}
		else
		return false;
	}
	for ( int i = 0; i <n; ++i)
	{
		for ( int j = i+1; j <n; ++j)
		{
		double a,b;
		string expa, expb;
		a = N[i];
		b = N[j];
		N[j] = N[n-1];
		expa = expression[i];
		expb = expression[j];
		expression[j] = expression[n-1];

		expression[i] = '(' + expa + '+' + expb +  ')';
		N[i] = a + b;
		if(search_24(n-1)) return true;
		
		expression[i] = '(' + expa + '-' + expb + ')';
		N[i] = a - b;
		if(search_24(n-1)) return true;
		
		expression[i] = '(' + expb + '-' + expa + ')';
		N[i] = b - a;
		if(search_24(n-1)) return true;

		expression[i] = '(' + expa + '*' + expb + ')';
		N[i] = a * b;
		if(search_24(n-1)) return true;

		if( b!=0)
		 	{
			expression[i] = '(' + expa + '/' +expb + ')';
			N[i] = a / b;
			if(search_24(n-1)) return true;
			}
		
		if( a!=0)
			{
			expression[i] = '(' + expb + '/' +expa + ')';	
			N[i] = b/a;
			if(search_24(n-1)) return true;
			}		
		
		N[i] = a;
		N[j] = b;
		expression[i] = expa;
		expression[j] = expb;

		}
	}
	return false;
}

int main()
{
	for(int i = 0; i != 4; ++i)
	{
	int x;
	cin >> x;
	N[i] = x;
	stringstream ss;	
	ss << x;	
	string str;
	ss >>str;
	expression[i] =str;
	}
	bool result = search_24(4);
	if(result == false)
		cout <<-1;
}


