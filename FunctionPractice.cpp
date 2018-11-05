
#include <iostream>  // input and output
#include <typeinfo>  //Dynamic cast
#include <string>    //sequences of charactors
#include <cstdlib>   // include exchange lib of string to integer
#include <Windows.h> // Sleep function
#include <cctype>    //classify and transform individual chars
#include <algorithm> //define collection of functiond ,specia;ized for  range of eleent

using namespace std;

void chooseOption();
void addition();
void substraction();
bool velification(string x);
string inputLoop();
void multipication();
void division();
void power();
void comparFloat();



int main() {
	//chooseOption();
	
	Sleep(4 * 1000);
	return 0;
}


void chooseOption() {
	string proc;
	bool valid = false;
	string flag="N";
	

	cout << "This is simple calsulator ; plase choose your option below" << endl;
	cout << "Enter  [+] --> Adission" << endl;
	cout << "Enter  [-] --> Substraction" << endl;
	cout << "Enter  [*] --> Multiplication" << endl;
	cout << "Enter  [/] --> Division" << endl;
	cout << "Enter  [^] --> Power" << endl;
	cout << "Enter  [C] --> Comparision of five float figures" << endl;
	cout << "Choose your option" << endl;
	cin >> proc;

	
	while (valid==false && flag!="Y") {

		if (proc == "+") {
			cout << "Adission has been choosed" << endl;
			addition();
		}
		else if (proc == "-") {
			cout << "Substraction has been choosed" << endl;
			substraction();
		}
		else if (proc == "*") {
			cout << "Multiplication has been choosed" << endl;
			multipication();
		}
		else if (proc == "/") {
			cout << "Division has been choosed" << endl;
			division();
		}
		else if (proc == "^") {
			cout << "Power has been choosed" << endl;
			power();
		}
		else if (proc == "C") {
			cout << "Comparison process has been choosed" << endl;
			comparFloat();
		}
		else {
			cout << "Please Enter + , - , / , * or ^" << endl;
		}

		
		cout << "Do you want to stop simulation? chose [Y]or[y] / or type any alphabet key to continue" << endl;
		cin >> flag;
		transform(flag.begin(), flag.end(), flag.begin(), toupper);

			if (flag == "Y" ) {
				valid = true;
				cout << "This program automatically closed ..." << endl;
			}
			else {
				cout << "Enter  [+] --> Adission" << endl;
				cout << "Enter  [-] --> Substraction" << endl;
				cout << "Enter  [*] --> Multiplication" << endl;
				cout << "Enter  [/] --> Division" << endl;
				cout << "Enter  [^] --> Power" << endl;
				cout << "Enter  [C] --> Comparision of five float figures" << endl;
				cout << "Choose your option" << endl;
				cin >> proc;
			}

	}

}




void addition() {
	cout << "addision process start..." << endl;
	string a, b;

	a = inputLoop();
	b = inputLoop();

	int numSum;
	numSum = std::stoi(a) + std::stoi(b);
	cout << "result of addition is ..." << numSum << endl;
}

string inputLoop() {
	bool result = false;
	string x;
	while (result == false) {
		cout << "Enter a number" << endl;
		cin >> x;
		result = velification(x);
	}
	return x;
}

bool velification(string x) {
	bool result = true;
	for (int i = 0; i < x.length(); i++) {
		if (!(x[i] > 47 && x[i] < 58)) {
			cout << x[i] << " Invalid" << endl;
			result = false;
		}
	}
	return result;
}

void substraction() {
	cout << "substraction process start..." << endl;
	string a, b;

	a = inputLoop();
	b = inputLoop();

	int numSum;
	numSum = std::stoi(a) - std::stoi(b);
	cout << "result of substraction  is ..." << numSum << endl;

}


void multipication() {
	cout << "multipication process start..." << endl;
	string a, b;

	a = inputLoop();
	b = inputLoop();

	int numSum;
	numSum = std::stoi(a) * std::stoi(b);
	cout << "result of multiplication  is ..." << numSum << endl;
}


void division() {
	cout << "division process start..." << endl;
	string a, b;
	int tmpa;

	a = inputLoop();
	b = inputLoop();

	tmpa = stoi(a);
	while (tmpa <1) {
		cout << "0 can not divide... plase enter again" << endl;
		a = inputLoop();
		tmpa = stoi(a);
	}

	double numSum;
	numSum = stod(a) / stod(b);
	cout << "result of division  is ..." << numSum << endl;

}


void power() {
	cout << "power process start..." << endl;
	string a, b;
	int numSum =1 ;
	a = inputLoop();
	b = inputLoop();

	for (int i = 1; i <= stoi(b); i++) {
		numSum = numSum * stoi(a);
	}
	//numSum = stoi(a)  stoi(b);
	cout << "result of power  is ..." << numSum << endl;

}

void comparFloat() {
	const int i = 5;
	int j=0;
	float arrFloar[i];
	
	while (j < i) {
		cout << "Enter your No"<< j+1 <<" floating number" << endl;
		cin >> arrFloar[j];
		j++;
	}

	sort(arrFloar, arrFloar + i);
	cout << "MAX number is... " << arrFloar[i-1] << endl;
	cout << "MIN number is... " << arrFloar[0] << endl;
}
