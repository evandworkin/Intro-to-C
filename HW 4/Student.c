#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float midterm_grade;
    float final_grade;
    float average;
} Student;

int main()
{
    Student Mary;
    strcpy(Mary.name, "Mary Nicholson");
    Mary.midterm_grade = 86.7;
    Mary.final_grade = 94.3;
    Mary.average = (Mary.midterm_grade + Mary.final_grade) / 2;

    printf("Name: %s\nMidterm grade: %.2f\nFinal grade: %.2f\nAverage: %.2f\n", Mary.name, Mary.midterm_grade, Mary.final_grade, Mary.average);
}

