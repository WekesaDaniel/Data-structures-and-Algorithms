/*Task Four (4) 
Cary out a specification of ADT List using UML diagrams.*/

--------------------------------
|           Course             |
--------------------------------
| - course_code: string       |
| - course_name: string       |
--------------------------------
| + Course()                  |
| + Course(code: string,      |
|          name: string)      |
--------------------------------

--------------------------------
|            Grade             |
--------------------------------
| - mark: int                 |
| - the_grade: char           |
--------------------------------
| + Grade()                   |
| + Grade(mark: int)          |
--------------------------------

--------------------------------
|          Student             |
--------------------------------
| - reg_number: string        |
| - name: string              |
| - age: int                  |
| - course: Course            |
| - grade: Grade              |
--------------------------------
| + Student()                 |
| + Student(reg: string,      |
|           n: string,        |
|           a: int,           |
|           c: Course,        |
|           mark: int)        |
| + displayDetails(): void   |
--------------------------------
