#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

class Conversao{
	public:
		int valor, *decimalBin, *decimalHex, cont;
	public:
		Conversao(){
			this->valor = valor;
			cont = 0;
		}

		~Conversao();

	/*--------------------------Função para Conversão de Decimal para Binário--------------------------*/
	void decimalBinario(int valor){
		int *decimalBin = new int[valor];
		int x, cont = 0;
		while(valor != 0){
			decimalBin[x] = valor%2;
			valor = valor/2;
			x++;
			cont++;
		}
		cout << "  VALOR EM BINÁRIO: ";
		for(int x = cont-1; x >= 0; x--){
			cout << "" << decimalBin[x];
		}
	};
	/*--------------------------------------------------------------------------------------------------*/

	
	/*--------------------------Função para Conversão de Decimal para Hexadecimal--------------------------*/
	void decimalHexadecimal(int valor){
		stringstream resultado;
		int recebe;
		string resultadoFinal;

		while(valor != 0){
			recebe =  valor%16;
			valor = valor/16;
			resultado << recebe;
			resultadoFinal = resultadoFinal+resultado.str();
			switch(recebe){
				case 10:
					resultadoFinal = 'a';
					break;
				case 11:
					resultadoFinal = 'b';
					break;
				case 12:
					resultadoFinal = 'c';
					break;
				case 13:
					resultadoFinal = 'd';
					break;
				case 14:
					resultadoFinal = 'e';
					break;
				case 15:
					resultadoFinal = 'f';
					break;
			}
			resultado.str("");
		}
		int tamanho =  resultadoFinal.length();
		cout << "  VALOR EM HEXADECIMAL: ";
		for(int y = tamanho-1; y >= 0; y--){
			cout << resultadoFinal[y];
		}
	};
	/*--------------------------------------------------------------------------------------------------*/
		

	/*--------------------------Função para Conversão de Decimal para Octal-----------------------------*/
	void decimalOctal(int valor){
		int *decimalOct = new int[valor];
		int x, cont = 0;
		while(valor != 0){
			decimalOct[x] = valor%8;
			valor = valor/8;
			x++;
			cont++;
		}
		cout << "  VALOR EM OCTAL: ";
		for(int x = cont-1; x >= 0; x--){
			cout << "" << decimalOct[x];
		}
	}
	/*--------------------------------------------------------------------------------------------------*/


	/*--------------------------Função para Conversão de Binário para Decimal---------------------------*/
	void binarioDecimal(string valor1){
		int deci = 0, valorDec = 0, teste = 0, armazena;
		int tamanho =  valor1.length();
		string recebe;
		for(int x = tamanho-1; x >= 0; x--){
			recebe += valor1[x];
		}

		for(int x = tamanho-1; x >= 0; x--){
			deci = pow(2, x);
			if((int)recebe[x] == 48)
				armazena = 0;
			else{
				if((int)recebe[x] == 49)
				armazena = 1;
			}
			teste = deci*armazena;
			valorDec = valorDec + teste;
		}
		cout << "  VALOR EM DECIMAL: " << valorDec;
	};
	/*--------------------------------------------------------------------------------------------------*/


	/*------------------------Função para Conversão de Binário para Hexadecimal-------------------------*/
	void binarioHexadecimal(string valor1){
		int trio = 0, bin, atual = 0, controle = 4, y = 0, armazena, potencia, valorFinal = 0, tamanho, k = 0, cont = 0;
		int mod, tam = 0;
		tamanho =  valor1.length();
		int *recebe = new int[tamanho];
		int a = 0;

		cout << "  VALOR EM OCTAL: ";
		while(tamanho != cont){

			for(int x = tamanho-1; x >= 0; x--){
				bin = pow(2, y);
				if((int)valor1[x] == 48)
					armazena = 0;
				else{
					if((int)valor1[x] == 49)
						armazena = 1;
				}
				potencia = bin*armazena;
				valorFinal = valorFinal + potencia;
				y++;
				if(y == controle){
					a = a + y;
					y = 0;
					recebe[k] = valorFinal;
					valorFinal = 0;
					potencia = 0;
					cout << recebe[k];
					k++;
				}
				cont++;
			}
			if(a != tamanho){
				y = 0;
				valorFinal = 0;
				for(int b = a; b < tamanho; b++){
					bin = pow(2, y);
					if((int)valor1[y] == 48)
						armazena = 0;
					else{
						if((int)valor1[y] == 49)
							armazena = 1;
					}
					potencia = bin*armazena;
					valorFinal = valorFinal + potencia;
					cout << "VALOR: " << valor1[y] << endl;
					cout << "ARMAZENA: " << armazena << endl;
					cout << "RECEBE: " << valorFinal << endl << endl;
					y++;
				}
			}
		}
	}
	/*--------------------------------------------------------------------------------------------------*/



