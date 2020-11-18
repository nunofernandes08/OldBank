#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

///////////////////Local das structs/////////////////////
struct DadosContaSingular
{
    char nomecompleto[100];
    char datanascimento[10];
    char nacionaliade[20];
    char morada[50];
    char email[50];
    int telemovel[9];
    char tipodocumentoidenficacao[40];
    char validadedocumentoidenficacao[10];
    int numeroidentificacao[9];
    char profissao[50];
    char nomeempresa[50];
    char username[30];
    char password[20];
    char dinheiro[20];

};

struct DadosContaConjunta
{
    char nomecompleto[100];
    char datanascimento[10];
    char nacionaliade[20];
    char morada[50];
    char email[50];
    int telemovel[9];
    char tipodocumentoidenficacao[40];
    char validadedocumentoidenficacao[10];
    int numeroidentificacao[9];
    char profissao[50];
    char nomeempresa[50];
    char username[30];
    char password[20];
};

///////////////////////////Cores/////////////////////////
void CorTextoVermelho()
{
    printf("\033[0;31m");
}

void CorTextoVerde()
{
    printf("\033[0;32m");
}

void CorTextoAzul()
{
    printf("\033[0;34m");
}

void CorTextAmarela()
{
    printf("\033[0;33m");
}

void LimparCorTexto()
{
    printf("\033[0m");
}

void ConsolaAzul()
{
    system("color 1F");
}

//////////////////////////Menus//////////////////////////
void Menu()
{
    //Limpa a consola
    system("cls");

    int posicao = 1;
    int teclapressionada = 0;

    //Define qua opcao maxima é 2 e que a min é 1
    #define MAX 4
    #define MIN 1

    /*Enquqanto a teclapressionada nao for igual a 13 (tecla ENTER)
    o programa ira estar sempre a executar esta funcao */

    while(teclapressionada != 13)
    {
        //Limpa a consola
        system("cls");

        CorTextoVerde();

        Copyright();

        CorTextoVermelho();
        //printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t     => Bem Vindo - Menu principal <=\n");
        //printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");

        LimparCorTexto();

        printf("\t\t\t\t\t\t"); Seta(1,posicao); printf("Entrar - Admin\n");
        printf("\t\t\t\t\t\t"); Seta(2,posicao); printf("Entrar - Cliente\n");
        printf("\t\t\t\t\t\t"); Seta(3,posicao); printf("Registar\n");
        printf("\t\t\t\t\t\t"); Seta(4,posicao); printf("Sair\n");
        LimparCorTexto();
        //printf("\n------------------------------------------------------------------------------------------------------------------------\n");

        //Retorna a telca pressionada
        teclapressionada = getch();

        /*Aqui se a tecla pressionada for igual a telca 80 (tecla com a seta para cima) e nao estiver na maxima posicao
        aumenta a posição e sobe uma posicao*/

        if(teclapressionada == 80 && posicao != MAX)
            posicao++;

        /*Aqui se a tecla pressionada for igual a telca 72 (tecla com a seta para baixa) e nao estiver na minima posicao
        diminui a posição e desce uma posicao*/

        else if(teclapressionada == 72 && posicao != MIN)
            posicao --;
        else

        //Aqui a seta fica na mesma posicao
            posicao == posicao;
    }

    /*Se a posicao for igual a 1, invoca a função Entrar()*/
    if (posicao == 1)
        //printf("\nNao consigo fazer entrar");
        Entrar();

    /*Se a posicao for igual a 2, invoca a função EntrarCliente()*/
    else if (posicao == 2)
        EntrarCliente();

    /*Se a posicao for igual a 3, invoca a função Registar()*/
    else if (posicao == 3)
        RegistarCliente();

    /*Se a posicao for igual a 4, sai do programa*/
    else if (posicao == 4)
        exit(0);


    //Adormece o programa
    Sleep(1500);

    //Invoca a funcao Menu()
    Menu();

    //Retorna a telca pressionada
    getch();
}

void MenuAdmin()
{
    int opcao, opcao2;

    //Limpa  Consola
    system("cls");

    //CorTextoAzul();
    CorTextoVerde();

    //Menu entrar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu entrar - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();
    printf("\n\t\t\t\t\tEscolha uma opção: \n");

    printf("\n\t\t\t\t\t\t[1] - Visualizar clientes\n");
    printf("\t\t\t\t\t\t[2] - Realizar empréstimos\n");
    printf("\t\t\t\t\t\t[3] - Realizar levantamento\n");
    printf("\t\t\t\t\t\t[4] - Realizar deposito\n");
    printf("\t\t\t\t\t\t[5] - Eliminar cliente\n");
    printf("\t\t\t\t\t\t[0] - Sair\n");

     /* Diz ao utilizador para escolher uma opção e enquanto essa opção for maior que o numero de opções existentes
    o programa irá estar sempre a pedir uma opcao para escolher*/

    do
    {
        printf("\n\t\t\t\t\tEscolha uma opção: ");
        CorTextAmarela();
        scanf("%i", &opcao);

        LimparCorTexto();

        switch(opcao)
        {
            //Caso o utilizador escolha a opção 1 ele ira ver os clientes todos
            case 1:

                //Limpa  Consola
                system("cls");

                //CorTextoAzul();
                CorTextoVerde();

                //Menu entrar OldBank
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t\t\t\t\t\tMenu entrar - OldBank\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n");

                LimparCorTexto();
                printf("\n\t\t\t\t\tEscolha uma opção: \n");

                printf("\n\t\t\t\t\t\t[1] - Visualizar todos clientes\n");
                printf("\t\t\t\t\t\t[2] - Visualizar cliente filtrado\n");
                printf("\t\t\t\t\t\t[0] - Sair\n");

                do
                {

                    printf("\n\t\t\t\t\tEscolha uma opção: ");
                    CorTextAmarela();
                    scanf("%i", &opcao2);

                    LimparCorTexto();

                    switch(opcao2)
                    {
                        case 1:
                            Sleep(2000);
                            LerFicheiroClientes();
                            break;

                        case 2:
                            Sleep(2000);
                            LerFicheiroFiltrado();
                            break;

                        default:
                            printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
                    }
                } while(opcao2 > 2);

                //LerFicheiroClientes();
                //VerTiposDeConta();
                break;

            //Caso o utilizador escolha a opção 2 ele ira poder registar um emprestimo
            case 2:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);
                RegistarEmprestimo();
                break;

            //Caso o utilizador escolha a opção 3 ele ira poder fazer um levantamento
            case 3:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);

                break;

            //Caso o utilizador escolha a opção 3 ele ira poder fazer um deposito
            case 4:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);
                RegistarDeposito();
                break;

             case 5:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);
                Eliminar();
                break;

            case 0:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Sair\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(1000);
                Menu();
                break;

            default:
                printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
        }
    }
    while(opcao > 5);
}

