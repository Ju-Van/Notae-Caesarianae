#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i;
    int k = 0;
    char masiv[20];
    cout << "Введите сообщение,которое будет закодировано:" << endl;
    cin >> masiv;
    cout << "Введите сдвиг:" << endl;
    cin >> k;

    cout << "Закодировать сообщение - нажмите \"1\". Раскодировать - нажмите \"2\"\n";
    {
        switch (_getch())
        {
        case '1':
            for (i = 0; i < strlen(masiv); i++)
                masiv[i] += k;
            cout << "\nЗакодированное сообщение:\n\n" << masiv << endl << endl;
        case '2':
            for (i = 0; i < strlen(masiv); i++)
                masiv[i] -= k;
            cout << "\nРаскодированное сообщение:\n\n" << masiv << endl << endl;
        }}
    return 0;
}