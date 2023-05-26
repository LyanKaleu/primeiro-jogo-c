#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("        ***************************\n");
    printf("        * Bem vindo ao NOSSO jogo *\n");
    printf("        ***************************\n");

    printf("                                        \n");
    printf("                    ,@,                 \n");
    printf("                   ,@@@,                \n");
    printf("                  ,@@@@@,               \n");
    printf("           `@@@@@@@@@@@@@@@@@@@`        \n");
    printf("             `@@@@@@@@@@@@@@@`          \n");
    printf("               `@@@@@@@@@@@`            \n");
    printf("              ,@@@@@@`@@@@@@,           \n");
    printf("              @@@@`     `@@@@           \n");
    printf("             ;@`           `@;          \n");
    printf("               _   _   _   _            \n");
    printf("              (   (   (   |_)           \n");
    printf("               ~   ~   ~  |             \n\n");
	
	
	srand(time(0));
	int numerosecreto = rand() % 100;
	int acertou = 0;
	int chute;
	int tentativas = 1;
	double pontos = 1000;
	int i;
	
	int nivel;
	printf("Qual o n�vel de dificuldade?\n");
	printf("(1) F�CIL\n(2) M�DIO\n(3) DIF�CIL\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);
	
	int numero_de_tentativas;
	
	switch(nivel)
	{
	case 1:
		numero_de_tentativas = 20;
		break;
	
	case 2:
		numero_de_tentativas = 15;
		break;
	
	case 3:
		numero_de_tentativas = 6;
		break;
	
	default:
		printf("Op��o inv�lida!");
		break;
	}
	
	for(i = 1; i <= numero_de_tentativas; i++){
		printf("Tentativa %d\n", tentativas);
		printf("Qual � o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		
		if(chute < 0){
			printf("Voc� n�o pode chutar n�meros negativos!\n");
			continue;
		}
		
		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
		
		if(acertou){
			break;
		}
		
		else if(maior){
			printf("Seu chute foi maior que o n�mero secreto\n");
		}
			
		else{
			printf("Seu chute foi menor que o n�mero secreto\n");
		}
		
		tentativas++;
		
		double pontosPerdidos = abs(chute - numerosecreto) / (double)2;
		pontos -= pontosPerdidos;
	}
	
	printf("Fim de jogo!\n");
	
	if(acertou){
	
	printf("        (@@@@@_                                                 \n");
    printf("        |     @@                                                \n");
    printf(" |||    ) ~/~ @@               Greetings from Comrade Stalin    \n");
    printf(" |  '   [  ^  ]                                                 \n");
    printf(" \\__/\\   `----                                                \n");
    printf("  \\   \\~~~     ~~~~\\                                         \n");
    printf(" ----------------------------                                   \n\n");
    printf("Acert� mizer�vi! Bora outra?\n");
    printf("Voc� acertou em %d tentativas. Tente fazer melhor!\n", tentativas);
    printf("Voc� fez %.1f pontos!\n", pontos);
	}else{
		printf("Voc� j� foi melhor. Tente novamente\n");
        printf("        |   ,                                                   \n");
        printf("    | O /                 O                                     \n");
        printf("    |--\\            __---=/\\>                                 \n");    
        printf("      / \\                __/__                                  \n");
        printf("      \\  \\               \\    '     GAME OVER CAPITALIST!    \n\n");
	}
	
	return 0;
}
