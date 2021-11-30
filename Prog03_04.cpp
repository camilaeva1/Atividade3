#include <iostream>
#include <string>
#include <vector>

//Criar um array de structs

using std::cout;
using std::endl;
using std::vector;
using std::string;
using namespace std;

struct Empresa
{
    string nome;
    string sobrenome;
    string nomemepresa;
    float salario;
    int funcionarios;
};

int main()
{

    Empresa comp_arr[2] = {{"Jose","Almeida","Intel", 91213.11, 110823},
        {"Marcia", "Ferreira", "Apple", 131231.44, 137031}
    };

    for (const auto &arr : comp_arr) { //const já que não vai ser alterado nada no vetor
        cout <<"Nome: " << arr.nome << endl
            << "Sobrenome: " << arr.sobrenome << endl
            << "Empresa: " << arr.nomemepresa << endl
            << "Salario: " << arr.salario << endl
            << "Funcionarios: " << arr.funcionarios << endl << endl;
    }
    return 0;
};
