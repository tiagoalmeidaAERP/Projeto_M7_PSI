#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <locale>

using namespace std;

void acesso (string &senha_gestao);

int massa_500G = 0, atum_120G = 0, feijao_820g = 0, arroz_1Kg = 0, garrafao_agua5L = 0, Azeite_extra75CL = 0;

int op;

string senha_gestao = "gatosdopimpolhos"	

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
		 cout << "-----------------------MENU----------------" << endl;
		 cout << "|		[1] Cliente 		|" << endl;
		 cout << "|				   	|" << endl;
		 cout << "|		[2] Gestão 	        |" << endl;
		 cout << "|			        	|" << endl; 
		 cout << "|				    	|" << endl;
		 cout << "|				 	|" << endl;
		 cout << "|					|" << endl;
		 cout << "|					|" << endl; 
		 cout << "|					|" << endl;
		 cout << "|					|" << endl;
	cout << "----------------------------------------" << endl;
	cin >> op;
	
	switch (op)
	{
		case 1:
		{
			
		}
		case 2:
		{
			acesso(senha_gestao)
		}
	}
}


