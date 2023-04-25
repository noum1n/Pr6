#include <iostream>
#include "LogElement.h"
	using namespace std;
int main () {
	LogElement logel;
	logel.setIn1(true);
	logel.setIn2(false);
	cout << " 1 or 0 = " << logel.getResOr() << endl;
	cout << " Not 1 = " << logel.getResNot()<< endl; 
	cout << " 1 and 0 = " << logel.getResAnd()<< endl; 
	return 0 ;
}
