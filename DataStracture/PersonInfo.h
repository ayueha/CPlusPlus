#pragma once
class PersonInfo
{

private:
	short age;

public:
	PersonInfo(); //コンストラクタ
	~PersonInfo();//デコンストラクタ

	void setAge(int value);
	short getAge();
};

