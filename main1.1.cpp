
/*� necessario concertar alguns pontos.
2   - Faz-se necessario a cria��o de quatro novas fun��es para melhor funcionamento do c�digo.
3   - O escopo das novas fun��es j� foi criado, cada uma tem sua propria explica��o no cabe�alho da mesma
4   - Faz-se necessario criar duas matrizes, 
4.1 - Uma matriz para os usuarios j� criados, todos varchar com 70x5.
4.2 - Uma matriz para as datas de 10x2.
5   - Faz-se necessario a reten��o a apresenta��o dos dados da consulta.
6   - Faz-se necessario a verifica��o dos dados recebidos no cadastro, para que
6.1 - N�o se envie numeros em locais em que s� podem receber letras.
6.2 - N�o se envie letras em locais onde s� pode receber valores.
6.3 - N�o se envie dados j� registrados por outro usuario.
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#define SIZE 200
//cria��o de variaveis globais
char nome[SIZE] [70];
char nascimento[SIZE][10];
char email[SIZE] [50];
char cpf[SIZE][50];
int numeroSUS;
int consultaOp, nummedico, unid, op, cpfInt[SIZE], horario;
					 
//mensagem de erro
void Erro(){
	printf("\n________________________________________________________________\n");
	printf("\n__________________________ SUS UniRuy __________________________\n");  
	printf("\n___________________________ !!!Erro!!! _________________________\n");
	printf("\n__                                                            __\n");
	printf("\n__           Valor digitado n�o confere com as op��es         __\n");
	printf("\n__                                                            __\n");
	printf("\n__               Favor digitar um valor coerente	     		__\n");
	printf("\n________________________________________________________________\n");
	printf("\n_______________________ UniRuy Consultas _______________________\n");
	printf("\n________________________________________________________________\n");
}

void Cadastro(){

	static int linha;
	int opCadastro;
	do{
	//obten��o dos dados do cliente
		fflush(stdin);
		printf("\nPor favor, digite seu nome completo: \n\n\n");
		gets(nome[linha]);
		
		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n \nDigite sua data de nascimento:\n\n\n");
		printf("\nEx.: 25 12 1984 \n\n\n");
		gets(nascimento[linha]);
		
		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n \nDigite seu e-mail:\n\n\n");
		printf("\nEx.: exemplo@email.com \n\n\n");
		gets(email[linha]);
		
		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n \nDigite seu CPF: \n\n\n");
		printf("\nEx.: 000.000.000-00 \n\n\n");
		gets(cpf[linha]);
		
		//limpa tela
		system("cls");
		printf("\n\n Digite o Seu numero SUS.\n\n\n");
		printf("\nEx.: 123456 Sem Pontos.\n");
		scanf("%d",&numeroSUS);
		cpfInt[linha] = 1;
		
	
				//clausula de saida do looping.
		printf("\n \nDigite 1 para continuar com a marca��o, ou outro valor para sair\n \n");
		scanf("%d", &op);
		linha++;
		
		//limpa tela
		system("cls");
			//o sistema est� terminando aqui, deve ser concertado.
	}while(opCadastro==1);
	
	
}
void Pesquisa() {
	char cpfPesquisa[50];
	char emailPesquisa[50];
	int i;
	int opPesquisa;
	do{
		printf("Digite 1 para pesquisar por CPF ou 2 para pesquisar por email: \n");
		scanf("%d", &opPesquisa);
		switch(opPesquisa) {
			case 1:
				printf("\nDigite o CPF: \n");
				scanf("%s", &cpfPesquisa);
				for(i=0;i<SIZE;i++) {
					if(strcmp(cpf[i], cpfPesquisa)==0) {
						printf("\nNome: %s\nData de Nascimento: %s\nEmail: %s\nCPF: %s", nome[i], nascimento[i], email[i], cpf[i]);
						break;
					}
					if(i==199){
						i+=1;
						//printf("\n%d",i);
					}
					if(strcmp(cpf[i], cpfPesquisa)!=0 && i == SIZE){
						printf("Pessoa n�o encontrada !");
					}
				}
				break;
			case 2: 
				printf("\nDigite o E-mail: ");
				scanf("%s", emailPesquisa);
				for(i=0; i<SIZE; i++) {
					if(strcmp(email[i], emailPesquisa)==0) {
						printf("\nNome: %s\nData de Nascimento: %s\nEmail: %s\nCPF: %s", nome[i], nascimento[i], email[i], cpf[i]);
					}
					if(i==199){
						i+=1;
						//printf("\n%d",i);
					}
					else if(strcmp(email[i], emailPesquisa)!=0 && i == SIZE){
						printf("Pessoa n�o encontrada !");
					}
				}
				break;
			default:
				printf("\n Op��o invalida");	
				break;
		}
		printf("\n\nDigite 1 para continuar pesquisando ou outro valor para sair: ");
		scanf("%d", &opPesquisa);
		system("cls");
	}while(opPesquisa==1);	
}
//cria��o das consultas
void CriarConsulta(){
	printf("\n\n_________________________ ESPECIALIDADES _________________________\n\n");
    printf("\n                      1 - Cl�nico Geral.\n");
    printf("\n                      2 - Cardiologista.\n");
    printf("\n                      3 - Oftalmologista.\n");
	printf("\n Escolha o n�mero da op��o correspondente a especialidade desejada:\n\n");
	//recolhimento de dados
	scanf("%d", &consultaOp);
    system("cls");
    switch (consultaOp){
    	case 01:
    		ClinicoGeral();
    		break;
			case 02:
				Cardiologia(consultaOp);
				break;
				case 03:
					Oftalmologista(consultaOp);
					break;
					default:
						Erro();
						break;
						  		
	}
} 

//cria��o de arquivode consulta
/*
void Arquivo(){
	if(consultaOp==1){
		//se a area e clinica geral
		if(nummedico == 1 && unid == 1 && horario == 1){
			//Caso tudo seja 1
		}
		if(nummedico == 1 && unid == 2 && horario == 2){
			//Caso apenas o medico seja 1
		}
	}
}
*/

