#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

// Criar uma função que manipula arranjos e mostrar o uso dela com arranjos
// Criar uma função que manipula um vector

//Protótipo das funções
void modificaArranjo(int[], int); //Função que modifica os valores do arranjo
void imprimeArranjo (int [], int); //Função para imprimir o arranjo

int main()
{
    const int tamanhoArranjo = 5; //Definindo o tamanho do arranjo, vetor primitivo
    int a[tamanhoArranjo] = {0, 1, 2, 3, 4}; //Atribuindo valores
    cout << "Os valores contidos no vetor sao: " << endl;
    imprimeArranjo(a, tamanhoArranjo);//Chamando a função para imprimir os valores
    modificaArranjo(a, tamanhoArranjo); //Chamando a função de modificação
    cout << "Os novos valores do arranjo sao: " << endl;
    imprimeArranjo(a, tamanhoArranjo); //Chamando a função para imprimir os valores modificados
    return 0;
}

void modificaArranjo(int a[], int tamanhoArranjo)
{
    for(int j = 0; j < tamanhoArranjo; j++)
        a[j] *= 10;

}
void imprimeArranjo(int a[], int tamanhoArranjo)
{

    for (int i=0; i < tamanhoArranjo; i++)
        cout << a[i] << endl;
}
