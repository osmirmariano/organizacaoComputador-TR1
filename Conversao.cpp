#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <cstdlib>
#define max 20

using namespace std;

class Conversao{
	public:
		int valor, cont;
	public:
		Conversao(){
			this->valor = valor;
			this->cont = 0;
		}

		~Conversao();

	// void calDecBin (int valor){
		
	// }
	/*--------------------------Função para Conversão de Decimal para Binário--------------------------*/
	void decimalBinario(int valor){
		int *decimalBin = new int[max];
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
		int deci = 0, valorDec = 0, teste = 0, armazena, recebe;
		int tamanho =  valor1.length();
		string dados, resultadoFinal;
		stringstream resultado;

		for(int x = tamanho-1; x >= 0; x--){
			dados += valor1[x];
		}
		for(int x = tamanho-1; x >= 0; x--){
			deci = pow(2, x);
			if((int)dados[x] == 48)
				armazena = 0;
			else{
				if((int)dados[x] == 49)
				armazena = 1;
			}
			teste = deci*armazena;
			valorDec = valorDec + teste;
		}

		int valor = valorDec;
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
		int tam =  resultadoFinal.length();
		cout << "  VALOR EM HEXADECIMAL: ";
		for(int y = tamanho-1; y >= 0; y--){
			cout << resultadoFinal[y];
		}
		resultadoFinal.clear();
		valorDec = 0;
	};
	/*--------------------------------------------------------------------------------------------------*/

