#include <iostream>
#include <Windows.h>


using namespace std;

int main() {


	//--------------���ƃ���-------�J�n------------------
	string test = "Post";

	//For�𗘗p�����ʏ���o��
	for (int i = 0; i < test.length(); i++) {
		if (i < test.length() - 1) {
			cout << test[i];   //string ������̏ꍇ
		}
		else {
			cout << test[i] << endl;;
		}
	}

	char ch = test[0];
	cout << "First character of string is " << ch << endl;

	//
	char characters[5] = "1234";
	cout << characters << endl;

	//characters = "anfoifnuaeirgoyuefog"  --> errors
	test = "anfoifnuaeirgoyuefog";  //--> no error 

	char letters[] = "34896hajkfskjdf";
	cout << letters << endl; //letters �S��
	//cout <<"1st character of letters is ..." <<letters[0] ;
	cout << "1st character of letters is ..." << *(letters) << " Pointer is " << &letters << endl;

	cout << "2nd character of letters is ..." << *(letters + 1);
	cout << " 2nd character of letters is ..." << *(letters + 1) << "  Pointer is " << &letters + 1 << endl;

	//�|�C���^�[���蓖��
	char *p = letters;
	cout << &p << endl;
	cout << *p << endl;

	const char * text = test.c_str();
	cout << text << endl;

	char arrayChar[] = "I am sam.";
	text = arrayChar;
	cout << text << endl; //������S��

	const char * a = "This is a test 12346";
	cout << a << endl;
	//--------------���ƃ���-------�I��------------------

	//���K�ۑ�
	//Exercise 1.

	//	Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
	//	All of the characters from the alphabet should be stored in a 27 element array of chars and
	//	printing out of each of those elements should be done with the use of the for loop.
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	//string *ptr = &alphabet;
	//For�ŉ�]������ꍇ
	for (int i = 0; i < 27; i++) {
		cout << alphabet[i] ;
	}
	cout << endl;
	//-----------------�|�C���^�[���p��
	for (int i = 0; i < 27; i++) {
		cout << *alphabet;
	}

	//	Exercise 2.
	//	Write a program similar to the one in the exercise 1. However, this time instead of using a 27
	//	element array of chars use the string type.Printing out should be done the same way as in the
	//	exercise 1.
	string alphabetString = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < alphabetString.length(); i++) {
		cout << alphabetString[i];
	}
	cout << endl;


	//	Exercise 3.
	//Then
	//	create a dynamic array of characters where the number inputted by the user stands for the size
	//	of the array.Next the user should input as many characters as the size of the array.The characaters
	//	should be stored in the dynamic array one by one.Print out in the console all of the characters
	//	in the array, thus creating a string of characters.Remember to free the memory.
	
	//	Write a program that asks the user to input a number of characters he would like to input.
	unsigned int i;
	
	cout << "Enter a numner " << endl;
	cin >> i;
	
	char *letterString = new char[i];
	cout << "Input string within " << i << endl;
	cin >> letterString;

	for (int j = 0; j < i; j++) {
		cout << letterString[j] ;
	}

	cout << endl;

	string *A;
	cout << "Enter letters" << endl;
	//cin >> A;



	//	eg.

	//	User Inputted :
	//3
	//	a
	//	b
	//	c

	//	Output :
	//1 character : a
	//	2 character : b
	//	3 character : c
	//	The inputted string of characters was : abc




	Sleep(7 * 1000);
	return 0;
}
