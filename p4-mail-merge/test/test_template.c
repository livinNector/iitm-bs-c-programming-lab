#include <stdio.h>
#include "student.h"
#include "utils.h"

int main()
{
    puts("Test template foramtting ...");
    student_t s = {
        .name = "Nitin C",
        .rollno = "abc123",
        .marks = 50,
        .grade = 'D'};

    char *template = file_get_content("template.txt");
    char filename[] = "template_output.txt";
    printf("Printing template to %s\n", filename);
    file_printf(
        filename,
        template,
        s.name, s.rollno, s.name, s.marks, s.grade);
}