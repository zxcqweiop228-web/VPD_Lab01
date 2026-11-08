using System;
using System.Text;

record StudentInfo(string NameRu, string NameEn, int Number, string Group, string Language);

class Program {
    static void Main() {
        Console.OutputEncoding = Encoding.UTF8;
        var student = new StudentInfo("Ярослав Безматерных", "Yaroslav Bezmaternykh", 4, "М3О-103БВ-26", "C#");
        string studentId = $"{student.Group}/{student.Number:D2}";
        int controlValue = 304 * student.Number;

        Console.WriteLine($"Hello to 304 from {student.NameEn}, number {student.Number}, group {student.Group}!");
        Console.WriteLine($"Привет, 304! Это {student.NameRu}, номер {student.Number}, группа {student.Group}!");
        Console.WriteLine($"Student ID: {studentId} | Language: {student.Language} | Control: {controlValue}");
    }
}
