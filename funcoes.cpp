/*
 * funcoes.cpp
 *
 *  Created on: 11 de set de 2016
 *      Author: Dales Ewerton
 */

#include <funcoes.h>

void geraHistograma(float lista[15], float histograma[10][2]){

	//inicializando a matriz
	for (int i = 0 ; i < 10 ; i++){
		histograma[i][0] = i;
		histograma[i][1] = 0;
	}

	for(int i = 0; i < 15 ; i++){
		int num = lista[i];

		switch (num){
			case 0:
				histograma[num][1]+= 1/15.0;
				break;
			case 1:
				histograma[num][1]+= 1/15.0;
				break;
			case 2:
				histograma[num][1]+= 1/15.0;
				break;
			case 3:
				histograma[num][1]+= 1/15.0;
				break;
			case 4:
				histograma[num][1]+= 1/15.0;
				break;
			case 5:
				histograma[num][1]+= 1/15.0;
				break;
			case 6:
				histograma[num][1]+= 1/15.0;
				break;
			case 7:
				histograma[num][1]+= 1/15.0;
				break;
			case 8:
				histograma[num][1]+= 1/15.0;
				break;
			case 9:
				histograma[num][1]+= 1/15.0;
				break;
			default:
				cout << "Numero invalido na lista." << endl;
				break;
		}
	}

}

float calculaMedia(float lista[15]){
	float media = 0;

	for(int i = 0 ; i < 15 ; i++){
		media += lista[i];
	}

	media /= 15.0;

	return media;
}

void calculaDesvioPadrao(float histograma[10][2],float media, float desvioPadrao[10][2]){

	for(int i = 0 ; i < 10 ; i++){
		float desvio = sqrt(pow((histograma[i][0] - media), 2));
		desvioPadrao[i][0] = i;
		desvioPadrao[i][1] = desvio;
	}
}

float calculaDesvioPadraoDaMedia(float desvio[10][2], float media){

	float desvioMedio = 0;

	for(int i = 0; i < 10; i++){
		desvioMedio += desvio[i][1];
	}

	desvioMedio /= 10;

	return desvioMedio;

}

