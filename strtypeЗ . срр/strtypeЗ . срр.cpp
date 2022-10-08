
// strtypeЗ.cpp -- дополнительно о средствах класса string

#include <iostream> 
#include <string> // обеспечить доступ к классу string 
#include <cstring> // библиотека обработки строк в стиле С

int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    char charr1[20];
    char charr2[20] = " jaguar ";
    string str1;
    string str2 = "panther";
    // присваивание объектов string и символьных массивов
    str1 = str2; // копировать str2 в str2
    strcpy_s(charr1, charr2); // копировать charr2 в charr1
        // добавление объектов string и символьных массивов
    str1 += " paste "; // добавить "paste" в конец str1
    strcat_s(charr1, " juice"); // добавить " juice" в конец charr1
        // определение длины объекта string и строки в стиле С
    int len1 = str1.size(); // получить длину str1
    int len2 = strlen(charr1); // получит ь длину charr1
    cout << " Строка " << str1 << " содержит "
    << len1 << " символов. \n";
    cout << "Строка " << charr1 << " содержит "
    << len2 << " символов . \n";
    return 0;
}
