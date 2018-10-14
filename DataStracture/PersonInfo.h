#pragma once
class PersonInfo
{

private:
	short age;
	int * p;
public:
	PersonInfo(); //コンストラクタ
	PersonInfo(short);
	~PersonInfo();//デコンストラクタ

	void setAge(int value);
	short getAge();
};

