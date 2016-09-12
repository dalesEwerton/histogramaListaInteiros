/*
 * funcoes.h
 *
 *  Created on: 11 de set de 2016
 *      Author: Dales Ewerton
 */

#ifndef FUNCOES_FUNCOES_H_
#define FUNCOES_FUNCOES_H_

#include <iostream>
#include<math.h>

using namespace std;

void geraHistograma(float lista[15], float histograma[10][2]);
float calculaMedia(float lista[15]);
int main();
void calculaDesvioPadrao(float histograma[10][2],
		float media, float desvioPadrao[10][2]);
float calculaDesvioPadraoDaMedia(float desvio[10][2], float media);

#endif /* FUNCOES_FUNCOES_H_ */