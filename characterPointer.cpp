#include <iostream>
#include <Windows.h>

using namespace std;

int main() {


	////--------------授業メモ-------開始------------------
	string test = "Post";

	//Forを利用した通常取り出し
	for (int i = 0; i < test.length(); i++) {
		if (i < test.length() - 1) {
			cout << test[i];
		}
		else {
			cout << test[i] << endl;;
		}
	}

	char ch = test[0];
	cout <<"First character of string is " << ch << endl;

	//
	char characters[5] = "1234";
	cout << characters << endl;

	//characters = "anfoifnuaeirgoyuefog"  --> errors
	test = "anfoifnuaeirgoyuefog";  //--> no error 

	char letters[] = "34896hajkfskjdf";
	cout << letters << endl; //letters 全体
	//cout <<"1st character of letters is ..." <<letters[0] ;
	cout << "1st character of letters is ..." << *(letters) << " Pointer is " << &letters <<endl;

	cout << "2nd character of letters is ..." << *(letters+1) ;
	cout << " 2nd character of letters is ..." << *(letters+1) << "  Pointer is " << &letters+1 << endl;
	
	//ポインター割り当て
	char *p = letters;
	cout << &p << endl;
	cout << *p << endl;

	const char * text = test.c_str();
	cout << text << endl;

	char arrayChar[] = "I am sam.";
	text = arrayChar;
	cout << text << endl;

	const char * a = "This is a test 12346";   
	cout << a << endl;
	////--------------授業メモ-------終了------------------

	//練習課題
	//Exercise 1.

	//	Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
	//	All of the characters from the alphabet should be stored in a 27 element array of chars and
	//	printing out of each of those elements should be done with the use of the for loop.


	

	//	eg.
	//	Output:
	//abcdefghijklmnopqrstuvwxyz

	//	Exercise 2.

	//	Write a program similar to the one in the exercise 1. However, this time instead of using a 27
	//	element array of chars use the string type.Printing out should be done the same way as in the
	//	exercise 1.

	//	eg.
	//	Output:
	//abcdefghijklmnopqrstuvwxyz

	//	Exercise 3.

	//	Write a program that asks the user to input a number of characters he would like to input.Then
	//	create a dynamic array of characters where the number inputted by the user stands for the size
	//	of the array.Next the user should input as many characters as the size of the array.The characaters
	//	should be stored in the dynamic array one by one.Print out in the console all of the characters
	//	in the array, thus creating a string of characters.Remember to free the memory.

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
