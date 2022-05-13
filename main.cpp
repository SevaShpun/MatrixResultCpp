#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,r=0;// Создаем переменные

void SetColor(int text, int background) {
    // Функция для подкрашивания текста в консоли с 2-мя аргументами (text - цвет текста, background - фон текста)
    // Список цветов:
    /*
        0-Black,
        1-Blue,
        2-Green,
        3-Cyan,
        4-Red,
        5-Magenta,
        6-Brown,
        7-LightGray,
        8-DarkGray,
        9-LightBlue,
        10-LightGreen,
        11-LightCyan,
        12-LightRed,
        13-LightMagenta,
        14-Yellow,
        15-White
    */
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void MainMenu() {
    SetColor(14,0);
    cout << "\t\t\t\t=================" << endl;
    cout << "\t\t\t\t  Template 3x3" << endl;
    cout << "\t\t\t\t=================" << endl;
    cout << "\t\t\t\t    1 | 2 | 3" << endl;
    cout << "\t\t\t\t    4 | 5 | 6" << endl;
    cout << "\t\t\t\t    7 | 8 | 9" << endl;
    cout << "\t\t\t\t=================" << endl;
}

void AddMatrix() {
    SetColor(10,0);
    cout << "\t\t\t\tFill in the cells" << endl;
    cout << "\t\t\t\t=================" << endl;
    SetColor(13,0);
    cout << "\t\t\t\t" << a1 << "\t"<<a2<<"\t"<< a3 << endl;
    cout << "\t\t\t\t" << a4 << "\t"<<a5<<"\t"<< a6 << endl;
    cout << "\t\t\t\t" << a7 << "\t"<<a8<<"\t"<< a9 << endl;
    SetColor(10,0);
    cout << "\t\t\t\t=================" << endl << endl;
    SetColor(11,0);
    cout << "Note: you can enter all 9 numbers in 'cell 1' separated by a space (5 85 -12...)" << endl << endl;
}

int main(int argc, char *argv[]) {
    // setlocale(LC_CTYPE,"Russian");
    // setlocale(LC_CTYPE, "Russian_Russia.1251");
    SetConsoleTitle("Solving a Matrix by a Simple Method");
    MainMenu();
    AddMatrix();
    cout << "cell 1> ";
    cin >> a1;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 2> ";
    cin >> a2;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 3> ";
    cin >> a3;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 4> ";
    cin >> a4;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 5> ";
    cin >> a5;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 6> ";
    cin >> a6;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 7> ";
    cin >> a7;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 8> ";
    cin >> a8;
    system("cls");
    MainMenu();
    AddMatrix();
    cout << "cell 9> ";
    cin >> a9;
    system("cls");
    MainMenu();
    AddMatrix();
    r = a1*(a5*a9-a6*a8)-a2*(a4*a9-a6*a7)+a3*(a4*a8-a5*a7);
    if (r<0) {
        SetColor(12,0);
        cout << "\t\t\t\tResult: "<< r << endl << endl;
    }
    else {
        SetColor(15,0);
        cout << "\t\t\t\tResult: "<< r << endl << endl;
    }
    SetColor(15,0);
    system("PAUSE");
    return EXIT_SUCCESS;
}
