#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <locale>

void acesso_gestao();
void estoque(int massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl);

using namespace std;

int massa_500g = 0, atum_120g = 0, feijao_820g = 0, arroz_1kg = 0, garrafao_agua5l = 0, azeite_extra75cl = 0;


int op;

string senha_gestao = "gatosdopimpolhos";	

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
		
		
		
		
		
		
		
		
		
		cout << "Bem Vindo ao pinel de controle do estoque dos Supermercados Almeida Inc." << endl; 
		cout << "Entre com a sua senha e utilizador na opcao ''Gestao' " << endl;
		
		 cout << "-----------------------MENU----------------" << endl;
		 cout << "|		[1] Gestao	        |" << endl;
		 cout << "|				   	|" << endl;
		 cout << "|				    	|" << endl;
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
			acesso_gestao();
			
			break;
		}
	}
}
void acesso_gestao ()
{
  string senha;	
	
  cout << "Digite a senha: ";
  cin >> senha;
  system ("cls");
  
  if (senha == senha_gestao) {
    cout << "Senha correta!" << endl;
    estoque(massa_500g,atum_120g,feijao_820g,arroz_1kg,garrafao_agua5l,azeite_extra75cl);
  } else {
    cout << "Senha incorreta, Volte a introduzir a  senha" << endl;
    do {
    		cout << "Digite a senha: ";
  			cin >> senha;
  			system("cls");
	}while (senha==senha_gestao);
  }
  system ("cls");
}

void estoque(int massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl) 
{

	cout << "---------Introduza a quantidade de produtos---------" << endl;

	cout << "|| Massa Esparguete 500G :";
	cin >> massa_500g;
	system("cls");
	cout << "|| Atum Bom Petisco 120G :";
	cin >> atum_120g;
	system("cls");
	cout << "|| Feijao Preto Cozido 820G :";
	cin >> feijao_820g;
	system("cls");
	cout << "|| Arroz Cigala 1kg :";
	cin >> arroz_1kg;
	system("cls");
	cout << "|| Garrafao de Agua :";
	cin >> garrafao_agua5l;
	system("cls");
	cout << "|| Azeite Virgem Extra 75CL :";
	cin >> azeite_extra75cl;
}
