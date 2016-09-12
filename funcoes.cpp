/*
 * funcoes.cpp
 *
 *  Created on: 11 de set de 2016
 *      Author: Dales Ewerton
 */

#include "funcoes.h"

#define QTD_NUMEROS_LIDOS 15
#define QTD_NUMEROS_HISTOGRAMA 10

/*
 * Gera um histograma recebendo como parametros a
 * lista de números lidos e variavel que receberá o histograma
 * O método utiliza efeito colateral para gerar o histograma
 */
void geraHistograma(float lista[QTD_NUMEROS_LIDOS], float histograma[QTD_NUMEROS_HISTOGRAMA][2]){

	//inicializando a matriz
	for (int i = 0 ; i < QTD_NUMEROS_HISTOGRAMA ; i++){
		histograma[i][0] = i;
		histograma[i][1] = 0;
	}

	for(int i = 0; i < QTD_NUMEROS_LIDOS ; i++){
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
/*
 * Método que calcula a média de 15 numeros entre 0-10
 * Recebe como parametro um array de numeros do tipo ponto flutuante
 * Retorna um número ponto flutuante
 */
float calculaMedia(float lista[QTD_NUMEROS_LIDOS]){
	float media = 0;

	for(int i = 0 ; i < QTD_NUMEROS_LIDOS ; i++){
		media += lista[i];
	}

	media /= 15.0;

	return media;
}
/*
 * Calcula o desvio padrão
 * Recebe como parametros um array contendo o histograma (Numero,Frequencia de
 * Ocorrencia), a média dos numeros e local onde será armazenado o
 * Array de desvio padrão dos números do histograma
 * Utiliza efeito colateral para armazenar o devio no local
 * recebido como parametro
 */
void calculaDesvioPadrao(float histograma[QTD_NUMEROS_HISTOGRAMA][2],
							float media, float desvioPadrao[QTD_NUMEROS_HISTOGRAMA][2]){

	for(int i = 0 ; i < QTD_NUMEROS_HISTOGRAMA ; i++){
		float desvio = sqrt(pow((histograma[i][0] - media), 2));
		desvioPadrao[i][0] = i;
		desvioPadrao[i][1] = desvio;
	}
}
/*
 * Calcula o desvio padrão da média
 * Recebe como parametro o desvio padrao de 10 elementos
 * e a média entre eles
 * Retorna o desvio padrao da média
 */
float calculaDesvioPadraoDaMedia(float desvio[QTD_NUMEROS_HISTOGRAMA][2], float media){

	float desvioMedio = 0;

	for(int i = 0; i < QTD_NUMEROS_HISTOGRAMA; i++){
		desvioMedio += desvio[i][1];
	}

	desvioMedio /= QTD_NUMEROS_HISTOGRAMA;

	return desvioMedio;

}

