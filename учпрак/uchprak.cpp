#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
const int n = 5;
double Massiv[n];
double var;
cout « "Введите " « n « " значений:" « endl;
for (int i = 0; i < n; i++) {
cin » Massiv[i];
}
cout « "Введите значение для поиска:" « endl; cin » var;
for (int i = 0; i < n; i++) {
if (Massiv[i] == var) {
cout « "Найдено значение " « Massiv[i] « " под номером " « i + 1 « endl;
}
}
}
