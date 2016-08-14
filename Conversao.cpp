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

	//Função para Conversão de Decimal para Binário
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

	
	//Função para Conversão de Decimal para Hexadecimal
	void decimalHexadecimal(int valor){
		int *decimalHex = new int[valor];
		int x, cont = 0;

		while(valor != 0){
			decimalHex[x] = valor%16;
			valor = valor/16;
			x++;
			cont++;
		}

		cout << "  VALOR EM HEXADECIMAL: ";
		for(int x = cont-1; x >= 0; x--){
			/*switch(decimalHex[x]){
				case 10:
					decimalHex[x] = 'a';
					break;
				case 11:

					break;
				case 12:
					break;
				case 13:
					break;
				case 14:
					(char)decimalHex[x] = 'e';
					break;
				case 15:
					break;

			}*/
			cout << "" << decimalHex[x];
		}
	};

	//Função para Conversão de Decimal para Octal
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


	//Função para Conversão de Binário para Decimal
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

	//Função para Conversão de Hexadecimal para Decimal
	void  hexadecimalDecimal(string valor1){
		int tamanho =  valor1.length();
		int hexa = 0, armazena, resultado = 0, valorHex = 0;
		string recebe;

		for(int x = tamanho-1; x >= 0; x--){
			recebe += valor1[x];
			cout << "" << x << " RECEBE: " << recebe[x] << endl;
		}

		for(int x = tamanho-1; x >= 0; x--){
			hexa = pow(16, x);
			
			if(valor1[x] == 'a')
				armazena = 10;
			else{
				if(valor1[x] == 'b')
					armazena == 11;
				else{
					if(valor1[x] == 'c')
						armazena == 12;
					else{
						if(valor1[x] == 'd')
							armazena == 13;
						else{
							if(valor1[x] == 'e')
								armazena == 14;
							else{
								if(valor1[x] == 'f')
									armazena == 15;
								else
									armazena = recebe[x];
							}
						}
					}
				}
			}
			cout << "X: " << x << endl;
			cout << "HEXA: " << hexa << endl;
			cout << "POW: " << pow(16, x) << endl;
			cout << "VALOR: " << valor1[x] << endl;
			cout << endl << "ARMAZENA: " << armazena << endl;

			
			resultado = hexa*armazena; 
			valorHex = valorHex+resultado;
		}
		cout << "  VALOR EM DECIMAL: " << valorHex;
	};
		
};