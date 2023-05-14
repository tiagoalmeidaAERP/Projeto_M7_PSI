#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <locale>

void acesso_gestao();
void estoque(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl);
int estoque_disponivel(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl, int &vendas_massa, int &vendas_atum, int &vendas_feijao, int &vendas_arroz, int &vendas_agua, int &vendas_extra);
int alerta(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite);
int encomenda_uni(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite);

using namespace std;

int massa_500g = 0, atum_120g = 0, feijao_820g = 0, arroz_1kg = 0, garrafao_agua5l = 0, azeite_extra75cl = 0;

int vendas_massa = 0, vendas_atum = 0, vendas_feijao = 0, vendas_arroz = 0, vendas_agua = 0, vendas_extra = 0;

int op;

string senha_gestao = "gatosdopimpi";	

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
		cout << "Bem Vindo ao pinel de controle do estoque dos Supermercados Almeida Inc." << endl; 
		cout << "Entre com a sua senha e utilizador na opcao 'Gestao' " << endl;
		
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
	system("cls");
		 
	
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
	system("cls");
	cout << "A redirecionar para o seprador de vendas. . ." << endl;
	system("pause");
	system("cls");
	estoque_disponivel(massa_500g,atum_120g,feijao_820g,arroz_1kg,garrafao_agua5l,azeite_extra75cl,vendas_massa,vendas_atum,vendas_feijao,vendas_arroz,vendas_agua, vendas_extra);
	system("pause");
	system("cls");

  } else {
    cout << "Senha incorreta, Volte a introduzir a senha" << endl;
    do {
    		cout << "Digite a senha: ";
  			cin >> senha;
  			system("cls");
	}while (senha==senha_gestao);
  }
  system ("cls");
}

void estoque(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl) 
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
int vendas(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl, int &vendas_massa, int &vendas_atum, int &vendas_feijao, int &vendas_arroz, int &vendas_agua, int &vendas_extra)
{
	cout << "Introduza quantas vendas foram efetudas" << '\n';

    cout << "introduza o numero de vendas de massa" << '\n';
    cin >> vendas_massa;
	system("cls");

    cout << "introduza o numero de vendas de atum" << '\n';
    cin >> vendas_atum;
	system("cls");

    cout << "introduza o numero de vendas de feijao" << '\n';
    cin >> vendas_feijao;
	system("cls");

    cout << "introduza o numero de vendas de arroz" << '\n';
    cin >> vendas_arroz;
	system("cls");

    cout << "introduza o numero de vendas de garrafao de agua" << '\n';
    cin >> vendas_agua;
	system("cls");

    cout << "introduza o numero de vendas de azeite extra virgem" << '\n';
    cin >> vendas_extra;
	system("cls");
}
int estoque_disponivel(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl, int &vendas_massa, int &vendas_atum, int &vendas_feijao, int &vendas_arroz, int &vendas_agua, int &vendas_extra)
{

	int disponivel_massa = massa_500g - vendas_massa;
    int disponivel_atum = atum_120g - vendas_atum;
    int disponivel_feijao = feijao_820g - vendas_feijao;
    int disponivel_arroz = arroz_1kg - vendas_arroz;
    int disponivel_agua = garrafao_agua5l - vendas_agua;
    int disponivel_azeite = azeite_extra75cl - vendas_extra;

    cout << "Estoque disponível:" << endl;
    cout << "Massa Esparguete 500G: " << disponivel_massa << endl;
    cout << "Atum Bom Petisco 120G: " << disponivel_atum << endl;
    cout << "Feijao Preto Cozido 820G: " << disponivel_feijao << endl;
    cout << "Arroz Cigala 1kg: " << disponivel_arroz << endl;
    cout << "Garrafao de Agua: " << disponivel_agua << endl;
    cout << "Azeite Virgem Extra 75CL: " << disponivel_azeite << endl;

}
int alerta(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite)
{
	cout << "A detetar se algum artigo em estoque está a acabar" << endl;
	system("pause");
	system("cls");
	
	if (disponivel_massa < 1800)
	{
		cout << "ESTOQUE DE MASSA! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_massa << endl;
	}
	if (disponivel_atum < 1800)
	{
		cout << "ESTOQUE DE ATUM! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_atum << endl;
	}
	if (disponivel_feijao < 1800)
	{
		cout << "ESTOQUE DE FEIJAO! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_feijao << endl;
	}
	if (disponivel_arroz < 1800)
	{
		cout << "ESTOQUE DE ARROZ! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_arroz << endl;
	}
	if (disponivel_agua < 1800)
	{
		cout << "ESTOQUE DE AGUA! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_agua << endl;
	}
	if (disponivel_azeite < 1800)
	{
		cout << "ESTOQUE DE AGUA! Está a precisar de ser reabastecido, unidades atuais:" << disponivel_azeite << endl;
	}
}
int encomenda_uni(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite)
{
		cout << "Se as suas unidades etão abaixo da media voce pode encomendar mais aqui" << endl;
		cout << "Selecione a opcao que pretende" << endl;

		 cout << "-----------------------MENU----------------" << endl;
		 cout << "|		[1] Massa	        |" << endl;
		 cout << "|		[2]	Atum	   	|" << endl;
		 cout << "|		[3]	Feijao	    	|" << endl;
		 cout << "|		[4]	Arroz        	|" << endl; 
		 cout << "|		[5] Agua		    	|" << endl;
		 cout << "|		[6]	Azeite	 	|" << endl;
		 cout << "|					|" << endl;
		 cout << "|					|" << endl; 
		 cout << "|					|" << endl;
		 cout << "|					|" << endl;
	cout << "----------------------------------------" << endl;

	
}