#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#define SIZE 200

//criação de variáveis globais
char nome[SIZE] [70];
char nascimento[SIZE][10];
char email[SIZE] [50];
char cpf[SIZE][50];
// variaveis de opção
int consultaOp, nummedico, unid, op, cpfInt[SIZE], horario;

// "Banco de dados" Matrizes

//Areas
char areas[3][20] ={{"Clínico Geral."},
					 	 {"Cardiologista."},
					  	 {"Oftalmologista."}};

//doutores
char doutoresCG[3][30]= {{"Dr. Huberto Castro"},
					 	 {"Dra. Liandra Cerqueira."},
					  	 {"Dr. Magno Flor?ncio."}};	

char doutoresCa[3][30]= {{"Dr. Pedro Paulo Souza."},
					 	 {"Dr. Victor Almeida."},
					  	 {"Dr. Robert de Jesus."}};

char doutoresOf[3][30]= {{"Dra. Flavia Perelberg."},
					 	 {"Dr. Matheus Costa."},
					  	 {"Dr. João Carlos."}};	

//unidades
char unidCG[3][70] = {{"Hospital Clínico Geral."},
					  {"Clínica Geral de Salvador."},
					  {"Unidade Das Clínicas Gerais de Salvador."}};

char unidCa[3][70]= { {"Hospital Fundação Bahiana de Cardiologia."},
					  {"Clínica Geral de Salvador."},
					  {"Clínica Centrocor - Clínica de Cardiologia em Salvador."}};

char unidOf[3][70]= { {"Clínica Provision Oftalmologia."},
					  {"Hospital de Olhos."},
					  {"DayHORC Hospital dos Olhos."}};

//horários
char horarioCG[3][30]= {{"18/11/2022, 15:00 horas."},
					 	{"18/11/2022, 10:00 horas."},
					  	{"20/11/2022, 11:00 horas."}};	

char horarioCa[3][30]= {{"17/11/2022, 15:00 horas."},
					 	{"27/11/2022, 10:00 horas."},
					  	{"20/12/2022, 11:00 horas."}};	


char horarioOf[3][30]= {{"18/11/2022, 09:00 horas."},
					 	{"18/11/2022, 11:10 horas."},
					  	{"20/11/2022, 17:25 horas."}};	


