#pragma once
class PersonInfo
{

private:
	short age;
	int * p;
public:
	PersonInfo(); //�R���X�g���N�^
	PersonInfo(short);
	~PersonInfo();//�f�R���X�g���N�^

	void setAge(int value);
	short getAge();
};

