#include <iostream>
using namespace std;

int main(){

    cout << "*******************" << endl;
    cout << "***guessing game***" << endl;
    cout << "*******************" << endl;

    int numero_secreto = 21;
    int chute;

    while(chute != numero_secreto){
        cout << "digite um numero de 0 a 100" << endl;
        cin >> chute;

        if(chute < 0 || chute > 100){
            cout << "voce digitou um numero invalido";]
            exit(1);
        }

        if(chute == numero_secreto){
            cout << "parabens, voce acertou" << endl;
            exit(1);
        }
        else if(chute > numero_secreto){
            cout << "o seu chute e maior que a palavra secreta" << endl;
        }
        else{
            cout << "o seu chute e menor que a palavra secreta" << endl;
        }
    }
}