void MenuCliente()
{
    int opcao;

    //Limpa  Consola
    system("cls");

    //CorTextoAzul();
    CorTextoVerde();

    //Menu entrar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu entrar - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();
    printf("\n\t\t\t\t\tEscolha uma opção: \n");

    printf("\n\t\t\t\t\t\t[1] - Visualizar dados\n");
    printf("\t\t\t\t\t\t[2] - Atualizar dados\n");
    printf("\t\t\t\t\t\t[0] - Sair\n");

     /* Diz ao utilizador para escolher uma opção e enquanto essa opção for maior que o numero de opções existentes
    o programa irá estar sempre a pedir uma opcao para escolher*/

    do
    {
        printf("\n\t\t\t\t\tEscolha uma opção: ");
        CorTextAmarela();
        scanf("%i", &opcao);

        LimparCorTexto();

        switch(opcao)
        {
            //Caso o utilizador escolha a opção 1 ele ira ver os seus dados
            case 1:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tVisualizar clientes, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);

                LerFicheiroFiltrado();

                break;

            //Caso o utilizador escolha a opção 2 ele ira poder atualzar seus dados
            case 2:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(2000);

                UpdateCliente();

                break;

            case 0:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Sair\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/
                Sleep(1000);
                Menu();
                break;

            default:
                printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
        }
    }
    while(opcao > 2);
}

////////////////////////Registar////////////////////////
void RegistarCliente()
{
    //Limpa Consola
    system("cls");

    int opcao, i = 0;

    CorTextoVerde();

    //Menu registar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu registar - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\tEscolha o seu tipo de conta\n");

    printf("\n\t\t\t\t\t\t[1] - Conta singular\n");
    printf("\t\t\t\t\t\t[2] - Conta coletiva\n");
    printf("\t\t\t\t\t\t[3] - Conta solidária\n");
    printf("\t\t\t\t\t\t[4] - Conta conjunta\n");
    printf("\t\t\t\t\t\t[5] - Conta mista\n");
    printf("\t\t\t\t\t\t[0] - Sair\n");


    //Diz ao utilizador para escolher uma opção de conta e enquanto a opção nao existir pede sempre para escolher uma
    do
    {
        printf("\n\t\t\t\t\tEscolha um opção: ");

        CorTextAmarela();

        scanf("%i", &opcao);

        LimparCorTexto();

        switch(opcao)
        {
            //Caso o utilizador escolha a opção 1 ele irá entrar no registo de contas singular
            case 1:

                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Conta singular\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(1000);

                RegistarContaSingular();

                break;

            //Caso o utilizador escolha a opção 2 ele irá entrar no registo de contas coletiva
            case 2:

                //printf("\n\t\t\t\t\tOpção %i escolhida - Conta coletiva\n", opcao);

                break;

            //Caso o utilizador escolha a opção 3 ele irá entrar no registo de contas solidaria
            case 3:

                //printf("\n\t\t\t\t\tOpção %i escolhida - Conta solidária\n", opcao);

                break;

            //Caso o utilizador escolha a opção 4 ele irá entrar no registo de contas conjunta
            case 4:

                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Conta conjunta\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(1000);

                RegistarContaConjunta();

                break;

            //Caso o utilizador escolha a opção 5 ele irá entrar no registo de contas mista
            case 5:

                printf("\n\t\t\t\t\tOpção %i escolhida - Conta mista\n", opcao);

                break;

            //Caso o utilizador escolha a opção 0 ele irá sair e vai para o menu inicial
            case 0:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Sair\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(1000);

                Menu();

                break;

            default:

                printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
        }
    }
    while(opcao > 5);

    //Adormece o programa
    Sleep(1500);

    //Invoca a funcao Menu
    Menu();

    system("cls");
    //Entrar();
}

