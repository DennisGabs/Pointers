#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	float notas[4];
}Aluno;

void main(){
	Aluno dennis;
	dennis.matricula = 123;
	dennis.notas[0] = 10.0;
	dennis.notas[1] = 9.9;
	dennis.notas[2] = 9.7;
	dennis.notas[3] = 9.9;
	
	printf("Matricula Dennis %d", dennis.matricula);

	Aluno *a = &dennis; //Apontando para o mesmo endereco de memoria
	(*a).matricula = 245; // Altera tando o valor da matricula de a, como de dennis.
	
	printf("\nDados do aluno: %d", a->matricula); 
	printf("\nMatricula Dennis %d", dennis.matricula);
}