// "Banco de dados" Matrizes
//mensagem de erro
void Erro(){
	printf("\n________________________________________________________________\n");
	printf("\n__________________________ SUS UniRuy __________________________\n");  
	printf("\n___________________________ !!!Erro!!! _________________________\n");
	printf("\n__                                                            __\n");
	printf("\n__        Valor digitado não correspondente com as opções     __\n");
	printf("\n__                                                            __\n");
	printf("\n__              Por favor, digite um valor válido	    		__\n");
	printf("\n________________________________________________________________\n");
	printf("\n_______________________ UniRuy Consultas _______________________\n");
	printf("\n________________________________________________________________\n");
}
void CriarConsulta(){
int consVar, medico, unida, horarios;

	consVar= consultaOp -1;
	medico = nummedico - 1;
 	unida= unid -1;
 	horarios=  horario -1;
int varInsignificante;
	printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
	printf("\n\n_________________________ ESPECIALIDADES ________________________\n\n");
    printf("\n                      1 - %s  --\n",areas[0]);
    printf("\n                      2 - %s  --\n",areas[1]);
    printf("\n                      3 - %s  --\n",areas[2]);
	printf("\n Escolha o número da opção correspondente a especialidade desejada:\n\n");
	printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
	//recolhimento de dados
	scanf("%d", &consultaOp);
    system("cls");
    switch (consultaOp){
    	case 01:
    		//Primeira Opção de especialidade.
    				printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
					printf("\n\n_________________________ ESPECIALISTAS _________________________\n\n");  
				  	printf("\n\n_________________________ Clínica Geral _________________________\n\n");
					printf("\n                      1 - %s   --\n\n",doutoresCG[0]);
				    printf("\n                      2 - %s   --\n\n",doutoresCG[1]);
				    printf("\n                      3 - %s   --\n\n",doutoresCG[2]);

				    printf("\nEscolha o número da opção correspondente ao médico de sua preferência:\n\n");
					printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
					//recolhimento de dados
					scanf("%d", &nummedico);

					//testes de entrada de dados
					switch(nummedico){
								case 01:
									printf("Dr. Huberto Castro.\n");
									break;
									case 02:
									printf("Dra. Liandra Cerqueira.\n");
									break;
									case 03:
									printf("Dr. Magno Florêncio.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

					//limpa tela
					system("cls");

					//Unidades
					printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
					printf("\n\n--1 - %s  -\n",unidCG[0]);
					printf("\n\n--2 - %s  --\n",unidCG[1]);
					printf("\n\n--3 - %s  --\n",unidCG[2]);	
					printf("\n\nEscolha o número da opção correspondente a unidade :\n\n");
					printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
					//recolhimento de dados
					scanf("%d", &unid);

					//testes de entrada de dados
					switch(unid){
								case 01:
									printf("Hospital Clínico Geral.\n");
									break;
									case 02:
									printf("Clínica Geral de Salvador.\n");
									break;
									case 03:
									printf("Unidade Das Clínicas Gerais de Salvador.\n");
									break;

									default:
										printf("Erro. Retorne ao inicio.\n");
																					//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

					//limpa tela
					system("cls");

					//Texto para apresentação das possíveis datas e horários.
					printf("Horários disponíveis: \n");

					printf("1 - %s\n", horarioCG[0]);
					printf("2 - %s\n", horarioCG[1]);
					printf("3 - %s\n", horarioCG[2]);
					scanf("%d",&horario);

					//testes de entrada de dados
					switch(horario){
								case 01:
									printf("18/11/2022, 15:00 horas.\n");
									break;
									case 02:
									printf("18/11/2022, 10:00 horas.\n");
									break;
									case 03:
									printf("20/11/2022, 11:00 horas.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
										//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

					//limpeza de tela
					system("cls");
					//confirma??o1/2
							printf("Sua consulta foi marcada com sucesso!\n");
							
							// finalização
				printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
				printf("    --              Sua consulta foi marcada com sucesso!         --\n");
				printf("    --Area:%s  --\n",areas[consVar]);
				printf("    --Senhor(a):%s  --\n",nome);
				printf("    --CPF: %s  --\n",cpf);
				printf("    --E-mail:%s  --\n",email);
				printf("    --Sua consulta foi marcada para a unidade de sáude :%s  --\n",unidCG[unida]);
				printf("    --Doutor(a): %s  -\n",doutoresCG[medico]);
				printf("    --Horário: %s  --\n",horarioCG[horarios]);
				printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
				printf("Clique em qualquer tecla.\n");
				scanf("%",&varInsignificante);

		//limpeza de tela
		system("cls");

						
		 			break;

			case 02:

				//Segunda opção
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						printf("\n\n_________________________ ESPECIALISTAS __________________________\n");  
					  	printf("\n\n__________________________ Cardiologia ___________________________\n");
						printf("\n--                      1 - %s\n\n",doutoresCa[0]);
					    printf("\n-                      2 - %s\n\n",doutoresCa[1]);
					    printf("\n-                      3 - %\n\n",doutoresCa[2]);
					    printf("\nEscolha o número da opção correspondente ao médico de sua preferência:\n");
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
					  	//recebendo a variável  
					    scanf("%d", &nummedico);

					    //testes de entrada de dados
					    switch(nummedico){
								case 01:
									printf("Dr. Pedro Paulo Souza.\n");
									break;
									case 02:
									printf("Dr. Victor Almeida\n");
									break;
									case 03:
									printf("Dr. Robert de Jesus.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}


					    //limpa tela
					    system("cls");

					    //Unidades
					    printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						printf("\n\n--1 - %s  \n",unidCa[0]);
						printf("\n\n--2 - %s  \n",unidCa[1]);
						printf("\n\n--3 - %s  \n",unidCa[2]);
						printf("\n\n-Escolha o número da opção correspondente a unidade desejada: --:\n\n");
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						//recolhimento de dados
						scanf("%d", &unid);

						//testes de entrada de dados
						switch(unid){
								case 01:
									printf("Hospital Fundação Bahiana de Cardiologia.\n");
									break;
									case 02:
									printf("Clínica Centrocor - Clínica de Cardiologia em Salvador.\n");
									break;
									case 03:
									printf("Unidade Procardíaco.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

						//limpa tela
						system("cls");

						//Texto para apresentação das possíveis datas.
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						printf("    --                 Horários Disponíveis: 					  --\n");
						printf("	--1 - %s  --\n", horarioCa[0]);
						printf("	--2 - %s  --\n", horarioCa[1]);
						printf("	--3 - %s  --\n", horarioCa[2]);
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						scanf("%d",&horario);

						//testes de entrada de dados
					switch(horario){
								case 01:
									printf("18/11/2022, 15:00 horas.\n");
									break;
									case 02:
									printf("27/11/2022, 10:00 horas.\n");
									break;
									case 03:
									printf("20/12/2022, 11:00 horas.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

						//limpeza de tela
						system("cls");

						//confirma??o1/2
							printf("Parabéns a sua consulta foi registrada com sucesso\n");
							printf("O comprovante sera criado em segundos.\n.\n..\n...\n\nClique em qualquer tecla\n");
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						printf("	--Sua consulta foi marcada com sucesso!                       --\n");
						printf("	--Area:%s  --\n",areas[consVar]);
						printf("	--Senhor(a):%s  --\n",nome);
						printf("	--CPF: %s  --\n",cpf);
						printf("	--E-mail:  --\n",email);
						printf("	--Sua consulta foi marcada para a unidade de saúde :%s  --\n",unidCa[unida]);
						printf("	--Doutor(a): %s   --\n",doutoresCa[medico]);
						printf("	--Horário: %s  --\n",horarioCa[horarios]);
						printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						printf("Clique em qualquer tecla.\n");
							scanf("%",&varInsignificante);

		//limpeza de tela
		system("cls");

						

				break;	

				case 03:

											//Terceira opção
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							printf("\n_________________________ ESPECIALISTAS __________________________\n");  
						  	printf("\n__________________________ Oftamologia ___________________________\n");
						  	printf("\n--1 - %s --\n\n",doutoresOf[0]);
						    printf("\n--2 - %s  --\n\n",doutoresOf[1]);
						    printf("\n--3 - %s  --\n\n",doutoresOf[2]);	
						    printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
						    printf("\nEscolha o número da opção correspondente ao médico de sua preferência:\n");
							//recebendo a variável  
							scanf("%d", &nummedico);

							switch(nummedico){
								case 01:
									printf("Dra. Flavia Perelberg.\n");
									break;
									case 02:
									printf("Dr. Matheus Costa.\n");
									break;
									case 03:
									printf("Dr. João Carlos.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}


							//limpa tela
							system("cls");

							//Unidades
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							printf("\n\n--1 - %s  --\n",unidOf[0]);
							printf("\n\n--2 - %s  --\n",unidOf[1]);
							printf("\n\n--3 - %s   --\n",unidOf[2]);
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							printf("\n\nEscolha o número da opção correspondente a unidade de sua preferência:\n\n");
							//recolhimento de dados
							scanf("%d", &unid);

							switch(unid){
								case 01:
									printf("Clínica Provision Oftalmologia.\n");
									break;
									case 02:
									printf("Hospital de Olhos.\n");
									break;
									case 03:
									printf("DayHORC Hospital dos Olhos.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
											//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

							//limpa tela
							system("cls");

							//Texto para apresentação das possíveis datas.
								printf("Horários disponíveis:\n");
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							printf("  * --1 - %s    --\n", horarioOf[0]);
							printf("  * --2 - %s    --\n", horarioOf[1]);
							printf("  * --3 - %s    --\n", horarioOf[2]);
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							scanf("%d",&horario);

							switch(horario){
								case 01:
									printf("18/11/2022, 09:00 horas.\n");
									break;
									case 02:
									printf("18/11/2022, 11:10 horas.\n");
									break;
									case 03:
									printf("20/11/2022, 17:25 horas.\n");
									break;

									default:
										printf("Erro. Retorne ao início.\n");
										//limpeza de tela
											system("cls");
										CriarConsulta();
										break;
							}

							//limpeza de tela
							system("cls");

							//confirma??o1/2
							printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
							printf("*--Parabéns a sua consulta foi marcada com sucesso!!                 --*\n");
							printf("*--Area:%s	--*\n",areas[consVar]);
							printf("*--Senhor(a):%s 	--*\n",nome);
							printf("*--CPF: %s			--*\n",cpf);
							printf("*--E-mail:%s  --*\n",email);
							printf("*--Sua consulta foi marcada para a unidade de saúde :%s   --*\n",unidOf[unida]);
							printf("*--Doutor(a): %s	--*\n",doutoresOf[medico]);
							printf("*--Horário: %s    --*\n",horarioOf[horarios]);;
							printf("\n* --------------------------- SUS UniRuy ---------------------------*\n");
							printf("Clique em qualquer tecla.\n");
							scanf("%",&varInsignificante);

		//limpeza de tela
		system("cls");
							

								break;
								default:
									Erro();
									break;

	}
}

void Cadastro(){

	static int linha;
	int opCadastro;
	do{
	//obten??o dos dados do cliente
		fflush(stdin);
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n* ---------------------------- CADASTRO --------------------------  *\n");
		printf("\n              Por favor, digite seu nome completo:               \n\n\n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("Seu nome: ");
		gets(nome[linha]);

		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n* ---------------------------- CADASTRO --------------------------  *\n");
		printf("\n \n                   Digite sua data de nascimento:\n\n\n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("Sua Data de Nascimento: ");
		printf("\nEx.: 25 12 1984 \n\n\n");
		gets(nascimento[linha]);

		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n* ---------------------------- CADASTRO --------------------------  *\n");
		printf("\n \n                   Digite seu e-mail:\n\n\n");
		printf("\n                      Ex.: exemplo@email.com \n\n\n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("Seu E-mail: ");
		gets(email[linha]);

		//limpa tela
		system("cls");
		fflush(stdin);
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n* ---------------------------- CADASTRO --------------------------  *\n");
		printf("\n \n                    Digite seu CPF: \n\n\n");
		printf("\n                       Ex.: 000.000.000-00 \n\n\n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("Seu CPF: ")
		gets(cpf[linha]);

		//limpa tela
		system("cls");
		cpfInt[linha] = 1;


		//clausula de saida do looping.
		printf("\n* ----------------------------- SISTEMA --------------------------  *\n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n \nDigite 1 para continuar com a marcação ou outro valor para sair:\n \n");
		printf("\n* --------------------------- SUS UniRuy -------------------------  *\n");
		printf("\n* ----------------------------- SISTEMA --------------------------  *\n");
		
		scanf("%d", &op);
		if(op==1){
			CriarConsulta();
		}else{	
		system("exit");
		}
		linha++;

		//limpa tela
		system("cls");
		system("cls");
	}while(opCadastro==1);

}


int main(void){
setlocale(LC_ALL,"");

    //estrutura de boas vindas.

    do{
	//estrutura de repetição para cadastro, existe um parâmetro de armazenamento implementado no código.
	//texto de apresentação, necessário a estilização
		printf("\n* ---------------------- SISTEMA -----------------------  *\n");
		printf("\n* --------------------- SUS UniRuy --------------------- *\n ");
		printf("\n* Seja bem-vindo(a) ao sistema de marcação de consultas! *\n ");
		printf("\n Para iniciar o atendimento escolha a opção desejada:   \n \n");
		printf("\n                     1 - Cadastre-se.                      \n");
		printf("\n                     2 - Saída.                            \n");
		printf("\n* ---------------------- SISTEMA -----------------------  *\n");
		printf("\n* --------------------- SUS UniRuy ---------------------  *\n");
		//recolhimento de dados
		scanf("%d", &op);
		//limpeza de tela
		system("cls");

		//implementação de switch para opções
		if (op==1){
			Cadastro();
		}else if(op==2){
			break;
		}else{
			Erro();
		}

			}while(op!= 4);
//finalizado
}
