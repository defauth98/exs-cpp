#include <iostream>

using namespace std;

int main (){
    float nota1, nota2, nota3, media;

    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    media = (nota1 + nota2  + nota3 * 2)/(1 + 1 + 2);

    cout << "Media -> " << media << endl;

    return 0;
}