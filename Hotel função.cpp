#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    char email[30];
    char cpf;
    char telefone;
    
} Registro;

Registro registro[100];

int numCadastro = 0;

void registroCliente();
void servicoQuarto();
void pedidoCliente();
void cadastrados();



int main () {
	
	int i;
	int menu;
	
	
	do{
	printf("\033[1;35m");
	printf("------------------------------------------------REENYES HOTEL-------------------------------------------------------\n");
	printf("\033[0m");
	printf("(MENU DO HOTEL):\n\n");
	printf("Selecione o numero de sua opcao:\n\n");
	printf("[1] - FAZER CHECKIN:\n");
	printf("[2] - SOLICITAR SERVICO DE QUARTO:\n");
	printf("[3] - FAZER PEDIDO\n");
	printf("[4] - SEU CADASTRO\n");
	printf("[0] - Sair\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("Resposta : ");
	scanf("%d", &menu);
	
	
		getchar(); 
        system("cls");

        switch (menu) {
            case 1:
                registroCliente();
                break;
            case 2:
                servicoQuarto();
                break;
            case 3:
                pedidoCliente();
                break;
            case 4:
                cadastrados();
                break; 
            case 0:
                printf("Saindo...\n\n");
                printf("Ate logo !!\n");
                break;
            default:
                printf("Opcao invalida !\n");
        }
        
	} while (menu != 0);

	return 0;
}

void registroCliente(){

	int pss, quarto;
	printf("\033[1;35m");
	printf("-----------------------------------------------------------Novo Cadastro----------------------------------------------\n");
    printf("\033[0m");
    
    printf("Primeiro Nome: ");
    scanf("%s", registro[numCadastro].nome);
    
	printf("E-mail: ");
    scanf("%s", registro[numCadastro].email);
    
    printf("CPF: ");
    scanf("%d", &registro[numCadastro].cpf);
    
	printf("Numero de telefone (Apenas Numeros): ");
    scanf("%d", &registro[numCadastro].telefone);
    
    numCadastro++;
	

   printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
    
    printf("Checkin concluido com sucesso! vamos para a proxima etapa!:\n");
    printf("\n\nPress ENTER para continuar...");
    getchar();
    getchar();
    system("cls");
	
    printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nCONFIRME EM QUANTAS PESSOAS VOCES ESTAO:");
    scanf("%d",&pss);
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	
	system("cls");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	
        if(pss<=5) {
		    printf("Quartos disponiveis para Sua quantidade de pessoas:\n\n");
			printf("Selecione o quarto desejado:\n");
			printf("[1] - Suite Royale:\n");
			printf("[2] - Grand Reenyes:\n");
			printf("[3] - Imperial Elegance:\n");
		    printf("[4] - Palazzo Dourado:\n");
			printf("\033[1;35m");
			printf("---------------------------------------------------------------------------------------------------------------------\n");
			printf("\033[0m");
			scanf("%d",&quarto);
	
			system("cls");
		}
		else{
			printf("ao possuimos quartos para a sua quantidade de pessoas:\n");
		}
	
	switch(quarto){
		case 1:
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
		printf("\n Suite Royale  Ate 5 pessoas:\n");
		printf("\n INFORMACOES GERAIS:\n");
		printf("\n Luxo e espaco com cama king-size, duas camas de solteiro, banheira de hidromassagem e varanda panoramica.:\n");
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
			
		getchar();
	    getchar();
	    system("cls");
		break;
	
		case 2:
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
		printf("\n Grand Reenyes  Ate 4 pessoas:\n");
		printf("\n INFORMACOES GERAIS:\n");
		printf("\n Elegancia e conforto com cama super king-size, sofa-cama premium e banheiro de marmore com banheira.:\n");
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
			
		getchar();
	    getchar();
	    system("cls");
		break;
	 
		case 3:
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
		printf("\n Imperial Elegance  Ate 5 pessoas:\n");
		printf("\n INFORMACOES GERAIS:\n");
		printf("\n Design sofisticado com cama king-size, sofa-cama, lareira aconchegante e iluminação intimista.:\n");
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
			
		getchar();
	    getchar();
	    system("cls");
		break;
	 
	 	
		case 4:
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
		printf("\n Palazzo Dourado  Ate 3 pessoas:\n");
		printf("\n INFORMACOES GERAIS:\n");
		printf("\n Toque classico com cama queen-size, cama extra, lustres de cristal e banheira vitoriana.:\n");
		printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
		getchar();
	    getchar();
	    system("cls");
		break;
		
 
}
}

void cadastrados() {
    int i;

   	printf("\033[1;35m");
	printf("--------------------------------------------------Seus Cadastros--------------------------------------------------------\n");
	printf("\033[0m");

    for (int i = 0; i < numCadastro; i++) {
        printf("Nome: %s\n", registro[i].nome);
        printf("E-mail : %s\n", registro[i].email);
        printf("CPF : %d\n", registro[i].cpf);
        printf("Telefone: %d\n", registro[i].telefone);
        printf("Hospedagem: SIM");
        
        

        printf("\033[1;35m");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0m");
    
	}
    

    printf("\n\nPress ENTER para continuar...");
    getchar();
    system("cls");
}

void servicoQuarto() {
	int servico; 
	
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\n Selecione que tipo se servico voce precisa:\n\n");
	printf(" [1] - Camareira: \n");
	printf(" [2] - Massagem: \n");
	printf(" [3] - Spa: \n");
    printf(" [4] - Lavanderia:\n");
    printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
    scanf("%d",&servico);
   
    system("cls");
   switch(servico){
	
    
	case 1:
	printf("\nAGUARDE UM MOMENTINHO EM MINUTOS UM COLABORADOR IRA ATE SEU QUARTO:\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 2:
	printf("\nAGUARDE UM MOMENTINHO EM MINUTOS UM COLABORADOR IRA ATE SEU QUARTO:\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 3:
	printf("\nAGUARDE UM MOMENTINHO EM MINUTOS UM COLABORADOR IRA ATE SEU QUARTO:\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 4:
	printf("\nAGUARDE UM MOMENTINHO EM MINUTOS UM COLABORADOR IRA ATE SEU QUARTO:\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	 
}
}

void pedidoCliente(){
	int comida;
	int menu;
	printf("\033[1;35m");

	
	printf("-----------------------------------------------------Restaurante-----------------------------------------------------\n");
	printf("\033[0m");
	printf("Selecione os Pratos da casa:\n\n");
	printf(" [1] - Gerbe ao molho madeira:\n");
	printf(" [2] - Ju quatro quejos:\n");
	printf(" [3] - Kaique ao molho branco:\n");
    printf(" [4] - Jordan ao lombo canadense:\n");
    printf(" [5] - Luis ao molho espanhol:\n");
    printf(" [6] - Leandro rose:\n");
    printf(" [7] - Italo a parmegiana:\n");
    printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	scanf("%d",&comida);
	system("cls");
	switch(comida){
	
    
	case 1:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nSuculento file mignon grelhado, servido com um classico molho madeira encorpado, acompanhado de batatas rusticas e legumes salteados.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 2:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nDeliciosa massa artesanal envolvida em um cremoso molho quatro queijos, combinando os sabores do parmesao, gorgonzola, mucarela e provolone, finalizada com ervas frescas.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;

	
	case 3:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nPeito de frango grelhado, coberto com um aveludado molho branco à base de creme de leite e parmesao, servido com arroz cremoso e batatas douradas.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 4:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nFile suculento de lombo canadense, grelhado no ponto perfeito, acompanhado de risoto de parmesao e finalizado com um toque de ervas finas.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 5:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nFile suculento grelhado, coberto com um molho espanhol encorpado à base de caldo de carne, vinho e especiarias, acompanhado de pure rustico e legumes salteados.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 6:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nMassa fresca envolvida em um delicioso molho rose cremoso, preparado com tomates frescos e creme de leite, finalizada com parmesao e manjericao.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
	
	case 7:
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	printf("\nDESCRICAO DO PRATO:\n");
	printf("\nClassico file empanado, crocante por fora e macio por dentro, coberto com molho de tomate caseiro e queijo gratinado, servido com arroz branco e batatas fritas douradas.:\n");
	printf("\n\nO PRATO CHEGARA EM SEU LOCAL EM 10 MINUTOS:\n");
	printf("\n\nObs: Prato e incluso na estadia (nao e pago):\n");	
	printf("\033[1;35m");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("\033[0m");
	getchar();	
	getchar();
    system("cls");
    break;
}
system("cls");

}