
#include <iostream>
#include <Windows.h>

using namespace std;

 int main()
{   //pointer の例
	////Sleep(4 * 1000);
	////Exercise 1.
	//// Declare a variable "a" and initialize it with any value.Then create a pointer variable "p"
	//// containing the address of the variable "a".Print out in the console the value and address
	//// of the variable "a" using both variable "a" and pointer "p".

	// int a = 100;
	// int *p;  //ポインタ変数Pの宣言
	// p = &a;  //Pへポインタの位置を挿入

	// cout << &a << endl;  //ポインター位置表示（変数a）
	// cout << p << endl;  // ポインター位置表示（変数p）

	// //Exercise 2.
	// // Edit the code from the first exercise.Create another pointer "pp" containing the address
	// // of the pointer variable "p".Print out in the console the value and address of the variable
	// // "a" using variable "a" and pointers "p" and "pp".Furthermore, print out the value and address
	// // of the pointer "P" using pointers "p" and "pp".

	// int *pp;
	// pp = p;

	// cout << pp << endl; //ポインター位置表示（変数pp）
	// cout << *pp << endl; //ポインター位置表示（変数pp）


	// cout << "----------------------------------" << endl;

	////Declare 5 element array of integers and a pointer to the first element of the array.
	////Use the pointer and its incrementation instead of array notation, fill the array with
	////any integer numbers.Print all of the elements out in the console.
	// int const num = 4;
	// int arr[num];
	// int *po;
	// 
	// arr[0] = 10;
	// arr[1] = 46;
	// arr[2] = 34;
	// arr[3] = 96;
	// arr[4] = 100;

	// po = &arr[0];
	// cout << po << endl;

	// cout << "array increment version " << endl;
	// for (int i = 0; i < num; i++) {
	//	 cout << &arr[i] << endl;
	// }
	// cout << "assign arr addision increment version " << endl;
	// for (int i = 0; i <= num; i++) {
	//	 cout << arr+i << endl;
	//	 cout << *arr + i << endl;
	// }
	// cout << "assign po addision increment version " << endl;
	// for (int i = 0; i <= num; i++) {
	//	 cout << *po++ << endl;
	// }

	// //---------------Dynamic Allocation ---------------
	// 
	// int *ptr = new int; //あらかじめメモリ領域を一定数確保
	// *ptr = 50;
	// cout << *ptr << endl;
	// delete ptr;
	// ptr = NULL;


	// int amount;
	// 
	// cout << "how many numbers would you like to store in an array" << endl;
	// cin >> amount;
	// int *mp = new int[amount];
	// for (int k = 0; k < amount; k++) {
	//	 cout << "Enter the  " << k + 1 << "Number" << endl;
	//	 cin >> mp[k];
	//	 cout << mp[k] << endl;
 //	}
	// 
	// delete mp;
	// mp = NULL;

	 //Exercise 3.  --Memory Allocation
		// Declare two integer variables, the first statically allocated and the second dynamically
		// allocated.To the statically allocated variable declare a pointer containing its address.
		// To both variables assign any integer values(in case of statically allocated variable use
		//	 its pointer).Print out in the console both values and addresses of the variables. 
	 
	 int *p = new int;
	 cout << p << endl;
	 delete p;

	 p = new int;

	 cout << p << endl;
	 delete p;

	 //オリジナルコード
	 //int tmpInt = 0;
	 //int *staticInt;
	 //int *dynamicInt = new int;

	 //staticInt = &tmpInt;
	 //*dynamicInt = 20;

	 //cout << &staticInt << endl;
	 //cout << &dynamicInt << endl;
	 //
	 //dynamicInt = NULL;
	 //delete dynamicInt;
     //オリジナルコード



		// Try to run the program few times and look at the addresses.

		// eg.

		// Output:
	 //The value of the statically allocated variable : 10, and the address : 0x69fef4
		// The value of the dynamically allocated variable : 15, and the address : 0x7b56b0

		// Output :
		// The value of the statically allocated variable : 10, and the address : 0x69fef4
		// The value of the dynamically allocated variable : 15, and the address : 0x715760

		// Output :
		// The value of the statically allocated variable : 10, and the address : 0x69fef4
		// The value of the dynamically allocated variable : 15, and the address : 0x25730

		// Exercise 4.

		// Write a program that asks the user to input the size of the dynamic array of integers.
		// Using the pointer and its incrementation instead of array notation, fill the array with
		// any integer numbers.Print all of the elements out in the console.All of the conditions
		// of the loops should work with the size of the array inputted by the user.

		// eg.

		// User inputted :
	 //Input the size of the dynamic array you want to create : 4
		// Input 1 number : 12
		// Input 2 number : 14
		// Input 3 number : 15
		// Input 4 number : 16

		// Output :
		// Number 1 : 12
		// Number 2 : 14
		// Number 3 : 15
		// Number 4 : 16


	 Sleep(7 * 1000);
	 return 0;
}
