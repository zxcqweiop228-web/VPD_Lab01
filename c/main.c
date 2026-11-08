#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif
    const char *imya_ru = "Ярослав Безматерных";
    const char *imya_en = "Yaroslav Bezmaternykh";
    int nomer = 4;
    const char *gruppa = "М3О-103БВ-26";
    const char *yazyk = "C";

    char student_id[64];
    snprintf(student_id, sizeof(student_id), "%s/%02d", gruppa, nomer);
    int control_value = 304 * nomer;

    printf("Hello to 304 from %s, number %d, group %s!\n", imya_en, nomer, gruppa);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n", imya_ru, nomer, gruppa);
    printf("Student ID: %s | Language: %s | Control: %d\n", student_id, yazyk, control_value);
    return 0;
}
