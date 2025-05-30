#include <stdio.h>
#include "student.h"

int main()
{
    puts("Testing Compute Grade...");
    student_t s = {
        .name = "Nitin C",
        .rollno = "abc123",
        .marks = 0};
    for (int i = 10; i <= 100; i += 10)
    {
        s.marks = i - 1;
        compute_grade(&s);
        print_student(&s);

        s.marks = i;
        compute_grade(&s);
        print_student(&s);

        s.marks = i + 1;
        compute_grade(&s);
        print_student(&s);
    }
}
