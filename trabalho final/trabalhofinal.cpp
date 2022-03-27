#include<iostream>
#include<stdlib.h>//sistema
#include<locale.h>//idioma
#include<string.h>//strcpy
#include<stdio.h>
using namespace std;
#define MAX 200
//VARIAVEIS GLOBAIS------------------------------------------------------------|
const int Nservicos = 8;
int qttPrefe = 0;
int qtt = 0;
int att = 0;
int contador = 0;
int senhas = 0;
//STRUCTS----------------------------------------------------------------------|
struct STTservico{
    int STTcodigo;
    char STTnome[20];
};
struct Paciente{
    int senha;
    STTservico servopcao;
    char tipo[15];
};
//-----------------------/
//FUNÇÕES----------------------------------------------------------------------|
void Menu(Paciente cliente[],Paciente atendido[],Paciente preferente[],STTservico tipodeservicos[]);
void GeraSenha(Paciente cliente[],Paciente preferente[],STTservico tipodeservicos[]);
void ListarSenha(Paciente cliente[],Paciente preferente[],STTservico tipodeservicos[]);
void Atender(Paciente cliente[],Paciente atendido[],Paciente preferente[],STTservico tipodeservicos[]);
void ListarAtendidas(Paciente cliente[],Paciente atendido[],STTservico tipodeservicos[]);
//-----------------------/
int main(){
    setlocale(LC_ALL,"Portuguese");
    Paciente cliente[MAX] = {0,0}; //VETOR CONTENDO APENAS CLIENTES NORMAIS
    Paciente atendido[MAX] = {0,0};//VETOR DE PESSOAS QUE JA FORAM ATENDIDAS IDEPENDETE DE QUE TIPO SEJA || AINDA SAO MOSTRADA DIFERENTES
    Paciente preferente[MAX] = {0,0};//VETOR DE PESSOAS PREFERENTES
    STTservico tipodeservicos[]={//VETOR COM TIPOS DE SERVIÇOS
        {0 ,"Exame de Sangue" },
        {1 ,"Exame de Urina"},
        {2 ,"Exame de Fezes"},
        {3 ,"Teste para Covid-19"},
        {4 ,"Cardiologista"},
        {5 ,"Gastrologista"},
        {6 ,"Oronpedista"},
        {7 ,"Alergologista"},
    };
    for(;;)
    {
        Menu(cliente,atendido,preferente,tipodeservicos);
    }
    cout << "\n\n\n\n\n\n\n";
return 0;
}
void Menu(Paciente cliente[],Paciente atendido[],Paciente preferente[],STTservico tipodeservicos[]){
    system("clear");
    //system("color b");
    cout << "|===============================================================================================================|\n";
    cout << "|      ::::::::       :::        :::::::::::       ::::    :::       :::::::::::       ::::::::           :::   |\n";
    cout << "|    :+:    :+:      :+:            :+:           :+:+:   :+:           :+:          :+:    :+:        :+: :+:  |\n";
    cout << "|   +:+             +:+            +:+           :+:+:+  +:+           +:+          +:+              +:+   +:+  |\n";
    cout << "|  +#+             +#+            +#+           +#+ +:+ +#+           +#+          +#+             +#++:++#++:  |\n";
    cout << "|+#+             +#+            +#+           +#+  +#+#+#           +#+          +#+             +#+     +#+    |\n";
    cout << "|#+#    #+#      #+#            #+#           #+#   #+#+#           #+#          #+#    #+#      #+#     #+#    |\n";
    cout << "|########       ########## ###########       ###    ####       ###########       ########       ###     ###     |\n";
    cout << "|===============================================================================================================|\n";
    cout << "|        1-GERAR SENHA           2-LISTAR SENHAS          3-LISTAR SENHAS ATENDIDAS          4-ATENDER SENHAR   |\n";
    cout << "|===============================================================================================================|\n";
    cout << "|                                           -=----={   }=----=-                                                 |";
    cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    int opcao;
    cin >> opcao;
    switch(opcao)
    {
        case 1: GeraSenha(cliente,preferente,tipodeservicos);
            break;
        case 2: ListarSenha(cliente,preferente,tipodeservicos);
            break;
        case 3: ListarAtendidas(cliente,atendido,tipodeservicos);
            break;
        case 4: Atender(cliente,atendido,preferente,tipodeservicos);
            break;

        default: cout << "###(Erro opcao invalida)###\n";
            system("read -p \"Pressione enter para sair\" saindo");
    }
}
void GeraSenha(Paciente cliente[],Paciente preferente[],STTservico tipodeservicos[]){
    system("clear");
    int reposta;
    int opcao;
    cout << "|===================================================================|\n";
    cout << "| ___         _     _                _                    _       |\n";
    cout << "|| _  |_ _||_| |_ _ _    | |_    __ _ _| |_ _ |\n";
    cout << "||    -| -| . | | -|  |  _| . |  | . | -|  |_ -| -_|   |   | .'||\n";
    cout << "||_||_|  ||_|| || |_|  |_|_|  |_|_|||||_,||\n";
    cout << "|          |_|                                                    |\n";
    cout << "|===================================================================|\n";
    cout << "|             Senha Preferencial, Sim(1) ou Não(2):                 |\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    do
    {//Se a pessoa digitar errado
        cin >> reposta;
        if(reposta < 1 || reposta > 2)
            cout << "Opção invalida, Digite novamente: ";
    }while(reposta < 1 || reposta > 2);

        if(reposta == 2)//IMPLEMENTAÇÃO DE SENHA DO TIPO NORMAL--->
        {
            if(qtt == MAX)//TESTE PARA NÃO ULTRAPASSAR LIMITE
            {
                cout << "Fila Cheia !!!\n";
            }
            else
            {
                cliente[qtt].senha = senhas+1;//CRIANDO NUMERO DE SENHA PARA O CLIENTE;
                strcpy(cliente[qtt].tipo, "Normal");//RECEBENDO "TAG" NORMAL PARA A LISTAGEM;
                cout << "|                Senha N: " << "=-={ " << cliente[qtt].senha << " }=-=                               |";
                cout << "\n|                                                                   |\n|Serviços Ofertados: ";
                cout << " =-=Exames=-=      =-=-Consultas=-=-           |\n";
                cout << "|                     0-| Sangue |      4-|Cardiologista|           |\n";
                cout << "|                     1-| Urina  |      5-|Gastrologista|           |\n";
                cout << "|                     2-| Fezes  |      6-|Oronpedista  |           |\n";
                cout << "|                     3-|Covid-19|      7-|Alergologista|           |\n";
                cout << "|Opção:                                                             |\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
                do
                {
                    cin >> opcao;
                    if(opcao < 0 || opcao >= Nservicos)
                    {
                        cout << "\n ####Opção Invalida !!!###\n";
                        cout << "Digite novamente: ";
                    }
                }
                while(opcao < 0 || opcao >= Nservicos);
                cliente[qtt].servopcao = tipodeservicos[opcao];
            }
                qtt++;
                senhas++;
        }

        else if(reposta == 1)//PREFERENCIAL !!!
        {
            if(qtt == MAX)
            {
                cout << "Fila Cheia !!!\n";
            }
            else
            {
                preferente[qttPrefe].senha = senhas+1;
                strcpy(preferente[qttPrefe].tipo, "Preferencial");
                cout << "|                Senha N: " << "=-={ " << preferente[qttPrefe].senha << " }=-=                               |";
                cout << "\n|                                                                   |\n|Serviços Ofertados: ";
                cout << " =-=Exames=-=      =-=-Consultas=-=-           |\n";
                cout << "|                     0-| Sangue |      4-|Cardiologista|           |\n";
                cout << "|                     1-| Urina  |      5-|Gastrologista|           |\n";
                cout << "|                     2-| Fezes  |      6-|Oronpedista  |           |\n";
                cout << "|                     3-|Covid-19|      7-|Alergologista|           |\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
                do
                {
                    cin >> opcao;
                    if(opcao < 0 || opcao >= Nservicos)
                    {
                        cout << "\n ####Opção Invalida !!!###\n";
                        cout << "Digite novamente: ";
                    }
                }
                while(opcao < 0 || opcao >= Nservicos);
                preferente[qttPrefe].servopcao = tipodeservicos[opcao];
                qttPrefe++;
                senhas++;
            }
        }
        cout << "\n\n\n\n\n\n\n\n\n\n  ";
}
void ListarSenha(Paciente cliente[],Paciente preferente[],STTservico tipodeservicos[]){
    system("clear");
    cout << "|=========================================================|\n";
    cout << "| __     _       _                               _        |\n";
    cout << "||  |   || __ | |_  _  _    _  _  _ | |_  _ |\n";
    cout << "||  |_ | || -||  || .'||  _|  | -|| -_||   ||   || .'||\n";
    cout << "||__||||_|||  |,|||    |_||_||||||||__,||\n";
    cout << "|=========================================================|\n";

    cout << "|=-=-=-=-=-=-=-=-=-={Senhas Normais}-=-=-=-=-=-=-=-=-=-=-=|\n";
    for(int i = 0; i < qtt; i++)
    {
        cout << "\nSenha: " << cliente[i].senha << " Serviço: " << cliente[i].servopcao.STTnome;
    }
    cout << "\n\n|=-=-=-=-=-=-=-=-={Senhas Preferenciais}-=-=-=-=-=-=-=-=-=|\n";
    for(int i = 0; i < qttPrefe; i++)
    {
        cout << "\nSenha: " << preferente[i].senha << " Serviço: " << preferente[i].servopcao.STTnome;
    }
    cout << "\n\n\n";
    system("read -p \"Pressione enter para sair\" saindo");
}
void Atender(Paciente cliente[],Paciente atendido[], Paciente preferente[],STTservico tipodeservicos[]){
    system("clear");
    cout << "|=========================================================|\n";
    cout << "| ___  _                _  _                   _        |\n";
    cout << "||  _  || |_  _  _  | ||| __  __  _ | |_  _ |\n";
    cout << "||     ||  || -||   || . || ||     || -_||   ||  _|| . ||\n";
    cout << "||_||||  |_|||||_||||||||_||||||  |__||\n";
    cout << "|=========================================================|\n";
    if(qtt == 0 && qttPrefe == 0)
    {
        cout << "\n=-=-=-=-Fila Vazia-=-=-=-=\n\n\n";
    }

    //ANALISADOR DE QUEM DEVE SER O PRIMEIRO EX: PREFERENTE 1 OU NORMAL 1 NA FILA
    else if(qttPrefe !=0 && preferente[0].senha < cliente[0].senha && qtt != 0){
        cout << "Senha Preferencial: " << preferente[0].senha << endl;
        cout << "Serviço: " << preferente[0].servopcao.STTnome << endl;
        atendido[att] = preferente[0];
        att++;
        for(int i = 0; i < qttPrefe; i++)
        {
            preferente[i] = preferente[i+1];
        }
        qttPrefe--;
        contador--;
        cout << "\nAtendido Preferencial!\n\n" << endl;
    }
    //ATENDIMENTO NORMAL-------------------------
    else if(qtt !=0 && (contador == 0 || qttPrefe == 0))
    {
            cout << "Senha Normal: " << cliente[0].senha << endl;
            cout << "Serviço: " << cliente[0].servopcao.STTnome << endl;
            atendido[att] = cliente[0];
            att++;
            for(int i = 0; i < qtt; i++)
            {
                cliente[i] = cliente[i+1];
            }
            qtt--;
            contador = +2;
            cout << "\nAtendido Normal!\n\n" << endl;
    }
    //ATENDIMENTO PREFERENCIAL-------------------
    else
    {
        cout << "Senha Preferencial: " << preferente[0].senha << endl;
        cout << "Serviço: " << preferente[0].servopcao.STTnome << endl;
        atendido[att] = preferente[0];
        att++;
        for(int i = 0; i < qttPrefe; i++)
        {
            preferente[i] = preferente[i+1];
        }
        qttPrefe--;
        contador--;
        cout << "\nAtendido Preferencial!\n\n" << endl;
    }
    //CORRETOR DO CONTADOR----------------------
    if(qttPrefe == 0 || contador < 0)
    {
        contador = 0;
    }
    if(contador == 4)
    {
        contador = -2;
    }
    //CORRETOR CASO ACONTEÇA OVERFLOW NO VETOR DE ATENDIMENTO;
    if(att == MAX)
    {
        att = 0;
        for(int i =0; i < MAX; i++)
        {
            atendido[i].senha = 0;
            strcpy(atendido[i].servopcao.STTnome," ");
            strcpy(atendido[i].tipo," ");
        }
        cout << "\nLISTA DE ATENDIDOS CHEIA, SERA RESETADA !!!\n";
    }
    cout << contador;
    system("read -p \"Pressione enter para sair\" saindo");
}
void ListarAtendidas(Paciente cliente[],Paciente atendido[],STTservico tipodeservicos[]){
    system("clear");
    cout << "|==================================================================================|\n";
    cout << "| __     _       _             _              _                _  _    _           |\n";
    cout << "||  |   || __ | |_  _    | | __    _ | |_  _  _  | ||| | | __  _ |\n";
    cout << "||  |_ | || -||  || .'|  | . || -|  | .'||  || -||   || . || || . || . ||_ -||\n";
    cout << "||__||||_|||  |,|  |_||_|  |,|||  |_|||||_||||_||_||__||\n";
    cout << "|==================================================================================|\n";
    for(int i = 0; i < att; i++)
    {
        cout << "|Senha: " << atendido[i].senha << " Servico: " << atendido[i].servopcao.STTnome << " Tipo de Senha: " << atendido[i].tipo << " |" << endl;
    }
    cout << "\n\n\n\n\n\n\n\n\n\n  ";
    system("read -p \"Pressione enter para sair\" saindo");
}
