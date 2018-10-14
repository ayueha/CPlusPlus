#include <iostream>
#include "PersonInfo.h"
#include <Windows.h>
using namespace std;


//struct PersonalData
//{
//	string name;
//	string suname;
//	string telephone;
//	short age;
//};

void test() {
	PersonInfo *ptr = new PersonInfo[6];
	delete[]ptr;
}

int main() {

	//PersonalData person;
	//person.age = 20;
	//person.name = "Alibaba";
	//person.suname = "Sarudia";
	//person.telephone =  "00-90890789";
	//cout << person.age << endl;

	PersonInfo myinfo;
	myinfo.setAge(50);
	cout <<"Your age is ..." <<myinfo.getAge() << endl;
	//test();
	PersonInfo myinfoAge(20); //Overriding 
	cout << "Pless Enter to abort the program" << endl;
	getchar();
	return 0;
}