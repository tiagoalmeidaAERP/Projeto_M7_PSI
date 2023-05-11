#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <locale>

using namespace std;

int massa_500G = 0, atum_120G = 0, feijao_820g = 0, arroz_1Kg = 0, garrafao_agua5L = 0, Azeite_extra75CL = 0;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	cout << "	  -------------------MENU-----------------	" << endl;
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl; 
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl; 
		 cout << "|										 |" << endl;
		 cout << "|										 |" << endl;
	cout << "	  ----------------------------------------" << endl;

}
void estoque(int &atum_120G, int &feijao_820g, int &arroz_1Kg, int &garrafao_agua5L, int &Azeite_extra75CL) 
{

	cout << "---------Introduza a quantidade de produtos---------" << endl;

	cout << "|| Massa Esparguete 500G :";
	cin >> massa_500G;
	system("cls");
	cout << "|| Atum Bom Petisco 120G :";
	cin >> atum_120G;
	system("cls");
	cout << "|| Feijao Preto Cozido 820G :";
	cin >> feijao_820g;
	system("cls");
	cout << "|| Arroz Cigala 1kg :";
	cin >> arroz_1Kg;
	system("cls");
	cout << "|| Garrafao de Agua :";
	cin >> garrafao_agua5L;
	system("cls");
	cout << "|| Azeite Virgem Extra 75CL :";
	cin >> Azeite_extra75CL;
}