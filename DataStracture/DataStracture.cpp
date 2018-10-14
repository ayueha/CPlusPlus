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



int main() {

	//PersonalData person;
	//person.age = 20;
	//person.name = "Alibaba";
	//person.suname = "Sarudia";
	//person.telephone =  "00-90890789";
	//cout << person.age << endl;

	PersonInfo myinfo;
	PersonInfo myinfoNextTest;
	myinfo.setAge(50);
	cout << myinfo.getAge() << endl;
	Sleep(5 * 1000);
	return 0;
}