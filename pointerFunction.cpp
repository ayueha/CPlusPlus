#include <iostream>
#include <Windows.h>
#include "Header.h"  //外部ファイルの情報読み込み
using namespace std;

#define PI 3.14;

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

	cout << PI ;

	cout << endl;
	cout << a << endl;
	int testNumeric;
	testNumeric = 90; 

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