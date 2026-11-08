interface StudentData {
    student_name_ru: string;
    student_name_en: string;
    student_number: number;
    group_name: string;
    language_name: string;
}

const student: StudentData = {
    student_name_ru: "Ярослав Безматерных",
    student_name_en: "Yaroslav Bezmaternykh",
    student_number: 4,
    group_name: "М3О-103БВ-26",
    language_name: "TypeScript"
};

const student_id: string = `${student.group_name}/${String(student.student_number).padStart(2, "0")}`;
const control_value: number = 304 * student.student_number;

console.log(`Hello to 304 from ${student.student_name_en}, number ${student.student_number}, group ${student.group_name}!`);
console.log(`Привет, 304! Это ${student.student_name_ru}, номер ${student.student_number}, группа ${student.group_name}!`);
console.log(`Student ID: ${student_id} | Language: ${student.language_name} | Control: ${control_value}`);
