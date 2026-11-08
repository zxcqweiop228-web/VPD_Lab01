public class Main {
    public static void main(String[] args) {
        String studentNameRu = "Ярослав Безматерных";
        String studentNameEn = "Yaroslav Bezmaternykh";
        int studentNumber = 4;
        String groupName = "М3О-103БВ-26";
        String languageName = "Java";

        String studentId = String.format("%s/%02d", groupName, studentNumber);
        int controlValue = 304 * studentNumber;

        System.out.printf("Hello to 304 from %s, number %d, group %s!%n", studentNameEn, studentNumber, groupName);
        System.out.printf("Привет, 304! Это %s, номер %d, группа %s!%n", studentNameRu, studentNumber, groupName);
        System.out.printf("Student ID: %s | Language: %s | Control: %d%n", studentId, languageName, controlValue);
    }
}
