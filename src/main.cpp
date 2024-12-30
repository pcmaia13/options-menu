#include <iostream> 
using namespace std;

int main()
{
    int op;
    int arrayX[5] = {1, 2, 3, 4, 5};
    
    do {
        cout << "**Menu** \n";
        cout << "(1)listar array \n";
        cout << "(2)mudar indice \n";
        cout << "(3)soma de numeros \n";
        cout << "(4)numeros negattivos \n";
        cout << "(5)media dos numeros \n";
        cout << "(0)finalizar programa \n";
        cin >> op;

        switch(op) {
            case 1:
            cout << "listar array: \n";
                for(int i = 0; i < 5; i++) {
                    cout << arrayX[i] << "\n";
                }
            break;
            
            case 2:
            int p;
            int n;
            
            cout << "mudar indice: \n";
            cout << "escolha o numero \n";
            cin >> n;
            cout << "escolha a posicao \n";
            cin >> p;

                for(int i = 0; i < 5; i++) {
                    if(p >= 0 && p < 5) {
                        arrayX[p] = n;
                    } else {
                        cout << "tente novamente \n";
                        cin >> p;
                    }
                }
            break;
            
            case 0:
            cout << "programa finalizado. \n";
            break;
            
            
            default:
            break;
        }
    } while(op != 0);
}