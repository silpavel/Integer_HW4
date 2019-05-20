#include "integer.h"
#include <iostream>
using namespace std;
int main() {
	{
		Integer nt1(5),nt2(10),sum;
		sum= nt1 + nt2;
		sum.show();
		
	}
	system("pause");
	return 0;
}