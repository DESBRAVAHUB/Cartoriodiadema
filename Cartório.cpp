#include <stdio.h> //biblioteca de comunica��o de usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o e mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar de string

int registro() // fun�ao responsavel por cadastrar os usu�rios no sistema
{
	// inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final da criac�o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa�ao do usu�rio
	scanf("%s", cpf); // %s refere-se a string
	
	strcpy(arquivo, cpf); // Responsavel por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salva o valor da variavel
	fclose(file); // fechar o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da variavel
	fclose(file); // fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando informa�ao do usu�rio
	scanf("%s",nome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,nome); // salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // coletando informa�ao do usu�rio
	scanf("%s",sobrenome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,sobrenome); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // coletando informa��od do usu�rio
	scanf("%s",cargo); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,cargo); // salva o arquivo
	fclose(file); // fecha o arquivo
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	// inicio cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	// final da criac�o de vari�veis/string
	printf("Digite o CPF a ser consultado: "); // coletando informa�ao do usu�rio
	scanf("%s",cpf); // %s refere-se a string
	
	FILE *file; // cria o arquivo
	file = fopen(cpf,"r"); // cria o arquivo
	
	if(file == NULL) // cria arquivo
	{
		printf("Nao foi possivel abrir o arquivo, nao localizado!.\n"); // coletando informa��o do usu�rio
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas sao a informa�ao do usuario: "); // coletando informa��o do usu�rio
		printf("%s", conteudo); // 5s refere-se a string
		printf("\n\n"); // pular linha
	}
	
	system("pause");
	
	
}
int deletar()
{
	// inicio cria��o de vari�veis/string
	char cpf[40];
	// final da cria��o de vari�veis/string
	printf("Digite o CPF do usu�rio a ser deletado: "); // coletando informa�aodo usu�rio
	scanf("%s",cpf); // %s refere-se a string
	
	remove(cpf);
	FILE *file; // cria o arquivo
	file = fopen(cpf,"r"); //cria o arquivo
	if(file == NULL)
	{
		printf("O usu�rio nao se encontra no sistema! .\n"); //coletando informa�ao do usuario
		system("pause");
	}
}
			
int main()
{  
	int opcao=0; //Definindo as variav�is
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	printf("###Cartorio de Diadema ###:\n\n");
	printf("Login de administrador!\n\nDigite a sua senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
		

         system ("cls");
	     for(laco=1;laco=1;)
         {
   	
   	         system("cls"); // responsavel pro limpar a tela
   	
   	         setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	         printf("###Cart�rio de Diadema ###\n\n"); //Inicio do menu
	         printf("Escolha a op��o desejada no menu:\n\n");
	         printf("\t1 - Registrar nomes\n");
	         printf("\t2 - Consultar nomes\n");
	         printf("\t3 - Deletar nomes\n\n"); 
	         printf("\t4 - Sair do sistema\n\n");
	         printf("Opc�o"); //Fim do menu
	
             scanf("%d" , &opcao);//Armazenando a escolha do usu�rio
    
             system("cls"); // responsavel por limpar a tela
   	
   	         switch(opcao) // inicio da sele�ao do menu
   	        {
   	    	      case 1:
   	    	      registro(); // chamada de func�es
   	    	      break;
	
			      case 2:
			      consulta();
			      break;	
			
			      case 3:
			      deletar();
			      break;
			
			      case 4:
			      printf("Obrigado por utilizar o sistema!\n");
			      return 0;
			      break;
		    
			      default:
			      printf("Essa op��o nao esta disponivel!/n");
			      system("pause");
			      break;
		
	           }// fim da sele�ao	
            
            }
        }
        
        else
        printf("Senha incorreta");
}
        






