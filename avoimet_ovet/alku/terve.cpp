#include <iostream>
#include <string>		// Ladataan tarvittavat kirjastot, "laajennukset"

using namespace std;	// v�hent�� tarvittavan kirjoittamisen m��r��

void main() {			// Varsinainen koodi alkaa t�st�

	cout << "Anna nimesi:\n>";	// N�ytet��n teksti n�yt�ll�, \n on uusi rivi

	string nimi;		// "Muuttuja", johon voidaan tallentaa teksti�

	getline(cin,nimi);  // Luetaan k�ytt�j�n nimi muuttujaan

	cout << "\nTerve " << nimi << "!\nKiinnostaako ohjelmointi?\n\n";	// N�ytet��n viesti + nimi n�yt�lle

	system("pause");	// "Pys�ytet��n" ohjelma

}