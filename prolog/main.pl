student('Ярослав Безматерных', 'Yaroslav Bezmaternykh', 4, 'М3О-103БВ-26', 'Prolog').

student_metrics(NameEn, StudentId, ControlValue) :-
    student(_, NameEn, Number, Group, _),
    ControlValue is 304 * Number,
    format(atom(StudentId), '~w/~`0t~d~2|', [Group, Number]).

main :-
    student(NameRu, NameEn, Number, Group, Lang),
    student_metrics(NameEn, StudentId, Control),
    format('Hello to 304 from ~w, number ~d, group ~w!~n', [NameEn, Number, Group]),
    format('Привет, 304! Это ~w, номер ~d, группа ~w!~n', [NameRu, Number, Group]),
    format('Student ID: ~w | Language: ~w | Control: ~d~n', [StudentId, Lang, Control]).
