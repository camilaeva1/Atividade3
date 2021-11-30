#include<iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;
using namespace std;

//Prot�tipo das fun��es
void modifyArray (vector<double> &);
void printArray (vector<double> &);
void insereConceito (vector<double> &);

//Criar um vector de ponteiros do tipo double no main e usar essa vector para algo

int main( )
{
    vector<double> notas; //Cria��o de vetor de notas dos alunos

    notas.push_back(5.5);
    notas.push_back(9.0);
    notas.push_back(7.0);
    notas.push_back(4.3);
    notas.push_back(7.9);

    cout << "Vetor sem modificacao: " << endl;
    printArray(notas); //Impress�o do vetor
    modifyArray(notas); //Chama a fun��o de modifica��o dos valores
    cout << "\n\n";
    cout << "Vetor com modificacao: " << endl;
    printArray(notas); //Imprime o vetor com as notas modificadas

    cout << "\n\n";
    cout << "Conceitos atribuidos: " << endl;
    insereConceito(notas); //Chama a fun��o de inserir conceitos
    return 0;
}

void modifyArray( vector< double > &vetor_ )
{
    for (int i = 0; i < vetor_.size( ); i++ )
        vetor_[i] *= 100;
}

void printArray( vector< double > &vetor_ )
{
    cout << "Size: " << vetor_.size( ) << endl;
    for (int i = 0; i < vetor_.size( ); i++)
        cout << vetor_[i] << endl;
}

// Fun��o para passar as notas para conceito de I a E

void insereConceito( vector< double > &vetor_ )
{
    for (int i = 0; i < vetor_.size( ); i++ ){
        if ( vetor_[i] <= 490.0 )
            cout << "Insuficiente" << endl;
        else if ((vetor_[i] >= 500.0) && (vetor_[i] <= 690.0))
            cout << "Regular" << endl;
        else if ((vetor_[i] >= 700.0) && (vetor_[i] <= 790.0))
            cout << "Bom" << endl;
        else if (vetor_[i] > 790.0)
            cout << "Excelente" << endl;
        else
            cout << "A nota inserida n�o esta correta." << endl;
    }

}
