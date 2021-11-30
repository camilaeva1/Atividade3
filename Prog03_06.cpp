#include <iostream>
#include <cstring>;

using std::cin;
using std::cout;
using std::endl;
using std::string;


struct Aluno {
    string nome;
    string sobrenome;
    int matricula;
    double nota1, nota2;
    char conceito;

};
struct Universidade{
    string nome;
    int nalunos;
    int ncursos;
    int nprof;
    int idade;
};

int main(){
    struct Aluno t1, t2; //Chamando a estrutura Aluno com duas variáveis, t1 e t2. Cada variável terá
                         //todos os atributos inerentes à estrutura Aluno.

    //Inserindo valores aos atributos

    t1.nome = "Camila"; //Nome da aluna
    t1.sobrenome = "Evangelista"; //Sobrenome da aluna
    t1.matricula = 201911140008; //Matrícula da aluna
    t1.nota1 = 9.5; //Primeira nota
    t1.nota2 = 10.0; //Segunda nota
    t1.conceito = 'E'; //Conceito
    t2 = t1; //Passando valores dos atributos de t1 para t2

    //Imprimindo t2
    cout << "NOME: " << t2.nome << endl;
    cout << "SOBRENOME: " << t2.sobrenome << endl;
    cout << "MATRICULA: " << t2.matricula << endl;
    cout << "NOTA 1: " << t2.nota1 << endl;
    cout << "NOTA 2: " << t2.nota2 << endl;
    cout << "CONCEITO FINAL: " << t2.conceito << endl;

    struct Universidade u1;
    //Inserindo valores aos atributos
    u1.nome = "UNIVERSIDADE FEDERAL DO PARÁ"; //Nome da aluna
    u1.nalunos = 60021; //Sobrenome da aluna
    u1.ncursos = 60; //Matrícula da aluna
    u1.nprof = 2462; //Primeira nota
    u1.idade = 64; //Segunda nota



    return 0;
}
