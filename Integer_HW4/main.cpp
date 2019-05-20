#include "integer.h"
#include <iostream>
using namespace std;
int main() {
	{
		cout << "next make 3 Integer in stack\n";
		Integer nt1(15),nt2(10),sum=nt2;//copy constr for sum
		cout << "next exe operator +-*/ or %\n";
		sum=nt1 - nt2;
		cout << "next exe show function\n";
		sum.show();
		cout << "it is last line in code\n";
	}
	system("pause");
	return 0;
}