void RegistarContaSingular()
{
    system("cls");

    struct DadosContaSingular dcs;
    int opcao, i = 0;
    char ch;

    //Cria variável apontador para o ficheiro
    FILE *pont_fich, *pont_fichS;

    //Abre o ficheiro com tipo de abertura w
    pont_fich = fopen("ficheiros/clientes.txt", "a");

    pont_fichS = fopen("ficheiros/clientesS.txt", "a");

    //Testa se o ficheiro foi realmente aberto senao cria
    if(pont_fich == NULL && pont_fichS == NULL)
    {
        printf("ERRO, ficheiro nao existente!\n");
        perror("error");
        exit(1);
    }
    else
    {
        CorTextoVerde();

        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\tIntroduza os seus dados - Conta singular\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        LimparCorTexto();

        /* Verfica se o NOME é MAIOR ou IGUAL a 8 e se for regista
        senão continua aparecer para introduzir ate ser MAIOR ou IGUAL a oito */

        do
        {
            printf("\n\t\t\t\tNome completo: ");
            scanf("%s", dcs.nomecompleto);
        }
        while(strlen(dcs.nomecompleto) <= 8);

        /* Verfica se a DATA DE NASCIMENTO é MENOR à data registada no sistema e se for regista
        senão continua aparecer para introduzir ate ser MENOR */

        do
        {
            printf("\n\t\t\t\tData de nascimento: ");
            scanf("%s", dcs.datanascimento);
        }
        while(strlen(dcs.datanascimento) <= 8);

        /* Verfica se introduziu a sua NACIONALIDADE e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tNacionalidade: ");
            scanf("%s", dcs.nacionaliade);
        }
        while(strlen(dcs.nacionaliade) == 0);

         /* Verfica se introduziu a sua MORADA e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tMorada: ");
            scanf("%s", dcs.morada);
        }
        while(strlen(dcs.morada) == 0);

        /* Verfica se introduziu o seu EMAIL e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tEmail: ");
            scanf("%s", dcs.email);
        }
        while(strlen(dcs.email) == 0);

        /* Verfica se introduziu o seu TELEMOVEL e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tTelemovel: ");
            scanf("%s", dcs.telemovel);
        }
        while(strlen(dcs.telemovel) != 9);


        printf("\n\t\t\t\tTipo de documento de identificação: \n");

        printf("\n\t\t\t\t\t1 - Cartão de cidadão");
        printf("\n\t\t\t\t\t2 - Bilhete de identidade");
        printf("\n\t\t\t\t\t3 - Passaporte");

        /*Diz ao utilizador para escolher uma opção de tipo de documento de identificação
        e enquanto a opção nao existir pede sempre para escolher um */

        do
        {
            printf("\n\n\t\t\t\tEscolha um opção: ");
            scanf("%i", &opcao);

            switch(opcao)
            {
              //Caso o utilizador escolha a opção 1 ele irá escolher o cartão de cidadão
              case 1:
                    printf("\n\t\t\t\tDocumento de identificação - Cartão de cidadão\n");
                    printf("\n\t\t\t\t\tValidade do cartão de cidadão: ");
                    scanf("%s", dcs.validadedocumentoidenficacao);


                    //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                    do
                    {
                        printf("\n\t\t\t\t\tNumero de identificação: ");
                        scanf("%s", dcs.numeroidentificacao);
                    }
                    while(strlen(dcs.numeroidentificacao) != 9);

              break;

              //Caso o utilizador escolha a opção 2 ele irá escolher o bilhete de identidade
              case 2:
                    printf("\n\t\t\t\tDocumento de identificação - Bilhete de identidade\n");
                    printf("\n\t\t\t\t\tValidade do bilhete de identidade: ");
                    scanf("%s", dcs.validadedocumentoidenficacao);

                    //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                    do
                    {
                        printf("\n\t\t\t\t\tNumero de identificação: ");
                        scanf("%s", dcs.numeroidentificacao);
                    }
                    while(strlen(dcs.numeroidentificacao) != 9);

              break;

              //Caso o utilizador escolha a opção 2 ele irá escolher o passaporte
              case 3:
                    printf("\n\t\t\t\tDocumento de identificação - Passaporte\n");
                    printf("\n\t\t\t\t\tValidade do passaporte: ");
                    scanf("%s", dcs.validadedocumentoidenficacao);

                    //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                    do
                    {
                        printf("\n\t\t\t\t\tNumero de identificação: ");
                        scanf("%s", dcs.numeroidentificacao);
                    }
                    while(strlen(dcs.numeroidentificacao) != 9);

              break;

              default:
                    printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
            }
        }
        while(opcao >= 4);

        /* Verfica se introduziu a sua PROFISSAO e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tProfissão: ");
            scanf("%s", dcs.profissao);
        }
        while(strlen(dcs.profissao) == 0);

        /* Verfica se introduziu o nome da EMPRESA onde trabalha e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tNome empresa: ");
            scanf("%s", dcs.nomeempresa);
        }
        while(strlen(dcs.nomeempresa) == 0);

        /* Verfica se introduziu o seu USERNAME e se inroduziu regista
        senão continua aparecer para introduzir */

        do
        {
            printf("\n\t\t\t\tUsername: ");
            scanf("%s", dcs.username);
        }
        while(strlen(dcs.username) == 0);


        /* Verfica se a PASSWORD é maior que 4 e se for regista
        senão continua aparecer para introduzir ate que seja maior que quatro e converte para "*" */

        do
        {
            printf("\n\t\t\t\tPassword: ");

            while (1)
            {
                ch = getch();
                if(ch == 13)
                {
                    dcs.password[i] = '\0';
                    break;
                }
                else if (ch == 8)
                {
                    if (i > 0)
                    {
                        i--;
                        printf("\b \b");
                    }
                }
                else if (ch == 9 || ch == 32)
                {
                    continue;
                }
                else
                {
                    dcs.password[i] = ch;
                    i++;
                    printf("*");
                }
            }
            //printf("\n\t\t\t\tPASSWORD = %s", dcs.password);
            getch();
        }
        while (dcs.password < 4);

        do
        {
            printf("\n\t\t\t\Montante inicial: ");
            scanf("%s", dcs.dinheiro);
        }
        while(strlen(dcs.dinheiro) == 0);

        //Usar fprintf para armazenar a string no ficheiro
        /*fprintf(pont_fichS, "\n%s; ", dcs.nomecompleto);
        fprintf(pont_fichS, "%s; ", dcs.datanascimento);
        fprintf(pont_fichS, "%s; ", dcs.nacionaliade);
        fprintf(pont_fichS, "%s; ", dcs.morada);
        fprintf(pont_fichS, "%s; ", dcs.email);
        fprintf(pont_fichS, "%s; ", dcs.telemovel);
        fprintf(pont_fichS, "%s; ", dcs.tipodocumentoidenficacao);
        fprintf(pont_fichS, "%s; ", dcs.validadedocumentoidenficacao);
        fprintf(pont_fichS, "%s; ", dcs.numeroidentificacao);
        fprintf(pont_fichS, "%s; ", dcs.profissao);
        fprintf(pont_fichS, "%s; ", dcs.nomeempresa);
        fprintf(pont_fichS, "%s; ", dcs.username);
        fprintf(pont_fichS, "%s; ", dcs.password);
        fprintf(pont_fichS, "%s; ", dcs.dinheiro);*/

        fprintf(pont_fichS, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);

        fwrite(&dcs, sizeof(dcs), 1, pont_fich);

        //Usar fclose para fechar o ficheiro
        fclose(pont_fichS);

        fclose(pont_fich);

        printf("\n\n------------------------------------------------------------------------------------------------------------------------");

        printf("\n\n\t\t\t\t\t\tDados gravados com sucesso!\n");

        printf("\n------------------------------------------------------------------------------------------------------------------------\n");

        printf("\n");

        //Adormece o programa
        Sleep(2000);

        //Invoca a funcao Menu
        Menu();
    }

    //Limpa a consola
    system("cls");

    //Invoca a funcao Entrar
    Entrar();
}

