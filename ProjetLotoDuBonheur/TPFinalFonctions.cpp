#include "TPFinalFonctions.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void afficherMenu()
{
	for (int i = 0; i <= 44; i++)
	{
		cout<< "-";
	}
	cout << endl;
	for (int x = 0; x <=15; x++)
	{
		cout << " ";
	}
	cout << "LOTO DU BONHEUR" << endl;
	for (int y = 0; y <= 5; y++)
	{
		cout << " ";
	}
	cout << "Presente par : Nicolas Paquette" << endl;
	for (int i = 0; i <= 44; i++)
	{
		cout << "-";
	}
	cout << endl << "1.Acheter un billet"<<endl<<"2.Afficher un billet"<<endl<<"3.Valider un billet"<<endl<<"0.Quitter le programme"<<endl;
	for (int i = 0; i <= 44; i++)
	{
		cout << "-";
	}
	cout << endl <<"Veuillez entrer votre choix -->";
	

}

int validerChoixMenu()
{
	int choix;
	cin >> choix;
	
	while (!(choix>=0&& choix<=3))
	{
		cout <<"Erreur veuillez rentrer un choix entre 0 et 3 -->";
		cin >> choix;
		cout << endl;
	}
	return choix;
}

void afficherSousMenu()
{
	for (int i = 0; i <= 47; i++)
	{
		cout << "-";
	}
	cout << endl;
	for  (int x = 0; x <= 15; x++)
	{
		cout << " ";
	}
	cout << "Acheter un billet"<<endl;
	for (int i = 0; i <= 47; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "1. Choisir ses propres numeros" << endl << "2. Choisir les numeros au hasard" << endl << "0. Revenir au menu precedent" << endl;
	for (int i = 0; i <= 47; i++)
	{
		cout << "-";
	}
	cout << "Veuillez entrer votre choix -->";
}

int validerChoixSousMenu()
{
	int choix;
	cin >> choix;

	while (!(choix >= 0 && choix <= 2))
	{
		cout << "Erreur veuillez rentrer un choix entre 0 et 2 -->";
		cin >> choix;
		cout << endl;
	}
	return choix;
}

void ecrirEnteteBillet(ofstream& canalout)
{
	int col1 = 27;
	int col2 = 6;
	int col3 = 21;
	canalout << setfill('-') << setw(col1) << setfill(' ') << endl;
	canalout << setw(col2) << setw(col3) << "LOTO DU BONHEUR" << endl;
	canalout << setfill('-') << setw(col1) << setfill(' ') << endl;
}

void afficherBillet(ofstream& canalOut)
{
	
	string nom;
	cout << "Veuiller entrer votre nom : ";
	cin >> nom;
	nom = nom + ".txt";
	canalOut.open(nom, ios::out);
	if (!canalOut)
	{
		cerr << "Erreur : le fichier " << nom << " n'existe pas" << endl;
		return;
	}
	
}
