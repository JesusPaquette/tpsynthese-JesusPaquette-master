// But : 
// Auteur :Nicolas Paquette
// Date : 2020 

#include <iostream>
#include <vector>
#include <fstream>
#include "TPFinalFonctions.h"

using namespace std;

int main() {
	int choix;
	int choixSous;
	string nom;
	vector<int> NbCombinaisonGagnante;
	vector<int> NbCombinaisonJoueur;

	const string NOM_FICHIER_SORTIE = "fichier de sortie.txt";
	const string NOM_FICHIER_ENTREE = "fichier de sortie.txt";

	ofstream canalout;
	ifstream canalIn;

	afficherMenu();
	choix = validerChoixMenu();
	if (choix == 1) {
		system("cls");
		cout << "Veuiller entrer votre nom--->";
		cin >> nom;
		canalout.open(nom, ios::out);
		ecrirEnteteBillet(canalout);
		system("cls");

		afficherSousMenu();
		choixSous = validerChoixSousMenu();
	}
	return 0;
}