#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif
    string imya_ru = "Ярослав Безматерных";
    string imya_en = "Yaroslav Bezmaternykh";
    int nomer = 4;
    string gruppa = "М3О-103БВ-26";
    string yazyk = "C++";

    ostringstream potok_id;
    potok_id << gruppa << "/" << setw(2) << setfill('0') << nomer;
    string student_id = potok_id.str();
    int control_value = 304 * nomer;

    cout << "Hello to 304 from " << imya_en << ", number " << nomer << ", group " << gruppa << "!" << endl;
    cout << "Привет, 304! Это " << imya_ru << ", номер " << nomer << ", группа " << gruppa << "!" << endl;
    cout << "Student ID: " << student_id << " | Language: " << yazyk << " | Control: " << control_value << endl;
    return 0;
}
