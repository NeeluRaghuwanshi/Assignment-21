//store information of 10 students and display them using structure.
#include <stdio.h>
struct Student
{
    char name[30];
    int rollNo;
    int marks;
};
int main()
{
    int i;
    struct Student st[10];

    printf("Enter 10 student's detail:\n");
    for(i=0; i<10; i++)
    {
        printf("\nEnter Student %d Details: ",i+1);
        printf("\nName: ");
        scanf("%s", st[i].name);
        printf("\nRoll No: ");
        scanf("%d", &st[i].rollNo);
        printf("\nMarks: ");
        scanf("%d", &st[i].marks);
        fflush(stdin);
    }

    for(i=0; i<10; i++)
    {
        printf("\nStudent%d Details- ", i+1);
        printf("Name: %s , ", st[i].name);
        printf("Roll No: %d , ", st[i].rollNo);
        printf("Marks: %d", st[i].marks);
    }
    return 0;
}