// caminhos das consultas(marca��es).
void ClinicoGeral(){
	//Primeira Op��o de especialidade.
	printf("\n\n_________________________ ESPECIALISTAS _________________________\n\n");  
  	printf("\n\n_________________________ Cl�nica Geral _________________________\n\n");
	printf("\n                      1 - Dr. Huberto Castro.\n\n");
    printf("\n                      2 - Dr�. Liandra Cerqueira.\n\n");
    printf("\n                      3 - Dr. Magno Flor�ncio.\n\n");
    printf("\n_________________________ ESPECIALISTAS _________________________\n");
    
    printf("\nEscolha o n�mero da op��o correspondente ao m�dico de sua prefer�ncia:\n\n");
	//recolhimento de dados
	scanf("%d", &nummedico);
	//limpa tela
	system("cls");
	
	//Unidades
	printf("\n\n1 - Hospital Funda��o Bahiana de Cardiologia\n");
	printf("\n\n2 - Cl�nica Centrocor - Cl�nica de Cardiologia em Salvador\n");
	printf("\n\n3 - Unidade Procard�aco\n");	
	printf("\n\nEscolha o n�mero da op��o correspondente a unidade de sua prefer�ncia:\n\n");
	//recolhimento de dados
	scanf("%d", &unid);
	//limpa tela
	system("cls");
	
	//Texto para apresenta��o das possiveis datas.
	printf("Os possiveis horarios s�o\n");
	
	printf("1 - 18/11/2022, 15:00 horas");
	printf("2 - 18/11/2022, 10:00 horas");
	printf("3 - 20/11/2022, 11:00 horas");
	scanf("%d",&horario);
	//limpeza de tela
	system("cls");
	printf("Parabens a sua consulta foi registrada com sucesso\n");
	printf("O comprovante sera criado em segundos.\n.\n..\n...");
	//Arquivo();
	
	
}
void Cardiologia(){
	//Segunda op��o.
	printf("\n\n_________________________ ESPECIALISTAS __________________________\n");  
  	printf("\n\n__________________________ Cardiologia ___________________________\n");
	printf("\n__                      1 - Dr. Pedro Paulo Souza.                __\n");
    printf("\n__                      2 - Dr. Victor Almeida.                   __\n");
    printf("\n__                      3 - Dr. Robert de Jesus.                  __\n");
    printf("\n_________________________ ESPECIALISTAS ____________________________\n");
    printf("\nEscolha o n�mero da op��o correspondente ao m�dico de sua prefer�ncia:\n");
  	//recebendo a variavel  
    scanf("%d", &nummedico);
    
    //limpa tela
    system("cls");
    
    //Unidades
	printf("\n\n1 - Hospital Funda��o Bahiana de Cardiologia\n");
	printf("\n\n2 - Cl�nica Centrocor - Cl�nica de Cardiologia em Salvador\n");
	printf("\n\n3 - Unidade Procard�aco\n");	
	printf("\n\nEscolha o n�mero da op��o correspondente a unidade de sua prefer�ncia:\n\n");
	//recolhimento de dados
	scanf("%d", &unid);
	//limpa tela
	system("cls");
	
	//Texto para apresenta��o das possiveis datas.
	printf("Os possiveis horarios s�o\n");
	
	printf("18/11/2022, 15:00 horas");
	printf("18/11/2022, 10:00 horas");
	printf("20/11/2022, 11:00 horas");
	printf("25/11/2022, 16:00 horas");
	printf("31/11/2022, 17:00 horas");
	scanf("%d",&horario);
	//limpeza de tela
	system("cls");
	printf("Parabens a sua consulta foi registrada com sucesso\n");
	printf("O comprovante sera criado em segundos.\n.\n..\n...");
	//Arquivo();
}
void Oftalmologista(){
	//Terceira op��o
	printf("\n_________________________ ESPECIALISTAS __________________________\n");  
  	printf("\n__________________________ Oftamologia ___________________________\n");
  	printf("\n__                      1 - Dr�. Flavia Perelberg.              __\n");
    printf("\n__                      2 - Dr. Matheus Costa.                  __\n");
    printf("\n__                      3 - Dr. Daniel da Cruz.                 __\n");
    printf("\n_________________________ ESPECIALISTAS __________________________\n");	
    printf("\nEscolha o n�mero da op��o correspondente ao m�dico de sua prefer�ncia:\n");
	//recebendo a variavel  
	scanf("%d", &nummedico);
	
	//limpa tela
	system("cls");
	
	//Unidades
	printf("\n\n1 - Cl�nica Provision Oftalmologia\n");
	printf("\n\n2 - Hospital de Olhos\n");
	printf("\n\n3 - DayHORC Hospital dos Olhos\n");	
	printf("\n\nEscolha o n�mero da op��o correspondente a unidade de sua prefer�ncia:\n\n");
	//recolhimento de dados
	scanf("%d", &unid);
	//limpa tela
	system("cls");
	
	//Texto para apresenta��o das possiveis datas.
	printf("Os possiveis horarios s�o\n");
	
	printf("18/11/2022, 09:00 horas");
	printf("18/11/2022, 11:10 horas");
	printf("20/11/2022, 17:25 horas");
	printf("25/11/2022, 13:00 horas");
	printf("31/11/2022, 08:00 horas");
	scanf("%d",&horario);
	//limpeza de tela
	system("cls");
	printf("Parabens a sua consulta foi registrada com sucesso\n");
	printf("O comprovante sera criado em segundos.\n.\n..\n...");
	//Arquivo();
}

