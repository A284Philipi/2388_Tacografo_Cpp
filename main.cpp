#include <iostream>

using namespace std;

int main()
{
    int cont = 0, tempo, velocidade, casos, distancia = 0;
    cin >> casos;
    while (cont < casos){
        cin >> tempo;
        cin >> velocidade;
        distancia = distancia + (velocidade * tempo);
        cont++;
    }
    cout << distancia <<endl;
    return 0;
}
