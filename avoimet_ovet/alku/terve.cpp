#include <iostream>
#include <string>		// Ladataan tarvittavat kirjastot, "laajennukset"

using namespace std;	// vähentää tarvittavan kirjoittamisen määrää

void main() {			// Varsinainen koodi alkaa tästä

	cout << "Anna nimesi:\n>";	// Näytetään teksti näytöllä, \n on uusi rivi

	string nimi;		// "Muuttuja", johon voidaan tallentaa tekstiä

	getline(cin,nimi);  // Luetaan käyttäjän nimi muuttujaan

	cout << "\nTerve " << nimi << "!\nKiinnostaako ohjelmointi?\n\n";	// Näytetään viesti + nimi näytölle

	system("pause");	// "Pysäytetään" ohjelma

}