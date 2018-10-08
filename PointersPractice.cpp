//
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
// int main()
//{   //pointer の例
//	//Sleep(4 * 1000);
//	//Exercise 1.
//	// Declare a variable "a" and initialize it with any value.Then create a pointer variable "p"
//	// containing the address of the variable "a".Print out in the console the value and address
//	// of the variable "a" using both variable "a" and pointer "p".
//
//	 int a = 100;
//	 int *p;  //ポインタ変数Pの宣言
//	 p = &a;  //Pへポインタの位置を挿入
//
//	 cout << &a << endl;  //ポインター位置表示（変数a）
//	 cout << p << endl;  // ポインター位置表示（変数p）
//
//	 //Exercise 2.
//	 // Edit the code from the first exercise.Create another pointer "pp" containing the address
//	 // of the pointer variable "p".Print out in the console the value and address of the variable
//	 // "a" using variable "a" and pointers "p" and "pp".Furthermore, print out the value and address
//	 // of the pointer "P" using pointers "p" and "pp".
//
//	 int *pp;
//	 pp = p;
//
//	 cout << pp << endl; //ポインター位置表示（変数pp）
//	 cout << *pp << endl; //ポインター位置表示（変数pp）
//
//
//	 cout << "----------------------------------" << endl;
//
//	//Declare 5 element array of integers and a pointer to the first element of the array.
//	//Use the pointer and its incrementation instead of array notation, fill the array with
//	//any integer numbers.Print all of the elements out in the console.
//	 int const num = 4;
//	 int arr[num];
//	 int *po;
//	 
//	 arr[0] = 10;
//	 arr[1] = 46;
//	 arr[2] = 34;
//	 arr[3] = 96;
//	 arr[4] = 100;
//
//	 po = &arr[0];
//	 cout << po << endl;
//
//	 cout << "array increment version " << endl;
//	 for (int i = 0; i < num; i++) {
//		 cout << &arr[i] << endl;
//	 }
//	 cout << "assign arr addision increment version " << endl;
//	 for (int i = 0; i <= num; i++) {
//		 cout << arr+i << endl;
//		 cout << *arr + i << endl;
//	 }
//	 cout << "assign po addision increment version " << endl;
//	 for (int i = 0; i <= num; i++) {
//		 cout << *po++ << endl;
//	 }
//
//	 //---------------Dynamic Allocation ---------------
//	 
//	 int *ptr = new int; //あらかじめメモリ領域を一定数確保
//	 *ptr = 50;
//	 cout << *ptr << endl;
//	 delete ptr;
//	 ptr = NULL;
//
//
//	 int amount;
//	 
//	 cout << "how many numbers would you like to store in an array" << endl;
//	 cin >> amount;
//	 int *mp = new int[amount];
//	 for (int k = 0; k < amount; k++) {
//		 cout << "Enter the  " << k + 1 << "Number" << endl;
//		 cin >> mp[k];
//		 cout << mp[k] << endl;
// 	}
//	 
//	 delete []mp;
//	 mp = NULL;
//
//	 //Exercise 3.  --Memory Allocation
//		// Declare two integer variables, the first statically allocated and the second dynamically
//		// allocated.To the statically allocated variable declare a pointer containing its address.
//		// To both variables assign any integer values(in case of statically allocated variable use
//		//	 its pointer).Print out in the console both values and addresses of the variables. 
//	{   //static memory
//	 int *staticInt =new int;
//	 *staticInt = 20;
//	 cout << &staticInt << endl;
//	}
//
//	 int *dynamicInt = new int;
//	 *dynamicInt = 20;
//	 cout << &dynamicInt << endl;
//	 
//	 dynamicInt = NULL;
//	 delete dynamicInt;
//	// Exercise 4.
//	// Write a program that asks the user to input the size of the dynamic array of integers.
//	// Using the pointer and its incrementation instead of array notation, fill the array with
//	// any integer numbers.Print all of the elements out in the console.All of the conditions
//	// of the loops should work with the size of the array inputted by the user.
//	 int size;
//	 cout << "Please enter some numbers " << endl;
//	 cin >> size;
//
//	 int * ex4box = new (nothrow) int[size];  //Exception処理の無視
//												//exception	は別の授業でカバーするので一時的な処置
//	 if (ex4box != NULL) {
//		 for (int i = 0; i < size; i++) {
//			 *ex4box = rand();
//			 ex4box++;
//		 }
//
//		 for (int i = 0; i < size; i++) {
//			 cout << *ex4box++ << endl;
//
//		 }
//	 }
//	 else {
//		 cout << "user do not have enough memory" << endl;
//	 }
//
//
//	 Sleep(7 * 1000);
//	 return 0;
//}