	//Função para Conversão de Binário para Hexadecimal
	void binarioOctal(string valor1){
		int trio = 0, bin, atual = 0, controle = 3, y = 0, armazena, potencia, valorFinal = 0, tamanho, k = 0, cont = 0;
		int mod, tam = 0;
		tamanho =  valor1.length();
		int *recebe = new int[tamanho];
		int a = 0;

		cout << "  VALOR EM OCTAL: ";
		while(tamanho != cont){

			for(int x = tamanho-1; x >= 0; x--){
				bin = pow(2, y);
				if((int)valor1[x] == 48)
					armazena = 0;
				else{
					if((int)valor1[x] == 49)
						armazena = 1;
				}
				potencia = bin*armazena;
				valorFinal = valorFinal + potencia;
				y++;
				if(y == controle){
					a = a + y;
					y = 0;
					recebe[k] = valorFinal;
					valorFinal = 0;
					potencia = 0;
					cout << recebe[k];
					k++;
				}
				cont++;
			}
			if(a != tamanho){
				y = 0;
				valorFinal = 0;
				for(int b = a; b < tamanho; b++){
					bin = pow(2, y);
					if((int)valor1[y] == 48)
						armazena = 0;
					else{
						if((int)valor1[y] == 49)
							armazena = 1;
					}
					potencia = bin*armazena;
					valorFinal = valorFinal + potencia;
					cout << "VALOR: " << valor1[y] << endl;
					cout << "ARMAZENA: " << armazena << endl;
					cout << "RECEBE: " << valorFinal << endl << endl;
					y++;
				}
			}
		}
		
	}

	//Função para Conversão de Hexadecimal para Decimal
	void  hexadecimalDecimal(string valor1){
		int tamanho =  valor1.length();
		int hexa = 0, armazena, resultado = 0, valorHex = 0;
		string recebe;

		for(int x = tamanho-1; x >= 0; x--){
			if(valor1[x] == 'a'){
				recebe = "10";
				cout << "Entrou aqui " << recebe <<endl;
				valor1[x] = recebe[x];
			}
			else{
				if(valor1[x] == 'b')
					valor1[x] = 11;
				else{
					if(valor1[x] == 'c')
						valor1[x] = 12;
					else{
						if(valor1[x] == 'd')
							valor1[x] = 13;
						else{
							if(valor1[x] == 'e'){
								cout << "Entrou aqui também" << endl;
								valor1[x] = 14;
							}
							else{
								if(valor1[x] == 'f')
									valor1[x] = 15;
							}
						}
					}
				}
			}
			cout << "VALOR: " << valor1[x] << endl;
			// hexa = pow(16, x);
			// cout << " VALOR FOR: " << (int)valor1[x] << endl;
			// cout << "X: " << x << endl;
			// cout << "HEXA: " << hexa << endl;
			// cout << "POW: " << pow(16, x) << endl;
			// cout << "VALOR: " << valor1[x] << endl;
			// cout << endl << "ARMAZENA: " << armazena << endl;

			
			// resultado = hexa*armazena; 
			// valorHex = valorHex+resultado;
		}
		//cout << "  VALOR EM DECIMAL: " << valorHex;
	};

	void octalDecimal(int valor){
		int x = 0;
		while(valor < 0){
			cout << "VALOR: " << valor << endl;
			x++;
		}
	}

	void hexadecimalBinario(string valor1){
		int tamanho = valor1.length();
		int *hexadecimalBin = new int[tamanho];
		int resultado;

		for(int x = 0; x < tamanho; x++){
			if(valor1[x] == 'a'){
				//resultado = 10/2;
				hexadecimalBin[x] = 10%2;
				valor = valor/2;
				x++;
				cont++;	
			}
			else if (valor1[x] == 'b'){
				resultado = 11;
			}
		}
	};


		
};