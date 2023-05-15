#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <locale>
#include <stdio.h>

using namespace std;

void acesso_gestao();
void estoque(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl);
int estoque_disponivel(int &massa_500g, int &atum_120g, int &feijao_820g, int &arroz_1kg, int &garrafao_agua5l, int &azeite_extra75cl, int &vendas_massa, int &vendas_atum, int &vendas_feijao, int &vendas_arroz, int &vendas_agua, int &vendas_extra);
void alerta(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite);
int encomenda_uni(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite);

int massa_500g = 0, atum_120g = 0, feijao_820g = 0, arroz_1kg = 0, garrafao_agua5l = 0, azeite_extra75cl = 0;

int vendas_massa = 0, vendas_atum = 0, vendas_feijao = 0, vendas_arroz = 0, vendas_agua = 0, vendas_extra = 0;

int disponivel_massa = 0, disponivel_atum = 0, disponivel_feijao = 0, disponivel_arroz = 0, disponivel_agua = 0, disponivel_azeite = 0;

float investimento_encomendas = 100000;

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
	return 0;
}
void acesso_gestao()
{
	string senha;

	cout << "Digite a senha: ";
	cin >> senha;
	system("cls");

	if (senha == senha_gestao)
	{
		cout << "Senha correta!" << endl;
		estoque(massa_500g, atum_120g, feijao_820g, arroz_1kg, garrafao_agua5l, azeite_extra75cl);
		system("cls");
		cout << "A redirecionar para o seprador de vendas. . ." << endl;
		system("pause");
		system("cls");
		cout << "A carregar estoque disponivel.... " << endl;
		system("pause");
		system("cls");
		estoque_disponivel(massa_500g, atum_120g, feijao_820g, arroz_1kg, garrafao_agua5l, azeite_extra75cl, vendas_massa, vendas_atum, vendas_feijao, vendas_arroz, vendas_agua, vendas_extra);
		system("pause");
		encomenda_uni(disponivel_massa, disponivel_atum, disponivel_feijao, disponivel_arroz, disponivel_agua, disponivel_azeite);
		
	}
	else
	{
		cout << "Senha incorreta, Volte a introduzir a senha" << endl;
		do
		{
			cout << "Digite a senha: ";
			cin >> senha;
			system("cls");
		} while (senha == senha_gestao);
	}
	system("cls");
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
	cout << "|| Garrafao de Agua 5L :";
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
void alerta(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite)
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
int encomenda_uni(int &disponivel_massa, int &disponivel_atum, int &disponivel_feijao, int &disponivel_arroz, int &disponivel_agua, int &disponivel_azeite, int &op)
{
	char continuar;
	do{
		int kilos_massa, kilos_atum, kilos_feijao, kilos_arroz, litros_agua, litros_azeite;
		int preco_massa, preco_atum, preco_feijao, preco_arroz, preco_agua, preco_azeite;

		cout << "Se as suas unidades etão abaixo da media (1800) voce pode encomendar mais aqui" << endl;
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

		cin >> op;
		system("cls");

		switch (op)
		{
		case 1:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Massa 500g : Armazens Machado 1,78€/Kg       |" << endl;
			cout << "|		[2] Massa 500g : Armazens Silva 1,50€/Kg	   	|" << endl;
			cout << "|		[3]	Massa 500g : Armazens Rego 1,90€/Kg  	|" << endl;
			cout << "|		[4]	Massa 500g : Armazens Duarte 1,40€/Kg        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_massa;
					cout << "----------------------------------------" << endl;
					preco_massa = kilos_massa * 1.78;
					cout << "Custara" << preco_massa << "euros" << endl;
					break;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_massa;
					cout << "----------------------------------------" << endl;
					preco_massa = kilos_massa * 1.50;
					cout << "Custara" << preco_massa << "euros" << endl;
					break;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_massa;
					cout << "----------------------------------------" << endl;
					preco_massa = kilos_massa * 1.90;
					cout << "Custara" << preco_massa << "euros" << endl;
					break;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_massa;
					cout << "----------------------------------------" << endl;
					preco_massa = kilos_massa * 1.40;
					cout << "Custara" << preco_massa << "euros" << endl;
					break;
				}
			}
		break;
		}
		case 2:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Atum 120g : Armazens Machado 12,00€/Kg       |" << endl;
			cout << "|		[2] Atum 120g : Armazens Silva 9,88€/Kg	   	|" << endl;
			cout << "|		[3]	Atum 120g : Armazens Rego 11,08€/Kg  	|" << endl;
			cout << "|		[4]	Atum 120g : Armazens Duarte 9,92€/Kg        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_atum;
					cout << "----------------------------------------" << endl;
					preco_atum = kilos_atum * 12;
					cout << "Custara" << preco_atum << "euros" << endl;
					break;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_atum;
					cout << "----------------------------------------" << endl;
					preco_atum = kilos_atum * 9.88;
					cout << "Custara" << preco_atum << "euros" << endl;
					break;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_atum;
					cout << "----------------------------------------" << endl;
					preco_atum = kilos_atum * 11.08;
					cout << "Custara" << preco_atum << "euros" << endl;
					break;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_atum;
					cout << "----------------------------------------" << endl;
					preco_atum = kilos_atum * 9.92;
					cout << "Custara" << preco_atum << "euros" << endl;
					break;
				}
				break;
			}
		}
		case 3:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Feijao 820g : Armazens Machado 1,54€/Kg       |" << endl;
			cout << "|		[2] Feijao 820g : Armazens Silva 1.34€/Kg	   	|" << endl;
			cout << "|		[3]	Feijao 820g : Armazens Rego 1,75€/Kg  	|" << endl;
			cout << "|		[4]	Feijao 820g : Armazens Duarte 1,25/Kg        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_feijao;
					cout << "----------------------------------------" << endl;
					preco_feijao = kilos_feijao * 1.54;
					cout << "Custara" << preco_feijao << "euros" << endl;
					break;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_feijao;
					cout << "----------------------------------------" << endl;
					preco_feijao = kilos_feijao * 1.34;
					cout << "Custara" << preco_feijao << "euros" << endl;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_feijao;
					cout << "----------------------------------------" << endl;
					preco_feijao = kilos_feijao * 1.75;
					cout << "Custara" << preco_feijao << "euros" << endl;
					break;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_feijao;
					cout << "----------------------------------------" << endl;
					preco_feijao = kilos_feijao * 1.25;
					cout << "Custara" << preco_feijao << "euros" << endl;
				}
			}
		}
		break;
		case 4:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Arroz 500g : Armazens Machado 1,78€/Kg       |" << endl;
			cout << "|		[2] Arroz 500g : Armazens Silva 1,50€/Kg	   	|" << endl;
			cout << "|		[3]	Arroz 500g : Armazens Rego 1,90€/Kg  	|" << endl;
			cout << "|		[4]	Arroz 500g : Armazens Duarte 1,40€/Kg        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_arroz;
					cout << "----------------------------------------" << endl;
					preco_arroz = kilos_arroz * 1.78;
					cout << "Custara" << preco_arroz << "euros" << endl;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_arroz;
					cout << "----------------------------------------" << endl;
					preco_arroz = kilos_arroz * 1.50;
					cout << "Custara" << preco_arroz << "euros" << endl;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_arroz;
					cout << "----------------------------------------" << endl;
					preco_arroz = kilos_arroz * 1.90;
					cout << "Custara" << preco_arroz << "euros" << endl;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> kilos_arroz;
					cout << "----------------------------------------" << endl;
					preco_arroz = kilos_arroz * 1.40;
					cout << "Custara" << preco_arroz << "euros" << endl;
				}
				break;
		}
		break;
		}
		case 5:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Agua 5L : Armazens Machado 0,23/LT       |" << endl;
			cout << "|		[2] Agua 5L : Armazens Silva 0,27/LT	   	|" << endl;
			cout << "|		[3]	Agua 5L : Armazens Rego 0,30/LT  	|" << endl;
			cout << "|		[4]	Agua 5L : Armazens Duarte 0,20/LT        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_agua;
					cout << "----------------------------------------" << endl;
					preco_agua = litros_agua * 0.23;
					cout << "Custara" << litros_agua << "euros" << endl;
					break;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_agua;
					cout << "----------------------------------------" << endl;
					preco_agua = litros_agua * 0.27;
					cout << "Custara" << litros_agua << "euros" << endl;
					break;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_agua;
					cout << "----------------------------------------" << endl;
					preco_agua = litros_agua * 0.30;
					cout << "Custara" << litros_agua << "euros" << endl;
					break;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_agua;
					cout << "----------------------------------------" << endl;
					preco_agua = litros_agua * 0.20;
					cout << "Custara" << litros_agua << "euros" << endl;
					break;
				}
		}
		case 6:
		{
			cout << "Aqui esta todas as opcoes de encomenda" << endl;
			cout << "-----------------------MENU----------------" << endl;
			cout << "|		[1] Azeite 5L : Armazens Machado 5.27/LT       |" << endl;
			cout << "|		[2] Azeite 5L : Armazens Silva 5,89/LT	   	|" << endl;
			cout << "|		[3]	Azeite 5L : Armazens Rego 5.64/LT  	|" << endl;
			cout << "|		[4]	Azeite 5L : Armazens Duarte 5.40/LT        	|" << endl;
			cout << "|				    	|" << endl;
			cout << "|			 	|" << endl;
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
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_azeite;
					cout << "----------------------------------------" << endl;
					preco_azeite = litros_azeite * 5.27;
					cout << "Custara" << litros_azeite << "euros" << endl;
					break;
				}
				case 2:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_azeite;
					cout << "----------------------------------------" << endl;
					preco_azeite = litros_azeite * 5.89;
					cout << "Custara" << litros_azeite << "euros" << endl;
					break;
				}
				case 3:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_azeite;
					cout << "----------------------------------------" << endl;
					preco_azeite = litros_azeite * 5.64;
					cout << "Custara" << litros_azeite << "euros" << endl;
					break;
				}
				case 4:
				{
					cout << "----------------------------------------" << endl;
					cout << "Introudza quantos kilos pretende encomendar:";
					cin >> litros_azeite;
					cout << "----------------------------------------" << endl;
					preco_azeite = litros_azeite * 5.40;
					cout << "Custara" << litros_azeite << "euros" << endl;
					break;
				}
			}		
		break;
		}
	}
}
	cout << "Pretende encomendar mais unidades de produtos? [S/N]" << endl;
	cin >> continuar;
	}while(continuar == 'S' || continuar == 's');
}

