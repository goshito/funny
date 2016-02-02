#include <stdio.h>

struct Student
{
    char name[100];
    int marks;
    int year;
    char gender;
};

struct Student readStudentFromFile()
{
    //Get a pointer to the opened file
    FILE *fp = fopen("Student.dat","r");
    struct Student student;

    //Read from the file
    fscanf(fp,"%s %d %d %c\n",student.name,&student.marks,&student.year, &student.gender);

    //Close the file
    fclose(fp);

    return student;
}

void printStudent(struct Student student)
{
    printf("%s %d %d %c\n",student.name,student.marks,student.year, student.gender);
}

int main()
{
    struct Student student = readStudentFromFile();
    printStudent(student);
}