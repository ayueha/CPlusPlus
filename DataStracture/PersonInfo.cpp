#include "PersonInfo.h"
#include<iostream>
using namespace std;





PersonInfo::~PersonInfo()
{
	static int i = 0;
	i++;
	cout << "destractor part has been invoked" << endl;
	//�������̊J���Ȃǂ����s���邱�ƂŃ������J���Y���h��

}

void PersonInfo::setAge(int value) {
	if (value < 0) {
		this->age = 0;
	}
	else {
		this->age = value;
	}
}

short PersonInfo::getAge(){
	return this->age;
}

PersonInfo::PersonInfo()
{
	static int i =0;
	i++;
	cout << "Hello this program recordes personal information" <<  i << endl;
}
