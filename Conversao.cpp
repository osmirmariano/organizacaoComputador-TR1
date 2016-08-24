#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <cstdlib>

using namespace std;

class Conversao{
	public: 
		int valor, cont, tamanho, contador, decimalBin;
		string resultadoBin, resultadoOct, resultadoHex, resultadoDec, resultadoBinOct, resultadoHexDec, valorhex;

	public:
		Conversao(){
			void decimalBinario (int valor);
			void imprimirDecimalBinario ();
			void decimalHexadecimal(int valor);
			void imprimirDecimalHexidacimal();
			void decimalOctal(int valor);
			void imprimirDecimalOctal();
			int binarioDecimal(int valor);
			void binarioHexadecimal(int valor);
			void binarioOctal(int valor);
			int hexadecimalDecimal(string valorhex);
			void hexadecimalBinario(string valorhex);
			void hexadecimalOctal(string valorhex);
			int octalDecimal(int valor);
			void octalHexadecimal(int valor);
			void octalBinario(int valor);
		};

		Conversao(int valor){
			this->valor = valor;
			this->cont = 0;
			this->tamanho = 0;
			this->contador = 0;
			this->valorhex = valorhex;
			this->resultadoBin = resultadoBin;
			this->resultadoOct = resultadoOct;
			this->resultadoHex = resultadoHex;
			this->resultadoDec =  resultadoDec;
			this->resultadoBinOct = resultadoBinOct;
			this->resultadoHexDec = resultadoHexDec;
		};
		~Conversao();
		
		/*-----------------------Função para Conversão de Decimal para Binário---------------------*/
		void decimalBinario(int valor){
			int decimalBin;
			stringstream conversao;
			int z;
			resultadoBin.clear();

			while(valor != 0){
				decimalBin = valor%2;
				valor = valor/2;
				conversao << decimalBin;
				resultadoBin = conversao.str();
				z++;
				cont++;
			}
			conversao.str("");
			decimalBin = 0;
		};
		

		//Função para Imprimir Conversão de Decimal para Binário
		void imprimirDecimalBinario (){
			cout << "  VALOR EM BINÁRIO: ";
			for(int o = cont-1; o >= 0; o--){
				cout << "" << resultadoBin[o];
			}
			resultadoBin.clear();
		};
		/*----------------------------------------------------------------------------------------------------*/
		

		/*--------------------------Função para Conversão de Decimal para Hexadecimal--------------------------*/
		void decimalHexadecimal(int valor){
			stringstream resultado;
			int recebe;

			while(valor != 0){
				recebe =  valor%16;
				valor = valor/16;
				resultado << recebe;
				resultadoHex = resultadoHex+resultado.str();
				switch(recebe){
					case 10:
						resultadoHex = 'a';
						break;
					case 11:
						resultadoHex = 'b';
						break;
					case 12:
						resultadoHex = 'c';
						break;
					case 13:
						resultadoHex = 'd';
						break;
					case 14:
						resultadoHex = 'e';
						break;
					case 15:
						resultadoHex = 'f';
						break;
				}
				resultado.str("");
			}
		};	

		//Função para Imprimir Conversão de Decimal para Hexadecimal
		void imprimirDecimalHexidacimal(){
			int tamanho =  resultadoHex.length();
			cout << "  VALOR EM HEXADECIMAL: ";
			for(int y = tamanho-1; y >= 0; y--){
				cout << resultadoHex[y];
			}
		};
		/*----------------------------------------------------------------------------------------------------*/

		/*--------------------------Função para Conversão de Decimal para Octal-----------------------------*/
		void decimalOctal(int valor){
			int decimalOct;
			stringstream conversao;
			int x;
			resultadoOct.clear();

			while(valor != 0){
				decimalOct = valor%8;
				valor = valor/8;
				conversao << decimalOct;
				resultadoOct = conversao.str();
				x++;
				contador++;
			}
			conversao.str("");
			decimalOct = 0;
		};

		//Função para Imprimir a Conversão de Decimal para Octal
		void imprimirDecimalOctal(){
			cout << "  VALOR EM OCTAL: ";
			for(int x = contador-1; x >= 0; x--){
				cout << "" << resultadoOct[x];
			}
		}
		/*--------------------------------------------------------------------------------------------------*/

