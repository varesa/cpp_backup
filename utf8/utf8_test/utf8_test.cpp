#include <iostream>
#include <utf8>

using namespace std;
using namespace ev;

int main() {

	utf8::use();

	wcout << L"test�";

	system("pause");

	return 0;
}