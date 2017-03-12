/** 
 * @file	area.cpp
   @brief	Arquivo corpo com a implementacoes das funcoes que realizam
 *   				o calculo de areas de viguras geometricas planas e espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	11/03/2017
 * @date 	11/03/2017
 * @sa		area.h
 */

#include "area.h"


/**
 * @brief Funcao que calcula a area de um triangulo
 * @param base Medida da base do triangulo
 * @param altura Medida da altura do triangulo 
 * @return Area do triangulo
 */
float areaTriangulo(float base, float altura) {
 	return (base * altura) / 2;
}


/**
 * @brief Funcao que calcula a area de um retagulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 * @return Area do retangulo
 */
float areaRetangulo(float base, float altura){
	return base * altura;
}


/**
 * @brief Funcao que calcula a area de um quadrado
 * @param lado Medida do lado do quadrado
 * @return Area do quadrado
 */
float areaQuadrado(float lado){
	return lado * lado;
}


/**
 * @brief Funcao que calcula a area de um circulo
 * @param raio Medida do raio do circulo
 * @return Area do circulo
 */
float areaCirculo(float raio){
	return PI * raio * raio;
}


/**
 * @brief Funcao que calcula a area de uma piramide
 * @param area_b Medida da area da base da piramide
 * @param area_l Medida da area lateral da piramide
 * @return Area da piramide
 */
float areaPiramide(float area_b, float area_l){
	return area_b + area_l;
}


/**
 * @brief Funcao que calcula a area de um cubo
 * @param aresta Medida da aresta do cubo
 * @return Area do cubo
 */
float areaCubo(float aresta){
	return 6 * aresta * aresta;
}


/**
 * @brief Funcao que calcula a area de uma paralepipedo
 * @param aresta1 Medida da primeira aresta do paralepipedo
 * @param aresta2 Medida da segunda aresta do paralepipedo
 * @param aresta3 Medida da terceira aresta do paralepipedo
 * @return Area do paralepipedo
 */
float areaParalelepipedo(float aresta1, float aresta2, float aresta3){
	return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3); 
}


/**
 * @brief Funcao que calcula a area da Esfera
 * @param raio Medida do raio da esfera
 * @return Area da esfera
 */
float areaEsfera(float raio){
	return 4 * PI * raio * raio;
}

