#include <iostream>

using namespace std;
//Manipular uma struct usando um ponteiro

struct Pessoa {
    string nome;
    int idade;
    char sexo;
};

int main()
{
    struct Pessoa p1 = { "Ana", 22, 'F' };

    // pont é um ponteiro da estrutura Pessoa
    struct Pessoa* pont = &p1;

    // Accessing structure members using
    // structure pointer
    cout << "O nome da Pessoa p1 eh: " << pont->nome << ", a idade da pessoa p1 eh "
         << pont->idade <<  " o sexo da pessoa p1 eh " << pont->sexo;
    return 0;
}
