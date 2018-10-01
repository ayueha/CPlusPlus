#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

enum  dayOfWeek{M = 1 ,TU=2 ,W=3,TH=4,F=5,SA=6,SN=7};
               //0,1,2,  3,4, 5, 6
string getDay(dayOfWeek);
int main() {

	dayOfWeek d = M;
	cout << d << endl;

	cout << dayOfWeek(W) << endl;
	string tmp,inputLetter;

	tmp = getDay(TH);
	cout << tmp << endl;


	Sleep(4 * 1000);
	return 0;
}

string getDay(dayOfWeek d) {
	string result = "";
	switch (d) {
	case M:
		result = "Espaspaev";
		break;
	case TU:
		result = "Tesipaev";
		break;
	case W:
		result = "Kolmapaev";
		break;
	case TH:
		result = "Nelijapaev";
		break;
	case F:
		result = "Reede";
		break;
	case SA:
		result = "Phapaev";
		break;
	case SN:
		result = "Laupaev";
		break;
	default:
		result = "Unkoen words have been inserted";
		break;
	}
	return result;
}