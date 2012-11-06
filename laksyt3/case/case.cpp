#include <iostream>

using namespace std;

int main() {
	
	int pvt[] = {31,-1,31,30,31,30,31,31,30,31,30,31}; // -1 merkitsee "erikoistapauksen"

	for(int i=0;i<12;i++) {
		switch (pvt[i]) {
		case 30:
			cout << i+1 << ". kuukaudessa on 30 paivaa.\n";
			break;
		case 31:
			cout << i+1 << ". kuukaudessa on 31 paivaa.\n";
			break;
		case -1:
			cout << i+1 << ". kuukaudessa on 28 tai 29 paivaa.\n";
			break;
		}
	}

	system("pause");

	return 0;
}