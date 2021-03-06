#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/* FACTORIAL WITH TAIL RECURSION
	-memory efficient
*/
int facHelper(int n, int acc) {
	if (n == 0) return acc;
	return facHelper(n - 1, n*acc);
}

int fac(int n) {
	return facHelper(n, 1);
}


int main()
{
	cout << fac(5) << endl;
	string n;
	cin >> n;
	return 0;
}

