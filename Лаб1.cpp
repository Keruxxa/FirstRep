#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
    char text[1000];
    int i, j, n, k, m, key1[6] = {4, 6, 5, 3, 1, 2};
    cout << "Type in your phrase: ";
    cin.getline(text, 1000);
    cout << "Type in the amount of digits in key2: ";
    cin >> m;
    char mas[6][m];
    int key2[m], p = m;
    cout << "Type in key2: ";
    for(i = 0; i < m; i++)
    {
        cin >> key2[i];
    }

    //вписывание перевернутой фразы в таблицу
    k = strlen(text) - 1;
    for(j = 0; j < m; j++)
    {
        n = key2[p - 1] - 1;
        for(i = 5; i >= 0; i--)
        {
            mas[i][n] = text[k];
            k--;
        }
        p--;
    }

    //чтение фразы из таблицы
    k = 0;
    for(i = 0; i < 6; i++)
    {
        n = key1[i] - 1;
        for(j = 0; j < m; j++)
        {
            text[k] = mas[n][j];
            k++;
        }
    }
    
    //вывод зашифрованной фразы
    cout << "\nEncrypted phrase is: ";
    for(i = 0; i < k; i++)
    {
        cout << text[i];
    }
    getch();  //uthw’o heh ugenad er togtey  o ?oywn
    return 0; //fusrnaicipirfl ogmitdg m
}
