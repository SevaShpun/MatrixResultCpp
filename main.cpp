#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

// Создаем переменные
int cell[9] = {0,0,0,0,0,0,0,0,0};
int r = 0;

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

void TemplateText() {
    SetColor(14,0);
    cout << "\t\t\t\t=================" << endl;
    cout << "\t\t\t\t  Template 3x3" << endl;
    cout << "\t\t\t\t=================" << endl;
    cout << "\t\t\t\t    1 | 2 | 3" << endl;
    cout << "\t\t\t\t    4 | 5 | 6" << endl;
    cout << "\t\t\t\t    7 | 8 | 9" << endl;
    cout << "\t\t\t\t=================" << endl;
}

void MatrixFillingText() {
    SetColor(10,0);
    cout << "\t\t\t\tFill in the cells" << endl;
    cout << "\t\t\t\t=================" << endl;
    SetColor(13,0);
    cout << "\t\t\t\t" << cell[0] << "\t"<<cell[1]<<"\t"<< cell[2] << endl;
    cout << "\t\t\t\t" << cell[3] << "\t"<<cell[4]<<"\t"<< cell[5] << endl;
    cout << "\t\t\t\t" << cell[6] << "\t"<<cell[7]<<"\t"<< cell[8] << endl;
    SetColor(10,0);
    cout << "\t\t\t\t=================" << endl << endl;
    SetColor(11,0);
    cout << "Note: you can enter all 9 numbers in 'cell 1' separated by a space (5 85 -12...)" << endl << endl;
}

int main(int argc, char *argv[]) {
    SetConsoleTitle("Solving a Matrix by a Simple Method");
    for (int i = 0; i < sizeof(cell)/sizeof(int); i ++ ) {
        TemplateText();
        MatrixFillingText();
        cout << "cell " << i+1 << "> ";
        cin >> cell[i];
        system("cls");
    }
    TemplateText();
    MatrixFillingText();
    r = cell[0]*(cell[4]*cell[8]-cell[5]*cell[7])-cell[1]*(cell[3]*cell[8]-cell[5]*cell[6])+cell[2]*(cell[3]*cell[7]-cell[4]*cell[6]);
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
