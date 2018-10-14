#include <iostream>
#include <time.h>
#include <random>
using namespace std;




//
//Exercise 6.
//
//Using the functions created in exercises from 1 to 5 write a program that asks the user for
//the size of the array.Declare a dynamically allocated variable and assign to it the "createArray"
//function with the inputted size as the argument.Using "fillArrayWithValues" fill the created
//array.And show the user the numbers he / she inputted with "printArrayValues".Then ask the user
//if the array should be sorted with ascending or descending(default: ascending) order and which
//sorting algorithm should be used(default bubble).
int * createArray(int);
void swapTwoValues(int, int);
void fillArrayWithValues(int , int*);
void printArrayValues(int*);


int main (){
	//Exercise 1.
	//Create a function "createArray" that initializes a dynamically allocated array of integers
	//with the size of the array sent as the argument of the function.The function should return
	//the array it creates so it can be assigned to any dynamically allocated variable in other
	//functions.
	srand(time(0));
	const int setNumber = 7;
	int *arrinfo = new int[1] ;
	arrinfo = createArray(setNumber);
	for (int i = 0; i < setNumber; i++) {
		cout << rand() << endl;
	}
	delete arrinfo;
	//Exercise 2.
	//Create a function "swapTwoValues" that swaps the value of one variable with the value of
	//the second variable.Both variables should be sent as the arguments.Instead of using
	//references use pointers.
	int numberA = rand(), numberB = rand();
	cout << "original numberA :" << numberA << "original numberB :" << numberB << endl;
	swapTwoValues(numberA, numberB);
	
	//Exercise 3.
	//Create functions "fillArrayWithValues" and "printArrayValues".Both of the functions should
	//take the array and its size as the arguments.First function should fill the array with values,
	//the second should print all values of the array.
	const int arrNumber = 3;
	int *arr = new int[arrNumber];

	fillArrayWithValues(arrNumber, arr);
	printArrayValues(arr);

	//Exercise 4.
	//
	//Create a function "bubbleSort".The function should take three arguments, array and its
	//size and order of sorting.Depending on the third parameter the function should either sort
	//the array with ascending or descending order, the default argument should be set as ascending.
	//
	//
	//Concerning the workflow of the bubble sort algorithm please visit the websites below.
	//However, try to develop the code on your own.Use the "swapTwoValues" function to simplify the
	//algorithm and "printArrayValues" function to print the values of the sorted array after the
	//procedure is done.
	//
	//https://en.wikipedia.org/wiki/Bubble_sort
	//http://www.go4expert.com/articles/bubble-sort-algorithm-absolute-beginners-t27883/




	//Exercise 5.
	//
	//Create a function "selectionSort".The function should take three arguments, array and its
	//size and order of sorting.Depending on the third parameter the function should either sort
	//the array with ascending or descending) order, the default argument should be set as ascending.
	//Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function
	//to print the values of the sorted array after the procedure is done.
	//
	//Concerning the workflow of the selection sort algorithm please visit the websites below.
	//However, try to develop the code on your own.Use the "swapTwoValues" function to simplify the
	//algorithm and "printArrayValues" function to print the values of the sorted array after the
	//procedure is done.
	//
	//https://en.wikipedia.org/wiki/Selection_sort
	//https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm

	delete arr;
	return 0;
}
 
int * createArray(int arrlength) {
	int *arr = new int[arrlength];
	return arr;
}


void swapTwoValues(int number1, int number2) {
	int tmpInt;
	tmpInt = number1;
	number1 = number2;
	number2 = tmpInt;

	cout << "result :" << number1 << "result :" << number2 << endl;

}

void fillArrayWithValues(int arrNumber, int *arr) {

	for (int i = 0; i < arrNumber; i++) {
		*arr = rand();
		arr++;
	}
}

void printArrayValues(int* arr) {
	for (int i = 0; i < sizeof(arr); i++) {
		cout << *arr++ << endl;
	}
}
