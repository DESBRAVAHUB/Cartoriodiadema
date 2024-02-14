#include <stdio.h> //biblioteca de comunicação de usuário
#include <stdlib.h> //biblioteca de alocação de espaço e memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsavel por cuidar de string

int registro() // funçao responsavel por cadastrar os usuários no sistema
{
	// inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final da criacão de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informaçao do usuário
	scanf("%s", cpf); // %s refere-se a string
	
	strcpy(arquivo, cpf); // Responsavel por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salva o valor da variavel
	fclose(file); // fechar o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da variavel
	fclose(file); // fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando informaçao do usuário
	scanf("%s",nome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,nome); // salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da variável
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // coletando informaçao do usuário
	scanf("%s",sobrenome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,sobrenome); // salva o valor da variável
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); // salva o valor da variável
	fclose(file); // fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // coletando informaçãod do usuário
	scanf("%s",cargo); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,cargo); // salva o arquivo
	fclose(file); // fecha o arquivo
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	// inicio criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	// final da criacão de variáveis/string
	printf("Digite o CPF a ser consultado: "); // coletando informaçao do usuário
	scanf("%s",cpf); // %s refere-se a string
	
	FILE *file; // cria o arquivo
	file = fopen(cpf,"r"); // cria o arquivo
	
	if(file == NULL) // cria arquivo
	{
		printf("Nao foi possivel abrir o arquivo, nao localizado!.\n"); // coletando informação do usuário
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas sao a informaçao do usuario: "); // coletando informação do usuário
		printf("%s", conteudo); // 5s refere-se a string
		printf("\n\n"); // pular linha
	}
	
	system("pause");
	
	
}
int deletar()
{
	// inicio criação de variáveis/string
	char cpf[40];
	// final da criação de variáveis/string
	printf("Digite o CPF do usuário a ser deletado: "); // coletando informaçaodo usuário
	scanf("%s",cpf); // %s refere-se a string
	
	remove(cpf);
	FILE *file; // cria o arquivo
	file = fopen(cpf,"r"); //cria o arquivo
	if(file == NULL)
	{
		printf("O usuário nao se encontra no sistema! .\n"); //coletando informaçao do usuario
		system("pause");
	}
}
			
int main()
{  
	int opcao=0; //Definindo as variavéis
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
	
	         printf("###Cartório de Diadema ###\n\n"); //Inicio do menu
	         printf("Escolha a opção desejada no menu:\n\n");
	         printf("\t1 - Registrar nomes\n");
	         printf("\t2 - Consultar nomes\n");
	         printf("\t3 - Deletar nomes\n\n"); 
	         printf("\t4 - Sair do sistema\n\n");
	         printf("Opcão"); //Fim do menu
	
             scanf("%d" , &opcao);//Armazenando a escolha do usuário
    
             system("cls"); // responsavel por limpar a tela
   	
   	         switch(opcao) // inicio da seleçao do menu
   	        {
   	    	      case 1:
   	    	      registro(); // chamada de funcões
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
			      printf("Essa opção nao esta disponivel!/n");
			      system("pause");
			      break;
		
	           }// fim da seleçao	
            
            }
        }
        
        else
        printf("Senha incorreta");
}
        






