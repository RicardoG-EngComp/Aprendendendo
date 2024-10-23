#include <iostream>
#include <string>
using namespace std;

// Classe Pessoa
class Pessoa {
public:
    int id;
    string nome;
    int CPF;

    void CadastrarPessoa() {
        cout << "Digite o ID da pessoa: ";
        cin >> id;
        cout << "Digite o nome da pessoa: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Digite o CPF da pessoa: ";
        cin >> CPF;
    }

    void ExibirPessoa() {
        cout << "ID: " << id << endl;
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << CPF << endl;
    }
};

// Classe Aluno
class Aluno : public Pessoa {
public:
    string curso;
    float mensalidade;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o curso do aluno: ";
        cin.ignore();
        getline(cin, curso);
        cout << "Digite a mensalidade do aluno: ";
        cin >> mensalidade;
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Curso: " << curso << endl;
        cout << "Mensalidade: " << mensalidade << endl;
    }
};

// Classe Professor
class Professor : public Pessoa {
public:
    string curso;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o curso do professor: ";
        cin.ignore();
        getline(cin, curso);
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Curso: " << curso << endl;
    }
};

// Classe Administrativo
class Administrativo : public Pessoa {
public:
    string setor;
    string periodoTrabalho;

    void CadastrarInformacoes() {
        CadastrarPessoa();
        cout << "Digite o setor do administrativo: ";
        cin.ignore();
        getline(cin, setor);
        cout << "Digite o per�odo de trabalho: ";
        getline(cin, periodoTrabalho);
    }

    void ExibirInformacoes() {
        ExibirPessoa();
        cout << "Setor: " << setor << endl;
        cout << "Per�odo de Trabalho: " << periodoTrabalho << endl;
    }
};

// Fun��o para exibir o menu e tratar a escolha do usu�rio
void exibirMenu() {
    int opcao;
    bool sair = false;

    while (!sair) {
        cout << "\nMenu de Op��es:\n";
        cout << "1. Cadastro de Aluno\n";
        cout << "2. Cadastro de Professor\n";
        cout << "3. Cadastro de T�cnico Administrativo\n";
        cout << "Digite a op��o desejada: ";
        cin >> opcao;

        if (opcao == 1) {
            Aluno aluno;
            aluno.CadastrarInformacoes();
            cout << "\nInforma��es do Aluno cadastradas:\n";
            aluno.ExibirInformacoes();
            sair = true;
        }
        else if (opcao == 2) {
            Professor professor;
            professor.CadastrarInformacoes();
            cout << "\nInforma��es do Professor cadastradas:\n";
            professor.ExibirInformacoes();
            sair = true;
        }
        else if (opcao == 3) {
            Administrativo administrativo;
            administrativo.CadastrarInformacoes();
            cout << "\nInforma��es do T�cnico Administrativo cadastradas:\n";
            administrativo.ExibirInformacoes();
            sair = true;
        }
        else {
            cout << "Op��o inv�lida! Por favor, selecione uma op��o v�lida.\n";
        }
    }
}

int main() {
    exibirMenu();
    return 0;
}
