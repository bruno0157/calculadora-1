#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Arthur Alves dos Santos | Bruno Henrique Santos Niz

//1
float funcSoma(float a1, float b1, float c1) {
	printf("Informe o 1� n�mero: ");
	scanf("%f", &a1);
	printf("\nInforme o 2� n�mero: ");
	scanf("%f", &b1);
	printf("\nInforme o 3� n�mero: ");
	scanf("%f", &c1);
	float total = a1+b1+c1;
	return total;
}
//2
float funcSubtracao(float a1, float b1) {
	printf("Informe o minuendo: ");
	scanf("%f", &a1);
	printf("\nInforme o subtraendo: ");
	scanf("%f", &b1);
	float diferenca = a1-b1;
	return diferenca;
}
//3
float funcMultiplicacao(float a1, float b1, float c1) {
	printf("Informe o 1� n�mero: ");
	scanf("%f", &a1);
	printf("\nInforme o 2� n�mero: ");
	scanf("%f", &b1);
	printf("\nInforme o 3� n�mero: ");
	scanf("%f", &c1);
	float produto = a1 * b1*c1;
	return produto;
}
//4
float funcDivisao(float a1, float b1) {
	printf("Informe o dividendo: ");
	scanf("%f", &a1);
	printf("\nInforme o divisor: ");
	scanf("%f", &b1);
	float quociente = a1/b1;
	return quociente;
}
//5
float funcExponenciacao(float a1, float b1) {
	printf("Informe a base: ");
	scanf("%f", &a1);
	printf("\nInforme o expoente: ");
	scanf("%f", &b1);
	float potencia = pow(a1,b1);
	return potencia;
}
//6
float funcRadiciacao(float a1) {
	printf("Informe um n�mero: ");
	scanf("%f", &a1);
	float raiz = sqrt(a1);
	return raiz;
}
//7
int funcModulo(int a1, int b1) {
	printf("Informe a dividendo: ");
	scanf("%d", &a1);
	printf("\nInforme o divisor: ");
	scanf("%d", &b1);
	int resto = a1 % b1;
	return resto;
}
//8
double funcBhaskara(double a1, double b1, double c1) {
	double delta = 0, x1 = 0, x2 =0;

	printf("Informe o coeficiente A: ");
	scanf("%lf", &a1);
    if (a1 == 0) {
        printf("\nO coeficiente A n�o pode ser zero.\n\n");
        return;
    }
	printf("\nInforme o coeficiente B: ");
	scanf("%lf", &b1);
	printf("\nInforme o coeficiente C: ");
	scanf("%lf", &c1);

	delta = (b1*b1) - (4 * a1 * c1);
    if (delta < 0) {
        printf("\nN�o h� ra�zes reais, pois o discriminante � negativo.\n\n");
        return;
    }

	x1 = (-(b1) + sqrt(delta))/(2 * a1);
	x2 = (-(b1) - sqrt(delta))/(2 * a1);

	printf("\nRa�zes: x1 = %.2lf | x2 = %.2lf \n\n", x1, x2);

	return x1, x2;
}

int main () {

	setlocale (LC_ALL, "");

	int resp, modulo = 0;
	float a = 0, b = 0, c = 0,
	soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0, exponenciacao = 0, radiciacao = 0;
	double bhaskara = 0;

	do {
		printf("--CALCULADORA--\n");
		printf("\nDigite [1] para realizar uma soma entre tr�s n�meros reais: ");
		printf("\nDigite [2] para realizar uma subtra��o entre dois n�meros reais: ");
		printf("\nDigite [3] para realizar uma multiplica��o entre tr�s n�meros reais: ");
		printf("\nDigite [4] para realizar uma divis�o entre dois n�meros reais: ");
		printf("\nDigite [5] para realizar uma exponencia��o entre dois n�meros reais: ");
		printf("\nDigite [6] para calcular a raiz quadrada de um n�mero real: ");
		printf("\nDigite [7] para encontrar o resto de uma divis�o entre dois n�meros reais: ");
		printf("\nDigite [8] para calcular as ra�zes de uma fun��o quadr�tica, dados seus tr�s coeficientes: \n");
		printf("\nDigite [9] para encerrar o programa: \n");
		printf("\nResposta: ");
		scanf("%d", &resp);

		switch (resp) {
			case 1:
				system("cls");

				soma = funcSoma(a, b, c);
				printf("\nResultado da soma: %.2f\n\n", soma);
				break;

            case 2:
                system ("cls");
                subtracao = funcSubtracao(a,b);
                printf("\nResultado da subtra��o: %.2f\n\n", subtracao);
                break;

            case 3:
                system ("cls");
                multiplicacao = funcMultiplicacao(a,b,c);
                printf("\nResultado da multiplica��o: %.2f\n\n", multiplicacao);
                break;

            case 4:
                system ("cls");
                divisao = funcDivisao(a,b);
                printf("\nResultado da divis�o: %.2f\n\n", divisao);
                break;

            case 5:
                system ("cls");
                exponenciacao = funcExponenciacao(a,b);
                printf("\nResultado da exponencia��o: %.2f\n\n", exponenciacao);
                break;

            case 6:
                system ("cls");
                radiciacao = funcRadiciacao(a);
                printf("\nRa�z quadrada do n�mero informado: %.2f\n\n", radiciacao);
                break;

            case 7:
                system ("cls");
                modulo = funcModulo(a,b);
                printf("\nResto da divis�o: %d\n\n", modulo);
                break;

			case 8:
				system ("cls");

				bhaskara = funcBhaskara(a, b, c);
				break;
		}
	} while (resp != 9);

    return 0;
}