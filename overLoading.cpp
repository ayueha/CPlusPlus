#include <iostream>
#include <Windows.h>
using namespace std;

int variableType(int n);
double variableType(double n);
void variableType(string &a);

//Exercise 1.
//
//Initialize three variables with different types(int, double, string).Write a function
//"variableType" and overload it two times.Each three overloaded functions should take as
//an argument different type of variable eg.variableType(int), variableType(double),
//variableType(string).Send the variables created in the beginning to the variableType
//function with corresponding type of argument and print out in the screen information
//about what type of variable was used.
//
//eg.
//Output:
//2 - this variable was an integer
//0.123 - this variable was a double
//"What a beautiful day" - this variable was a string
//
//
//Exercise 2.
//
//Write a program that asks the user how many values should get added together(from 2 to 5).
//Then the user should input those numbers.Write a function "addition" that takes two double
//parameters and adds them together, printing out in the console the calculation.Furthermore
//overload the "addition" function 3 times so it takes three parameters, four parameters and
//five parameters adding those parameters in each case.Prepare a switch that uses the version
//of addition function with as many parameters as the user inputted at the beginning.
//
//eg.
//
//User inputted :
//3
//
//Output :
//	Input 1 Number.
//	Input 2 Number.
//	Input 3 Number.
//
//	User inputted :
//2
//3
//4
//
//Output :
//	2 + 3 + 4 = 9
//
//	PS Keep in mind t

/*
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

*/