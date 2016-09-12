/*
 * main.cpp
 *
 *  Created on: 11 de set de 2016
 *      Author: Dales Ewerton
 */

#include<cstdlib>

using namespace std;

#define QTD_NUMEROS_LIDOS 15
#define QTD_NUMEROS_HISTOGRAMA 10
int main(int argc, char* argv[]){

	float listaNumeros[QTD_NUMEROS_LIDOS];
	float histograma[10][2];
	float media;
	float desvioPadrao[10][2];
	float desvioMedio;

	//Armazenando os numeros lidos na linha de comando em um Array
	for (int i = 1; i <= QTD_NUMEROS_LIDOS; ++i) {
		listaNumeros[i-1] = atoi(argv[i]);
	}

	geraHistograma(listaNumeros, histograma);
	media = calculaMedia(listaNumeros);

	calculaDesvioPadrao(histograma, media, desvioPadrao);
	desvioMedio = calculaDesvioPadraoDaMedia(desvioPadrao, media);

	//Imprimindo Histograma
	for(int i = 0 ; i < QTD_NUMEROS_HISTOGRAMA ; ++i){
		cout << "Numero: " << histograma[i][0]
				<< " ---- Frequencia de ocorrencia: "
				<< histograma[i][1] << endl;
	}

	//Imprimindo media
	cout << "\nMedia: " << media << endl << endl;

	//Imprimindo Desvio Padrao
	for(int i = 0 ; i < QTD_NUMEROS_HISTOGRAMA ; i++){
		cout << "Numero: " << desvioPadrao[i][0]
				<< " ---- Desvio: "
				<< desvioPadrao[i][1] << endl;
	}

	//Imprimindo Desvio Padrao da Media
	cout << "Desvio padrao da media: " << desvioMedio << endl;

	return 0;
}

