#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "test_class.h"

using namespace std;


void write2file(test_class* dMas) {
    FILE* textFile;
    fopen_s(&textFile, "textFile.txt", "w+");
    if (textFile){
        int size = dMas->getSize();
        for (int i = 0; i < size; i++)
        fprintf(textFile, "%d %\n", dMas->getElement(i));
        fclose(textFile);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Практическая работа 1\n";
    test_class* dMas1 = new test_class(7);
    dMas1->display();
    write2file(dMas1);
    test_class* dMas2 = new test_class(7);
    dMas2 = dMas1;
    dMas2->display();
    test_class* dMas3 = new test_class(7);
    cout << endl;
    dMas2->display();
    dMas3->display();
    cout <<endl << " < " << (dMas2 < dMas3);

}

