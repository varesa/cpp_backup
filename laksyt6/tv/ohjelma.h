#include <string>

using namespace std;

class ohjelma {
public:
	ohjelma(string nimi = "NULL", int kest = 0) { OhjNimi = nimi; OhjKesto = kest; }
	bool setNimi(string nimi);
	string getNimi();
	bool setKesto(int kest);
	int getKesto();
	bool kannattaakoKatsoa();
private:
	string OhjNimi;
	int OhjArvostelu;
	int OhjKesto;
};