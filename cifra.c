/*
 ============================================================================
 Name        : Cifra Enigma Machine
 Author      : Leandro Alves - 10/0110304
 Version     : 1.0
 Copyright   : CC
 Description : Criptografia
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char * string;

int Endereco(string letra){

	// define a posição de cada letra no alfabeto

	string alfabeto[25];
	  alfabeto[0] = "a";
	  alfabeto[1] = "b";
	  alfabeto[2] = "c";
	  alfabeto[3] = "d";
	  alfabeto[4] = "e";
	  alfabeto[5] = "e";
	  alfabeto[6] = "f";
	  alfabeto[7] = "g";
	  alfabeto[8] = "h";
	  alfabeto[9] = "i";
	  alfabeto[10] = "j";
	  alfabeto[11] = "k";
	  alfabeto[12] = "l";
	  alfabeto[13] = "m";
	  alfabeto[14] = "n";
	  alfabeto[15] = "o";
	  alfabeto[16] = "p";
	  alfabeto[17] = "q";
	  alfabeto[18] = "r";
	  alfabeto[19] = "s";
	  alfabeto[20] = "t";
	  alfabeto[21] = "v";
	  alfabeto[22] = "w";
	  alfabeto[23] = "x";
	  alfabeto[24] = "y";
	  alfabeto[25] = "z";
	  alfabeto[26] = "\0";

	  int cifra = 0;

	  int i;

	  // retorna o a posicao de uma letra
	  while (alfabeto[i] != '\0'){
		  if(letra == alfabeto[i]){
			  cifra = i;
			  break;
		  }
		  i++;
	  }

	  fprintf("%d", cifra);
	  return cifra;
}

string Cifrar(string nome, string chave, int contador){

	string alfabeto[25];
	  alfabeto[0] = "a";
	  alfabeto[1] = "b";
	  alfabeto[2] = "c";
	  alfabeto[3] = "d";
	  alfabeto[4] = "e";
	  alfabeto[5] = "e";
	  alfabeto[6] = "f";
	  alfabeto[7] = "g";
	  alfabeto[8] = "h";
	  alfabeto[9] = "i";
	  alfabeto[10] = "j";
	  alfabeto[11] = "k";
	  alfabeto[12] = "l";
	  alfabeto[13] = "m";
	  alfabeto[14] = "n";
	  alfabeto[15] = "o";
	  alfabeto[16] = "p";
	  alfabeto[17] = "q";
	  alfabeto[18] = "r";
	  alfabeto[19] = "s";
	  alfabeto[20] = "t";
	  alfabeto[21] = "v";
	  alfabeto[22] = "w";
	  alfabeto[23] = "x";
	  alfabeto[24] = "y";
	  alfabeto[25] = "z";
	  alfabeto[26] = "\0";

	// funcao de encriptacao
	int posicao = (Endereco(nome) + Endereco(chave) + contador) % 26;
	string cifra = alfabeto[posicao];

	return cifra;
}

// TODO funcao de descifrar

int main(void){

	string d = Cifrar("a","j", 1);
	puts(d);

	return 0;
}
