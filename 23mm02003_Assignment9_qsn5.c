#include <stdio.h>
#define NUM_TESTS 3
#define passmarks 35

typedef struct CourseRecord {
    char firstname[100];
    char lastname[100];
    int rollno;
    char dept[100];
    char coursecode[100];
    int marks[NUM_TESTS];
} CourseRecord;

float calculateAverageMarks(const CourseRecord *record) {
    float totalMarks = 0.0;
    for (int i = 0; i < NUM_TESTS; i++) {
        totalMarks += record->marks[i];
    }
    return totalMarks / NUM_TESTS;
}

int isfail(float averageMarks) {  
    if (averageMarks < passmarks) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    CourseRecord student;

    printf("Enter student's first name: ");
    scanf("%s", student.firstname);

    printf("Enter student's last name: ");
    scanf("%s", student.lastname);

    printf("Enter student's roll number: ");
    scanf("%d", &student.rollno);

    printf("Enter student's department: ");
    scanf("%s", student.dept);

    printf("Enter student's course code: ");
    scanf("%s", student.coursecode);

    printf("Enter marks for three tests: ");
    for (int i = 0; i < NUM_TESTS; i++) {
        scanf("%d", &student.marks[i]);
    }

    float averageMarks = calculateAverageMarks(&student);
    printf("Average marks: %.2f\n", averageMarks);

    if (isfail(averageMarks)) {
        printf("Student failed the test.\n");
    } else {
        printf("Student passed the test.\n");
    }

    return 0;
}