		/*--------------------------Função para Conversão de Binário para Decimal---------------------------*/
		int binarioDecimal(int valor){
			int deci = 0, valorDec = 0, teste = 0, armazena;
			stringstream conversao;
			conversao << valor;
			resultadoDec = conversao.str();
			int tamanho =  resultadoDec.length();

			string recebe;
			for(int x = tamanho-1; x >= 0; x--){
				recebe += resultadoDec[x];
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
			return valorDec;
		};
		/*--------------------------------------------------------------------------------------------------*/


		/*------------------------Função para Conversão de Binário para Hexadecimal-------------------------*/
		void binarioHexadecimal(int valor){
			int binDec = binarioDecimal(valor);
			decimalHexadecimal(binDec);
			imprimirDecimalHexidacimal();
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Binário para Hexadecimal-------------------------*/
		void binarioOctal(int valor){
			int binOct = binarioDecimal(valor);
			decimalOctal(binOct);
			imprimirDecimalOctal();
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Hexadecimal para Decimal-------------------------*/
		int hexadecimalDecimal(string valorhex){
			int tamanho = valorhex.length();
			int resultado = 0, bin = 0, potencia = 0, resultadoHexDec = 0, y = 0;

			for(int x = tamanho-1; x >= 0; x--){
				bin = pow(16, y);
				if(valorhex[x] == 0)
				 	resultado = 0;
				else if(valorhex[x] == '1')
					resultado = 1;
				else if(valorhex[x] == '2')
					resultado = 2;
				else if(valorhex[x] == '3')
					resultado = 3;
				else if(valorhex[x] == '4')
					resultado = 4;
				else if(valorhex[x] == '5')
					resultado = 5;
				else if(valorhex[x] == '6')
					resultado = 6;
				else if(valorhex[x] == '7')
					resultado = 7;
				else if(valorhex[x] == '8')
					resultado = 8;
				else if(valorhex[x] == '9')
					resultado = 9;
				else if((int)valorhex[x] == 97)
					resultado = 10;
				else if((int)valorhex[x] == 98)
					resultado = 11;
				else if((int)valorhex[x] == 99)
					resultado = 12;
				else if((int)valorhex[x] == 100)
					resultado = 13;
				else if((int)valorhex[x] == 101)
					resultado = 14;
				else if((int)valorhex[x] == 102)
					resultado = 15;

				potencia = bin*resultado;
				resultadoHexDec = resultadoHexDec + potencia;
				y++;			
			}
			return resultadoHexDec;
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Hexadecimal para Binário-------------------------*/
		void hexadecimalBinario(string valorhex){
			int hexBin = hexadecimalDecimal(valorhex);
			decimalBinario(hexBin);
			imprimirDecimalBinario();
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Hexadecimal para Octal-------------------------*/
		void hexadecimalOctal(string valorhex){
			int hexOct = hexadecimalDecimal(valorhex);
			decimalOctal(hexOct);
			imprimirDecimalOctal();
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Octal para Decimal-------------------------------*/
		int octalDecimal(int valor){
			stringstream conversao;
			conversao << valor;
			resultadoDec = conversao.str();

			int tamanho = resultadoDec.length();
			int bin, potencia, valorFinalOctDec = 0, armazena = 0, y = 0;

			for(int x = tamanho-1; x >= 0; x--){
				bin = pow(8, y);
				if((int)resultadoDec[x] == 48)
					armazena = 0;
				else if((int)resultadoDec[x] == 49)
					armazena = 1;
				else if((int)resultadoDec[x] == 50)
					armazena = 2;
				else if((int)resultadoDec[x] == 51)
					armazena = 3;
				else if((int)resultadoDec[x] == 52)
					armazena = 4;
				else if((int)resultadoDec[x] == 53)
					armazena = 5;
				else if((int)resultadoDec[x] == 54)
					armazena = 6;
				else if((int)resultadoDec[x] == 55)
					armazena = 7;
				
				potencia = bin*armazena;
				valorFinalOctDec = valorFinalOctDec + potencia;
				y++;
			}
			return valorFinalOctDec;
		};
		/*--------------------------------------------------------------------------------------------------*/


		/*------------------------Função para Conversão de Octal para Hexadecimal---------------------------*/
		void octalHexadecimal(int valor){
			int octhex = octalDecimal(valor);
			decimalHexadecimal(octhex);
			imprimirDecimalHexidacimal();
		};
		/*--------------------------------------------------------------------------------------------------*/

		/*------------------------Função para Conversão de Octal para Hexadecimal---------------------------*/
		void octalBinario(int valor){
			int octBin = octalDecimal(valor);
			decimalBinario(octBin);
			imprimirDecimalBinario();
		};
		/*--------------------------------------------------------------------------------------------------*/
};