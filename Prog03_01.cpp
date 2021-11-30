#include <iostream>

//Manipulação de função que recebe ponteiros como parâmetros para de troca de inteiros

using std::cout;
using std::endl;
using std::swap;

//Protótipo da função
void troca(int&, int&);

int main(){
    int a = 5; //O valor de 'a'
    int b = 110; //O valor de 'b'

    cout << "O valor de a eh: " << a << endl; //Imprime o valor de 'a'
    cout << "O valor de b eh: " << b << endl; //Imprime o valor de 'b'
    swap(a, b); //Chama a função troca
    cout << "Apos a troca o valor de a passou a ser " << a << " e o de b " << b << endl;

    return 0;
}
void swap(int &a, int &b){ //Função swap para troca de valores das variáveis
    int temp = a; //A variável temporária recebe 'a'
    a = b; //'a' recebe o valor de 'b'
    b = temp;//'b' recebe o valor de temp
}

