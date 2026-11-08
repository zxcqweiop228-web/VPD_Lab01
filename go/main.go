package main

import "fmt"

func main() {
	var studentNameRu string = "Ярослав Безматерных"
	var studentNameEn string = "Yaroslav Bezmaternykh"
	var studentNumber int = 4
	var groupName string = "М3О-103БВ-26"
	var languageName string = "Go"

	studentID := fmt.Sprintf("%s/%02d", groupName, studentNumber)
	controlValue := 304 * studentNumber

	fmt.Printf("Hello to 304 from %s, number %d, group %s!\n", studentNameEn, studentNumber, groupName)
	fmt.Printf("Привет, 304! Это %s, номер %d, группа %s!\n", studentNameRu, studentNumber, groupName)
	fmt.Printf("Student ID: %s | Language: %s | Control: %d\n", studentID, languageName, controlValue)
}
