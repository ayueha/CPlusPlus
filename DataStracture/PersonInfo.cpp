#include "PersonInfo.h"
#include<iostream>
using namespace std;


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

	 p = new int[5];
}

//�R���X�g���N�^��override
PersonInfo::PersonInfo(short age)
{
	cout << "Constractor has been overriding by shrot" << endl;
	this->age = age;
	cout << age << endl;
}



PersonInfo::~PersonInfo()
{
	static int i = 0;
	i++;
	cout << "destractor part has been invoked" << endl;
	//�������̊J���Ȃǂ����s���邱�ƂŃ������J���Y���h��
	delete this->p;
}
