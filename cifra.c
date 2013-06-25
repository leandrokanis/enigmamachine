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


// define a posição de cada letra no alfabeto
string alfabeto[27] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k",
					   "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
					   "w", "x", "y", "z", "\0"};


// retorna o a posicao de uma letra
int Endereco(string letra){

	  int cifra = 0, i=0;
	  while (alfabeto[i] != '\0'){
		  if(letra == alfabeto[i]){
			  cifra = i;
			  break;
		  }
		  i++;
	  }

	  return cifra;
}

// funcao de encriptacao
string Cifrar(string nome, string chave, int contador){

	int posicao = (Endereco(nome) + Endereco(chave) + contador) % 26;
	string cifra = alfabeto[posicao];

	return cifra;
}

// funcao de desencriptacao
string Descifrar(string nomeCifrado, string chave, int contador){

	int posicao = (Endereco(nomeCifrado) - Endereco(chave) - contador) % 26;

	// para achar uma posicao entre 0 e 26
	if(posicao<0){
		posicao = posicao+26;
	}

	string descifra = alfabeto[posicao];

	return descifra;
}


int main(void){

	string mensagem = "l"; // consegui implementar apenas uma letra
	string chave = "j";
	int contador = 10;

	// encripta
	string cifra = Cifrar(mensagem, chave, contador);
	puts(cifra);

	// desencripta
	string descifra = Descifrar(cifra, chave, contador);
	puts(descifra);

	char nome[7] = "leandro";
	int c=0;

	string o = Cifrar(nome[1], chave, contador);

	printf("%s", o);

	return 0;
}
