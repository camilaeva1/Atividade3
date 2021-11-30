#include <iostream>

//Manipula��o de fun��o que recebe ponteiros como par�metros para de troca de inteiros

using std::cout;
using std::endl;
using std::swap;

//Prot�tipo da fun��o
void troca(int&, int&);

int main(){
    int a = 5; //O valor de 'a'
    int b = 110; //O valor de 'b'

    cout << "O valor de a eh: " << a << endl; //Imprime o valor de 'a'
    cout << "O valor de b eh: " << b << endl; //Imprime o valor de 'b'
    swap(a, b); //Chama a fun��o troca
    cout << "Apos a troca o valor de a passou a ser " << a << " e o de b " << b << endl;

    return 0;
}
void swap(int &a, int &b){ //Fun��o swap para troca de valores das vari�veis
    int temp = a; //A vari�vel tempor�ria recebe 'a'
    a = b; //'a' recebe o valor de 'b'
    b = temp;//'b' recebe o valor de temp
}

