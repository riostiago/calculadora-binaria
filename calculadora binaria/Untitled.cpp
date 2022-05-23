#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int valor;
    bool execute = true;
    int bin[8];

    int binario;
    int dec = 0;

    while (executa)
    {
        system("clear" || "cls")
            valor = 0;
        cout << "Escolha um dos valores" << endl;
        cout << "1 Decimal para binario" << endl;
        cout << "2 Binario para Decimal" << endl;
        cout << "informe uma das alternativas" << endl;
        cout << "0 Para sair" << endl;
        cout << "Digite um valor em binario";
        cin >> binario;

        for (int i = 0; binario > 0; i++)
        {
            cout << i << endl;
            dec = dec + pow(2, i) * (binario % 10);
            binario = binario / 10;
        }
        cout << dec;
        cin >> valor;
        cout << valor << " = valor que digitei " << endl;
        if
        {
            valor == 0
        }
        {
            cout << "Saindo do programa";
            execute = false;
            exit;
        }
        else
        {
            if (valor == 1)(
        cout << "Digite o valor em decimal" << endl;
        cin >> decimal;
        cout << " O valor em decimal e: << " <<decimal << endl;
        for (int i =7; i >=0; i--){
                    if (decimal % 2 == 0)
                    {
                        bin[i] = 0;
                    }
                    else
                    {
                        bin{i} = 1;
                    }
                    decimal = decimal / 2;
        }
        for (int i =0; i <8; i++) {
                    cout << bin[i];
        }
        cout << endl;
        }
        else
        {
            if (valor == 2)
            {
                cout << "Digite o valor em binario" << endl;

                cin >> valor;
                cout << "O valor em binario e: " valor << endl;
            }
            else
            {
                cout << "Nao temos esta opcao no menu" << endl;
            }
        }
                     )
    return 0;
    }
