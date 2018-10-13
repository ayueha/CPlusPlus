#include <iostream>
#include <Windows.h>
using namespace std;


int * multiby(int *, int);
int mltiNonPoint(int * , int);
int main(){

	int a = 10;
	int *b = multiby(&a, 3);

	int c = 2;
	int d = mltiNonPoint(&c, 3);

	cout << a << endl;
	cout << *b << endl;
	cout << "------" << endl;
	cout << c << endl;
	cout << d << endl;

	Sleep(7 * 1000);
	return 0;
}

int * multiby(int * var, int amount) {
	*var = *var * amount;
	return var;
}

int mltiNonPoint(int * var, int amount) {
	int result;
	result = *var * amount;
	return result;
}