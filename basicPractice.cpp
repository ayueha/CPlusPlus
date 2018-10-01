#include <iostream>
#include <string>

using namespace std;


int basicContents(void) {

	int A;
	A = 4;
	// cout << "Hello" << endl;
	cout << A << endl;
	cout << &A << endl;
	int B;
	B = 10;
	cout << B << endl;
	cout << &B << endl;

	int c = 20, d = 0, f = 40; //4 bytes memory
	cout << c << " : address of c :" << &c << endl;
	cout << d << " : address of d :" << &d << endl;
	cout << f << " : address of f :" << &f << endl;

	short t1 = 5; // 2bytes
	cout << t1 << " : address of t1 :" << &t1 << endl;
	
	//float t2 = 5.12; //4Bytes
	//double t3 = 5.12; //8Bytes

	char st; //string charactor
	st = 'A';
	cout << st << endl;

	string stringLong;
	string stringLongLatter;
	stringLong = "ABCDEFGH";
	stringLongLatter = "IJKLMN";
	cout << stringLong + " : " + stringLongLatter << endl;

	//unsigned int plus only
	unsigned short t7 = 470l;
	cout << t7 << endl;

	/*
	string inputedLetters;
	cout << "Enter some words" << endl;
	cin >> inputedLetters;
	cout << inputedLetters << endl;
	*/

	int former, latter;
	former = 10;
	latter = 3;

	cout << latter % former << endl;

	

	// bitwise
	/*
	AND - &
	OR  - |
	NOT - ~
	XOR- ^
	bitwise left shift <<
	bitwise right shift
	*/

	cout << (10 & 2) << endl;

	/*
	1 0 1 0
	0 0 1 0 AND operator
	0 0 1 0
	*/

	cout << (11 | 2) << endl;
	/*
	1 0 1 1
	0 0 1 0 OR operator
	1 0 1 1
	*/

	cout << (10 ^ 3) << endl;
	/*
	1 0 1 0
	0 0 1 1 XOR operator
	1 0 0 1
	*/

	cout << (~10) << endl;
	/*
	00000000000 1010
	11111111111 0101 (minus)
	*/

	cout << (10 << 1) << endl; // 20* 2^0
	/*
	1 0 1 0
  1 0 1 0 0  -> Multiplay
	*/
	cout << (10 << 2) << endl; //20 * 2^1

	cout << (10 << 3) << endl; //20 * 2 *2

	//int arrint;


	/*
	int intA , intB;
	bool valid = false;
	cout << "Enter a number " << endl;
	cin >> intA;
	while (valid){

		if (cin.good()){
			break;
		}else{
			cin.clear();
			cout << "Enter a number " << endl;
			cin >> intA;
		}
	}

	cout << "Enter a number which you want to compare" << endl;
	cin >> intB;
	while (true){
		cin >> intB;
		if (cin.good()){
			break;
		}else{
			cout << "Enter a number " << endl;
		}
	}

	if (intA > intB) {
		cout << intA << " is larger" << endl;
	}else{
		cout << intB << " is larger" << endl;
	}

	*/


	//Array practice
	int arr[3]; //0,1,2

	arr[0] = 10;
	arr[1] = 40;
	arr[2] = 60;

	cout << arr[0] << "Address is " << &arr[0] << endl; //4byte each
	cout << arr[1] << "Address is " << &arr[1] << endl; //4byte each
	cout << arr[2] << "Address is " << &arr[2] << endl; //4byte each


	int subarr[3][4] = { 0 }; //All 0 set

	cout << &subarr[0] << endl;
	cout << &subarr[0][0] << endl;
	cout << &subarr[0][1] << endl;
	cout << &subarr[0][2] << endl;
	cout << &subarr[0][3] << endl;
	cout << "-----" << endl;
	cout << &subarr[1] << endl;
	cout << &subarr[1][0] << endl;

	for (int i = 0; i < 5; i++) {
		cout << &i << "value of i is " << i << endl;
	}

	return 0;
}