	/*------------------------Função para Conversão de Hexadecimal para Decimal-------------------------*/
	void  qhexadecimalDecimal(string valor1){
		int tamanho =  valor1.length();
		int hexa = 0, armazena, resultado = 0, valorHex = 0;
		string recebe;

		for(int x = tamanho-1; x >= 0; x--){
			if(valor1[x] == 'a'){
				recebe = "10";

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
	/*---------------------------------------------------------------------------------------*/



	/*------------------------Função para Conversão de Binário para Hexadecimal-------------------------*/
	void binarioOctal(string valor1){
		int  bin, y = 0, armazena, potencia, valorFinal = 0, tamanho, k = 0, cont = 0;
		tamanho =  valor1.length();
		int *recebe = new int[tamanho];

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
				recebe[k] = valorFinal;
				y++;
				if(y == 3){
					y = 0;
					valorFinal = 0;
					potencia = 0;
					k++;
				}
				cont++;
			}
			cout << "  VALOR EM OCTAL: ";
			for(int x = k-1; x >= 0; x--){
				cout << recebe[x]; 
			}
		}
	};
	/*--------------------------------------------------------------------------------------------------*/


	

	/*------------------------Função para Conversão de Octal para Decimal-------------------------------*/
	void octalDecimal(string valor1){
		int tamanho = valor1.length();
		int bin, potencia, valorFinal, armazena = 0, y = 0;

		cout << "  VALOR EM DECIMAL: ";
		for(int x = tamanho-1; x >= 0; x--){
			bin = pow(8, y);
			if((int)valor1[x] == 48)
					armazena = 0;
				else{
					if((int)valor1[x] == 49)
						armazena = 1;
					else{
						if((int)valor1[x] == 50)
							armazena = 2;
						else{
							if((int)valor1[x] == 51)
								armazena = 3;
							else{
								if((int)valor1[x] == 52)
									armazena = 4;
								else{
									if((int)valor1[x] == 53)
										armazena = 5;
									else{
										if((int)valor1[x] == 54)
											armazena = 6;
										else{
											if((int)valor1[x] == 55)
												armazena = 7;
										}
									}
								}
							}
						}		
					}
				}
			potencia = bin*armazena;
			valorFinal = valorFinal + potencia;
			y++;
		}
		cout << valorFinal << endl;
	};
	/*--------------------------------------------------------------------------------------------------*/


	/*------------------------Função para Conversão de Octal para Hexadecimal---------------------------*/
	void octalHexadecimal(string valor1){
		int tamanho = valor1.length();
		int bin, potencia, valorFinal, armazena = 0, y = 0, recebe;
		stringstream resultado;
		string resultadoFinal;

		for(int x = tamanho-1; x >= 0; x--){
			bin = pow(8, y);
			if((int)valor1[x] == 48)
					armazena = 0;
				else{
					if((int)valor1[x] == 49)
						armazena = 1;
					else{
						if((int)valor1[x] == 50)
							armazena = 2;
						else{
							if((int)valor1[x] == 51)
								armazena = 3;
							else{
								if((int)valor1[x] == 52)
									armazena = 4;
								else{
									if((int)valor1[x] == 53)
										armazena = 5;
									else{
										if((int)valor1[x] == 54)
											armazena = 6;
										else{
											if((int)valor1[x] == 55)
												armazena = 7;
										}
									}
								}
							}
						}		
					}
				}
			potencia = bin*armazena;
			valorFinal = valorFinal + potencia;
			y++;
		}
		
		int valor = valorFinal;
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
		int tam =  resultadoFinal.length();
		cout << "  VALOR EM HEXADECIMAL: ";
		for(int y = tam-1; y >= 0; y--){
			cout << resultadoFinal[y];
		}
		resultadoFinal.clear();
		valorFinal = 0;
	};
	/*--------------------------------------------------------------------------------------------------*/



	/*------------------------Função para Conversão de Octal para Binário------------------------------*/
	void octalBinario (string valor1){		
		int tamanho = valor1.length();
		int bin, potencia, valorFinal, armazena = 0, y = 0;

		for(int x = tamanho-1; x >= 0; x--){
			bin = pow(8, y);
			if((int)valor1[x] == 48)
					armazena = 0;
				else{
					if((int)valor1[x] == 49)
						armazena = 1;
					else{
						if((int)valor1[x] == 50)
							armazena = 2;
						else{
							if((int)valor1[x] == 51)
								armazena = 3;
							else{
								if((int)valor1[x] == 52)
									armazena = 4;
								else{
									if((int)valor1[x] == 53)
										armazena = 5;
									else{
										if((int)valor1[x] == 54)
											armazena = 6;
										else{
											if((int)valor1[x] == 55)
												armazena = 7;
										}
									}
								}
							}
						}		
					}
				}
			potencia = bin*armazena;
			valorFinal = valorFinal + potencia;
			y++;
		}

		int rest, z = 0;
		int octalBin;
		string  result;
		stringstream conversao;
		rest = valorFinal;
	
		while(rest != 0){
			octalBin = rest%2;
			rest = rest/2;
			conversao << octalBin;
			result = conversao.str();
			z++;
			cont++;
			
		}
		conversao.str("");
		cout << "  VALOR EM BINÁRIO: ";
		for(int o = cont-1; o >= 0; o--){
			cout << "" << result[o];
		}
		result.clear();
		valorFinal = 0;

	};
	/*--------------------------------------------------------------------------------------------------*/

	/*------------------------Função para Conversão de Hexadecimal para Decimal-------------------------*/
	void hexadecimalDecimal(string valor1){
		int tamanho = valor1.length();
		int resultado = 0, bin = 0, potencia = 0, resultadoFinal = 0, y = 0;

		for(int x = tamanho-1; x >= 0; x--){
			bin = pow(16, y);
			if(valor1[x] == 0)
			 	resultado = 0;
			else if(valor1[x] == '1')
				resultado = 1;
			else if(valor1[x] == '2')
				resultado = 2;
			else if(valor1[x] == '3')
				resultado = 3;
			else if(valor1[x] == '4')
				resultado = 4;
			else if(valor1[x] == '5')
				resultado = 5;
			else if(valor1[x] == '6')
				resultado = 6;
			else if(valor1[x] == '7')
				resultado = 7;
			else if(valor1[x] == '8')
				resultado = 8;
			else if(valor1[x] == '9')
				resultado = 9;
			else if((int)valor1[x] == 97)
				resultado = 10;
			else if((int)valor1[x] == 98)
				resultado = 11;
			else if((int)valor1[x] == 99)
				resultado = 12;
			else if((int)valor1[x] == 100)
				resultado = 13;
			else if((int)valor1[x] == 101)
				resultado = 14;
			else if((int)valor1[x] == 102)
				resultado = 15;

			potencia = bin*resultado;
			resultadoFinal = resultadoFinal + potencia;
			y++;			
		}
		cout << "  VALOR EM DECIMAL: ";
		cout << resultadoFinal;
	};
	/*--------------------------------------------------------------------------------------------------*/

	void hexadecimalBinario(string valor1){
		int tamanho = valor1.length();
		int *hexadecimalBin = new int[tamanho];
		int resultado;

		for(int x = 0; x < tamanho; x++){
			if((int)valor1[x] == 48){
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

	/*------------------------Função para Conversão de Hexadecimal para Octal-------------------------*/
	void hexadecimalOctal(string valor1){
		int tamanho = valor1.length();
		int resultado = 0, bin = 0, potencia = 0, resultadoFinal = 0, y = 0;

		for(int x = tamanho-1; x >= 0; x--){
			bin = pow(16, y);
			if(valor1[x] == 0)
			 	resultado = 0;
			else if(valor1[x] == '1')
				resultado = 1;
			else if(valor1[x] == '2')
				resultado = 2;
			else if(valor1[x] == '3')
				resultado = 3;
			else if(valor1[x] == '4')
				resultado = 4;
			else if(valor1[x] == '5')
				resultado = 5;
			else if(valor1[x] == '6')
				resultado = 6;
			else if(valor1[x] == '7')
				resultado = 7;
			else if(valor1[x] == '8')
				resultado = 8;
			else if(valor1[x] == '9')
				resultado = 9;
			else if((int)valor1[x] == 97)
				resultado = 10;
			else if((int)valor1[x] == 98)
				resultado = 11;
			else if((int)valor1[x] == 99)
				resultado = 12;
			else if((int)valor1[x] == 100)
				resultado = 13;
			else if((int)valor1[x] == 101)
				resultado = 14;
			else if((int)valor1[x] == 102)
				resultado = 15;

			potencia = bin*resultado;
			resultadoFinal = resultadoFinal + potencia;
			y++;			
		}
		int valor = resultadoFinal;
		int decimalOct;
		string result;
		stringstream conversao;
		int z, cont = 0;

		while(valor != 0){
			decimalOct = valor%8;
			valor = valor/8;
			conversao << decimalOct;
			result = conversao.str();
			z++;
			cont++;
		}

		cout << "  VALOR EM OCTAL: ";
		for(int o = cont-1; o >= 0; o--){
			cout << "" << result[o];
		}
	}
	/*--------------------------------------------------------------------------------------------------*/

		
};