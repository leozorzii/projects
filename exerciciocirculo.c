#include <stdio.h>

int main(){
//3) Escreva um algoritmo para calcular a área de um círculo, com base em um raio digitado pelo usuário.
	float area, raio;
	printf("digite o raio do circulo:");
	scanf("%f",&raio);
	area = 3.14 * (raio*raio);
	printf("a area do circulo seria:%f", area);

	getch();
	}