void RegistarContaConjunta()
{

        system("cls");

        struct DadosContaConjunta dcc;
        int opcao, i = 0;
        char ch;

        //Cria variável apontador para o ficheiro
        FILE *pont_fich;

        //Abre o ficheiro com tipo de abertura w
        pont_fich = fopen("ficheiros/clientes.txt", "a");

        //Testa se o ficheiro foi realmente aberto senao cria
        if(pont_fich == NULL)
        {
            printf("ERRO, ficheiro nao existente!\n");
            perror("error");
            exit(1);
        }
        else
        {
            ///////////////////////////////////////1º Titular//////////////////////////////////////
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\tIntroduza os seus dados - Conta Conjunta - 1º Titular\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");

            //Retorna a telca pressionada
            //teclapressionada = getch();

            /* Verfica se o NOME é MAIOR ou IGUAL a 8 e se for regista
            senão continua aparecer para introduzir ate ser MAIOR ou IGUAL a oito */
            do
            {
                printf("\n\t\t\t\tNome completo: ");
                scanf("%s", dcc.nomecompleto);
            }
            while(strlen(dcc.nomecompleto) <= 8);

            /* Verfica se a DATA DE NASCIMENTO é MENOR à data registada no sistema e se for regista
            senão continua aparecer para introduzir ate ser MENOR */
            do
            {
                printf("\n\t\t\t\tData de nascimento: ");
                scanf("%s", dcc.datanascimento);
            }
            while(strlen(dcc.datanascimento) <= 8);

            /* Verfica se introduziu a sua NACIONALIDADE e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tNacionalidade: ");
                scanf("%s", dcc.nacionaliade);
            }
            while(strlen(dcc.nacionaliade) == 0);

             /* Verfica se introduziu a sua MORADA e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tMorada: ");
                scanf("%s", dcc.morada);
            }
            while(strlen(dcc.morada) == 0);

            /* Verfica se introduziu o seu EMAIL e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tEmail: ");
                scanf("%s", dcc.email);
            }
            while(strlen(dcc.email) == 0);

            /* Verfica se introduziu o seu TELEMOVEL e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tTelemovel: ");
                scanf("%s", dcc.telemovel);
            }
            while(strlen(dcc.telemovel) != 9);

            printf("\n\t\t\t\tTipo de documento de identificação: \n");

            printf("\n\t\t\t\t\t1 - Cartão de cidadão");
            printf("\n\t\t\t\t\t2 - Bilhete de identidade");
            printf("\n\t\t\t\t\t3 - Passaporte");

            /*Diz ao utilizador para escolher uma opção de tipo de documento de identificação
            e enquanto a opção nao existir pede sempre para escolher um */
            do
            {
                printf("\n\n\t\t\t\tEscolha um opção: ");
                scanf("%i", &opcao);

                switch(opcao)
                {

                  //Caso o utilizador escolha a opção 1 ele irá escolher o cartao de cidadao
                  case 1:
                        printf("\n\t\t\t\tDocumento de identificação - Cartão de cidadão\n");

                        printf("\n\t\t\t\t\tValidade do cartão de cidadão: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  //Caso o utilizador escolha a opção 2 ele irá escolher o bilhete de identidade
                  case 2:
                        printf("\n\t\t\t\tDocumento de identificação - Bilhete de identidade\n");

                        printf("\n\t\t\t\t\tValidade do bilhete de identidade: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  //Caso o utilizador escolha a opção 3 ele irá escolher o passaporte
                  case 3:
                        printf("\n\t\t\t\tDocumento de identificação - Passaporte\n");

                        printf("\n\t\t\t\t\tValidade do passaporte: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  default:
                        printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
                }
            }
            while(opcao >= 4);

            /* Verfica se introduziu a sua PROFISSAO e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tProfissão: ");
                scanf("%s", dcc.profissao);
            }
            while(strlen(dcc.profissao) == 0);

            /* Verfica se introduziu o nome da EMPRESA onde trabalha e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tNome empresa: ");
                scanf("%s", dcc.nomeempresa);
            }
            while(strlen(dcc.nomeempresa) == 0);

            /* Verfica se introduziu o seu USERNAME e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tUsername: ");
                scanf("%s", dcc.username);
            }
            while(strlen(dcc.username) == 0);

            /* Verfica se a PASSWORD é maior que 4 e se for regista
            senão continua aparecer para introduzir ate que seja maior que quatro e converte para "*" */
            do
            {
                printf("\n\t\t\t\tPassword: ");

                while (1)
                {
                    ch = getch();
                    if(ch == 13)
                    {
                        dcc.password[i] = '\0';
                        break;
                    }
                    else if (ch == 8)
                    {
                        if (i > 0)
                        {
                            i--;
                            printf("\b \b");
                        }
                    }
                    else if (ch == 9 || ch == 32)
                    {
                        continue;
                    }
                    else
                    {
                        dcc.password[i] = ch;
                        i++;
                        printf("*");
                    }
                }
                //printf("\n\t\t\t\tPASSWORD = %s", dcc.password);
                getch();
            }
            while (dcc.password < 4);

            //Usar fprintf para armazenar a string no ficheiro
            fprintf(pont_fich, "\n%s; ", dcc.nomecompleto);
            fprintf(pont_fich, "%s; ", dcc.datanascimento);
            fprintf(pont_fich, "%s; ", dcc.nacionaliade);
            fprintf(pont_fich, "%s; ", dcc.morada);
            fprintf(pont_fich, "%s; ", dcc.email);
            fprintf(pont_fich, "%s; ", dcc.telemovel);
            fprintf(pont_fich, "%s; ", dcc.tipodocumentoidenficacao);
            fprintf(pont_fich, "%s; ", dcc.validadedocumentoidenficacao);
            fprintf(pont_fich, "%s; ", dcc.numeroidentificacao);
            fprintf(pont_fich, "%s; ", dcc.profissao);
            fprintf(pont_fich, "%s; ", dcc.nomeempresa);
            fprintf(pont_fich, "%s; ", dcc.username);
            fprintf(pont_fich, "%s; ", dcc.password);

            //Usar fclose para fechar o ficheiro
            fclose(pont_fich);

            printf("\n\n------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\t\t\t\t\tDados gravados com sucesso!\n");

            printf("\n------------------------------------------------------------------------------------------------------------------------\n");

            printf("\n");

            //Adormece o programa
            Sleep(2000);

            //Limpa a consola
            system("cls");





            ///////////////////////////////////////2º Titular//////////////////////////////////////
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\tIntroduza os seus dados - Conta Conjunta - 2º Titular\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");

            /* Verfica se o NOME é MAIOR ou IGUAL a 8 e se for regista
            senão continua aparecer para introduzir ate ser MAIOR ou IGUAL a oito */
            do
            {
                printf("\n\t\t\t\tNome completo: ");
                scanf("%s", dcc.nomecompleto);
            }
            while(strlen(dcc.nomecompleto) <= 8);

            /* Verfica se a DATA DE NASCIMENTO é MENOR à data registada no sistema e se for regista
            senão continua aparecer para introduzir ate ser MENOR */
            do
            {
                printf("\n\t\t\t\tData de nascimento: ");
                scanf("%s", dcc.datanascimento);
            }
            while(strlen(dcc.datanascimento) <= 8);

            /* Verfica se introduziu a sua NACIONALIDADE e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tNacionalidade: ");
                scanf("%s", dcc.nacionaliade);
            }
            while(strlen(dcc.nacionaliade) == 0);

             /* Verfica se introduziu a sua MORADA e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tMorada: ");
                scanf("%s", dcc.morada);
            }
            while(strlen(dcc.morada) == 0);

            /* Verfica se introduziu o seu EMAIL e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tEmail: ");
                scanf("%s", dcc.email);
            }
            while(strlen(dcc.email) == 0);

            /* Verfica se introduziu o seu TELEMOVEL e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tTelemovel: ");
                scanf("%s", dcc.telemovel);
            }
            while(strlen(dcc.telemovel) != 9);

            printf("\n\t\t\t\tTipo de documento de identificação: \n");

            printf("\n\t\t\t\t\t1 - Cartão de cidadão");
            printf("\n\t\t\t\t\t2 - Bilhete de identidade");
            printf("\n\t\t\t\t\t3 - Passaporte");

            /*Diz ao utilizador para escolher uma opção de tipo de documento de identificação
            e enquanto a opção nao existir pede sempre para escolher um */
            do
            {
                printf("\n\n\t\t\t\tEscolha um opção: ");
                scanf("%i", &opcao);

                switch(opcao)
                {

                  //Caso o utilizador escolha a opção 1 ele irá escolher o cartao de cidadao
                  case 1:
                        printf("\n\t\t\t\tDocumento de identificação - Cartão de cidadão\n");

                        printf("\n\t\t\t\t\tValidade do cartão de cidadão: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  //Caso o utilizador escolha a opção 2 ele irá escolher o bilhete de identidade
                  case 2:
                        printf("\n\t\t\t\tDocumento de identificação - Bilhete de identidade\n");

                        printf("\n\t\t\t\t\tValidade do bilhete de identidade: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  //Caso o utilizador escolha a opção 3 ele irá escolher o passaporte
                  case 3:
                        printf("\n\t\t\t\tDocumento de identificação - Passaporte\n");

                        printf("\n\t\t\t\t\tValidade do passaporte: ");
                        scanf("%s", dcc.validadedocumentoidenficacao);

                        //O utilizador tem que inserir o numero de indentificação com os seus 9 digitos respetivos
                        do
                        {
                            printf("\n\t\t\t\t\tNumero de identificação: ");
                            scanf("%s", dcc.numeroidentificacao);
                        }
                        while(strlen(dcc.numeroidentificacao) != 9);

                        break;

                  default:
                        printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
                }
            }
            while(opcao >= 4);

            /* Verfica se introduziu a sua PROFISSAO e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tProfissão: ");
                scanf("%s", dcc.profissao);
            }
            while(strlen(dcc.profissao) == 0);

            /* Verfica se introduziu o nome da EMPRESA onde trabalha e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tNome empresa: ");
                scanf("%s", dcc.nomeempresa);
            }
            while(strlen(dcc.nomeempresa) == 0);

            /* Verfica se introduziu o seu USERNAME e se inroduziu regista
            senão continua aparecer para introduzir */
            do
            {
                printf("\n\t\t\t\tUsername: ");
                scanf("%s", dcc.username);
            }
            while(strlen(dcc.username) == 0);

            /* Verfica se a PASSWORD é maior que 4 e se for regista
            senão continua aparecer para introduzir ate que seja maior que quatro e converte para "*" */
            do
            {
                printf("\n\t\t\t\tPassword: ");

                while (1)
                {
                    ch = getch();
                    if(ch == 13)
                    {
                        dcc.password[i] = '\0';
                        break;
                    }
                    else if (ch == 8)
                    {
                        if (i > 0)
                        {
                            i--;
                            printf("\b \b");
                        }
                    }
                    else if (ch == 9 || ch == 32)
                    {
                        continue;
                    }
                    else
                    {
                        dcc.password[i] = ch;
                        i++;
                        printf("*");
                    }
                }
                //printf("\n\t\t\t\tPASSWORD = %s", dcc.password);
                getch();
            }
            while (dcc.password < 4);

            //Usar fprintf para armazenar a string no ficheiro
            fprintf(pont_fich, "\n%s; ", dcc.nomecompleto);
            fprintf(pont_fich, "%s; ", dcc.datanascimento);
            fprintf(pont_fich, "%s; ", dcc.nacionaliade);
            fprintf(pont_fich, "%s; ", dcc.morada);
            fprintf(pont_fich, "%s; ", dcc.email);
            fprintf(pont_fich, "%s; ", dcc.telemovel);
            fprintf(pont_fich, "%s; ", dcc.tipodocumentoidenficacao);
            fprintf(pont_fich, "%s; ", dcc.validadedocumentoidenficacao);
            fprintf(pont_fich, "%s; ", dcc.numeroidentificacao);
            fprintf(pont_fich, "%s; ", dcc.profissao);
            fprintf(pont_fich, "%s; ", dcc.nomeempresa);
            fprintf(pont_fich, "%s; ", dcc.username);
            fprintf(pont_fich, "%s; ", dcc.password);

            //Usar fclose para fechar o ficheiro
            fclose(pont_fich);

            printf("\n\n------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\t\t\t\t\tDados gravados com sucesso!\n");

            printf("\n------------------------------------------------------------------------------------------------------------------------\n");

            printf("\n");

            //Adormece o programa
            Sleep(2000);

            //Invoca a funcao Menu
            Menu();
        }
        system("cls");
        Entrar();
}

void RegistarEmprestimo()
{
    system("cls");
    Sleep(1000);
    printf("Em construção . . .");
    Menu();
}

void RegistarDeposito()
{
    /*system("cls");

    int teste = 0;

    struct DadosContaSingular adicionar, transacao;

    FILE *pont_fich;

    pont_fich = fopen("ficheiros/clientes.txt","r");

    printf("Insira o ID: ");
    scanf("%d", &transacao.id);

    while(fscanf(pont_fich, "%d %s %s %s %s %s %s %s %s %s %s %s %s %s %s", &adicionar.id, adicionar.nomecompleto, adicionar.datanascimento, adicionar.nacionaliade, adicionar.morada, adicionar.email, adicionar.telemovel, adicionar.tipodocumentoidenficacao, adicionar.validadedocumentoidenficacao, adicionar.numeroidentificacao, adicionar.profissao, adicionar.nomeempresa, adicionar.username, adicionar.password, adicionar.dinheiro)!= EOF)
    {
        if(adicionar.id == transacao.id)
        {
            teste = 1;
            printf("Record Found");
            getch();
        }
        else
        {
        	teste = 0;
        	printf("NOT FOUND");
        	getch();
		}
    }

    fclose(pont_fich);

   if(teste != 1)
    {
    	printf("\n\nRecord not found!!");
    	getch();
	}
   else
   {
    	printf("Record found");
    	getch();
	}*/

}

void UpdateCliente()
{
    //Limpa Consola
    system("cls");


    int op;
    char username[20];

    FILE *log, *log2;

    log = fopen("ficheiros/clientes.txt","r");
    log2 = fopen("ficheiros/clientesS.txt","w");

    struct DadosContaSingular dcs, atualizar;

    CorTextoVerde();

    //Menu registar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu Atualizar - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\tUsername: ");
    scanf("%s", &username);

    while(fread(&dcs, sizeof(dcs), 1, log))
    {

        if(strcmp(username, dcs.username) == 0)
        {
            printf("\n\t\t\t\t\t[1] - Atualizar e-mail");
            printf("\n\t\t\t\t\t[2] - Atualizar telemóvel");
            printf("\n\t\t\t\t\t[3] - Atualizar profissão");
            printf("\n\t\t\t\t\t[4] - Atualizar nome empresa");
            printf("\n\t\t\t\t\t[0] - Sair");


            do
            {
                printf("\n\n\t\t\t\t\tEscolha uma opcao: ");
                scanf("%i", &op);

                switch(op)
                {
                    case 1:

                        printf("\n\t\t\t\t\tE-mail: ");
                        scanf("%s", atualizar.email);

                        fprintf(log2, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, atualizar.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);

                        printf("\nAlterações guardadas!");

                        break;

                    case 2:

                        printf("\n\t\t\t\t\tTelemovel: ");
                        scanf("%s", atualizar.telemovel);

                        fprintf(log2, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, atualizar.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);

                        printf("\nAlterações guardadas!");

                        break;

                    case 3:

                        printf("\n\t\t\t\t\tProfissão: ");
                        scanf("%s", atualizar.profissao);

                        fprintf(log2, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, atualizar.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);

                        printf("\nAlterações guardadas!");

                        break;

                    case 4:

                        printf("\n\t\t\t\t\tNome empresa: ");
                        scanf("%s", atualizar.nomeempresa);

                        fprintf(log2, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, atualizar.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);

                        printf("\nAlterações guardadas!");

                    default:
                        printf("ERRO");
                }
            }while(op > 4);
        }
        else
        {
            fprintf(log2, "\n%s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s,", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);
        }
    }

    fclose(log);

    fclose(log2);

    MenuCliente();

}

//////////////////VisualizerClientesContas//////////////
void VerTiposDeConta()
{
    //Limpa consola
    system("cls");

    int opcao;

    CorTextoVerde();

    //Menu visualizar tipo de conta
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tVisualizar tipo de conta - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\tSelecione um tipo de conta: \n");

    printf("\n\t\t\t\t\t\t[1] - Conta singular\n");
    printf("\t\t\t\t\t\t[2] - Conta coletiva\n");
    printf("\t\t\t\t\t\t[0] - Sair\n");

    /* Diz ao utilizador para escolher uma opção e enquanto essa opção for maior que o numero de opções existentes
    o programa irá estar sempre a pedir uma opcao para escolher*/

    do
    {
        printf("\n\t\t\t\t\tEscolha uma opção: ");

        CorTextAmarela();

        scanf("%i", &opcao);

        LimparCorTexto();

        switch(opcao)
        {
            //Caso o utilizador escolha a opção 1 ele ira ver os clientes todos
            case 1:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta singular escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(2000);

                LerFicheiroClientes();

                break;

            //Caso o utilizador escolha a opção 2 ele ira poder remover os clientes da base de dados
            case 2:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tConta coletiva escolhida, a procurar . . .\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(2000);

                LerFicheiroClientes();

                break;

            //Caso o utilizador escolha a opção 0 ele ira sair deste menu e irá para o menu inicial
            case 0:
                /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\t\t\t\t\tOpção %i escolhida - Sair\n", opcao);
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");*/

                Sleep(1000);

                Menu();

                break;

            default:
                printf("\n\t\t\t\tOpções inválidas por favor tente novamente\n");
        }
    }
    while(opcao > 3);
}

void LerFicheiroClientes()
{
    struct DadosContaSingular dcs;

    system("cls");

    //Cria variável apontador para o ficheiro
    FILE *pont_fich;

    //Abre o ficheiro com tipo de abertura r
    pont_fich = fopen("ficheiros/clientesS.txt", "r");

    CorTextoVerde();

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tLista de clientes OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    //Testa se o ficheiro foi realmente aberto senao cria
    if(pont_fich == NULL)
    {
        printf("ERRO, ficheiro nao existente!\n");
        perror("error");
        exit(1);
    }

    //Se o ficheiros abrir, irá ser apresentado todo o contéudo presente no ficheiro
    else
    {
        //Faz uma "leitura" ao ficheiro de todos os clientes presentes no ficheiro
        printf("\n\t%8s \t%12s %26s %17s %23s\n", "Nome", "Data Nasc.", "Nacionalidade", "Morada", "E-mail\n");

        while(fscanf(pont_fich, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s",dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro) != EOF)
        {

            printf("\n\t%8s \t%-20s \t%15s \t%15s \t%10s\n", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email);

            //printf("\n\t\t\t\t%s %s %s \n\t\t\t\t%s %s %s \n\t\t\t\t%s %s %s \n\t\t\t\t%s %s %s %s\n", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password);
        }
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    }
    getch();

    fclose(pont_fich);
}

void LerFicheiroFiltrado()
{
    //Limpa Consola
    system("cls");

    char username[20];

    FILE *log, *log2;

    log = fopen("ficheiros/clientes.txt","r");
    log2 = fopen("ficheiros/clientesS.txt","r");

    struct DadosContaSingular dcs;

    CorTextoVerde();

    //Menu registar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu Ver - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\tUsername: ");
    scanf("%s", &username);

    while(fread(&dcs, sizeof(dcs), 1, log))
    {
        //Faz uma "leitura" ao ficheiro de todos os clientes presentes no ficheiro

        if(strcmp(username, dcs.username) == 0)
        {

            printf("\n\t%8s \t%12s %26s %17s %23s\n", "Nome", "Data Nasc.", "Nacionalidade", "Morada", "E-mail\n");
            printf("\n\t%8s \t%-20s \t%15s \t%15s \t%10s\n", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email);
            getch();
        }
        else
           getch();
    }

    fclose(log);

    fclose(log2);

    MenuCliente();

}

/////////////////////Eliminar///////////////////////////
void Eliminar()
{
    //Limpa Consola
    system("cls");

    char username[20];

    FILE *log, *log2;

    log = fopen("ficheiros/clientes.txt","r");
    log2 = fopen("ficheiros/clientesS.txt","w");

    struct DadosContaSingular dcs;

    CorTextoVerde();

    //Menu registar OldBank
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tMenu Eliminar - OldBank\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\tUtilizador que deseja eliminar: ");
    scanf("%s", &username);

    while(fread(&dcs, sizeof(dcs), 1, log))
    {

        if(strcmp(username, dcs.username) != 0)
        {
            fprintf(log2, "\n%s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s,", dcs.nomecompleto, dcs.datanascimento, dcs.nacionaliade, dcs.morada, dcs.email, dcs.telemovel, dcs.tipodocumentoidenficacao, dcs.validadedocumentoidenficacao, dcs.numeroidentificacao, dcs.profissao, dcs.nomeempresa, dcs.username, dcs.password, dcs.dinheiro);
        }
        else
        {
            printf("Deleted");
        }
    }

    fclose(log);

    fclose(log2);

    MenuAdmin();
}

////////////////////LoginEntrar/////////////////////////
void Entrar()
{
    //Limpar a consola
    system("cls");

    char username[20];
    char password[20];

    //Ler o ficheiro clientes.txt
    /*FILE *pont_fich;
    pont_fich = fopen("ficheiros/clientes.txt", "r");*/

    CorTextoVerde();

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tIntroduza os seus dados\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\t\tUsername: ");
    scanf("%s", &username);

    printf("\t\t\t\t\t\tPassword: ");
    scanf("%s", &password);

    if(strcmp(username, "admin") == 0)
    {
        if(strcmp(password, "admin") == 0)
        {
            //CorTextoVerde();

            /*printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            printf("\n\t\t\t\t\t     Dados login certos, a entrar . . .\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");*/

            Sleep(1000);

            MenuAdmin();

            system("cls");
        }
        else
        {
            //CorTextoVerde();

            printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            printf("\n\t\t\t\t\t     Dados login errados . . .\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");

            Sleep(2000);

            Menu();
        }
    }
    else
    {
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\t\t\t\t\t     Dados login errados . . .\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        Sleep(2000);

        Menu();
    }
}

void EntrarCliente()
{
    char username[30], password[20];

    struct DadosContaSingular dcs;

    //Limpar a consola
    system("cls");

    FILE *pont_fich;

    pont_fich = fopen("ficheiros/clientes.txt","r");

    CorTextoVerde();

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tIntroduza os seus dados\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    LimparCorTexto();

    printf("\n\t\t\t\t\t\tUsername: ");
    scanf("%s", &username);

    printf("\t\t\t\t\t\tPassword: ");
    scanf("%s", &password);

    while(fread(&dcs,sizeof(dcs),1,pont_fich))
    {
        if(strcmp(username,dcs.username) == 0 && strcmp(password, dcs.password) == 0)
        {
            printf("\nSUCESSO");
            MenuCliente();
        }
        else
        {
            //printf("\nINSUCESSO");
            printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            printf("\n\t\t\t\tDados incorretos, por favor insira novamente os seus dados . . .");
            printf("\n\n------------------------------------------------------------------------------------------------------------------------");
            //Sleep("100");
            //EntrarCliente();
        }
    }
    fclose(pont_fich);
}

///////////////////////SetasMenu////////////////////////
void Seta(int PosicaoReal, int PosicaoDaSeta)
{
    //Verificar se a posição real da seta é igual a posição da seta no terminal e se for coloca a seta
    if(PosicaoReal == PosicaoDaSeta)
        printf(" ---->> ");
    else
        printf("         ");
}

//////////////////////Parte Grafica/////////////////////
void Copyright()
{
    printf("\t====================================================================================================\n");
    printf("\t\t\t\t\t\tSoftware Solution Development\n");
    printf("\t\t\t\tCriação, reparação e desenvolvimento de software para empresas\n");
    printf("\t\t\t\t\t\t   Copyright 2019 | SSDev\n");
    printf("\t====================================================================================================\n");

    printf("________________________________________________________________________________________________________________________\n\n");
}

int main()
{
    //Permite com que o programa aceite os acentos e etc
    setlocale(LC_ALL, "");

    //Invoca a funcões()
    Menu();
    //Copyright();

    return 0;
}