//varifica��o dos dados de cadastro
void VerificaCadastro(){
	
}


int main(void){
setlocale(LC_ALL,"");

    //estrutura de boas vindas.
    
    do{
	//estrutura de repeti��o para cadastro, existe um parametro de armazenamento implementado no c�digo.
	//texto de apresenta��o, necessario a estiliza��o
		printf("\n* --------------------- SISTEMA ---------------------- *\n");
		printf("\n* -------------------- SUS UniRuy -------------------- *\n ");
		printf("\n* Seja bem-vindo(a) ao sistema de marca��o de consultas! *\n ");
		printf("\n Para iniciar o atendimento escolha a op��o desejada:\n \n");
		printf("\n  1 - Cadastre-se. \n");
		printf("\n  2 - Consultar Cadastros.\n");
		printf("\n  3 - Marcar Consultas\n");
		printf("\n  4 -  Saida. \n");
		//recolhimento de dados
		scanf("%d", &op);
		system("cls");
		
		//implementa��o de switch para op��es
			switch(op){
				case 01:
					Cadastro();
					break;
					
					case 02:
						Pesquisa();
						break;
						
						case 03:
							CriarConsulta();
							break;
							
							case 04:
								system("exit");
								break;
								
								default:
										Erro();
			}
			}while(op!= 4);
}

