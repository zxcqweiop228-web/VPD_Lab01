#!/usr/bin/env bash
student_name_ru="Ярослав Безматерных"
student_name_en="Yaroslav Bezmaternykh"
student_number=4
group_name="М3О-103БВ-26"
language_name="Bash"

student_id=$(printf "%s/%02d" "$group_name" "$student_number")
control_value=$((304 * student_number))
word_count=$(printf "%s" "$student_name_en" | wc -w | tr -d ' ')

echo "Hello to 304 from $student_name_en, number $student_number, group $group_name!"
echo "Привет, 304! Это $student_name_ru, номер $student_number, группа $group_name!"
echo "Student ID: $student_id | Language: $language_name | Control: $control_value"
echo "Words in student_name_en via pipe (| wc -w): $word_count"
