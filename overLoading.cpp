#include <iostream>
#include <Windows.h>
using namespace std;

int variableType(int n);
double variableType(double n);
void variableType(string &a);

void main() {
	cout << variableType(1) << endl;
	cout << variableType(3.14) << endl;
	string str = "abdc";
	variableType(str);
	Sleep(3 * 1000);
}
int variableType(int n){
	return n;
}
double variableType(double n){
	return n;
	
}
void variableType(string &a) {
	for (int i = 0; i < a.length(); i++) {
		cout << a[i];
	}
	
 	
}
