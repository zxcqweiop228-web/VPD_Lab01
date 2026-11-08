open System
open System.Text

[<EntryPoint>]
let main argv =
    Console.OutputEncoding <- Encoding.UTF8
    let studentNameRu = "Ярослав Безматерных"
    let studentNameEn = "Yaroslav Bezmaternykh"
    let studentNumber = 4
    let groupName = "М3О-103БВ-26"
    let languageName = "F#"

    let studentId = sprintf "%s/%02d" groupName studentNumber
    let controlValue = 304 * studentNumber

    printfn "Hello to 304 from %s, number %d, group %s!" studentNameEn studentNumber groupName
    printfn "Привет, 304! Это %s, номер %d, группа %s!" studentNameRu studentNumber groupName
    printfn "Student ID: %s | Language: %s | Control: %d" studentId languageName controlValue

    let lettersSum =
        studentNameEn.Split(' ')
        |> Array.map (fun word -> word.Length)
        |> Array.sum
    printfn "Sum of word lengths via F# pipeline (|>): %d" lettersSum
    0
