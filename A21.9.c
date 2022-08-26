//store information of n students and display them using structure.
#include <stdio.h>
struct Student
{
    char name[30];
    int rollNo;
    int marks;
};
int main()
{
    int i,n;
    struct Student st[1000];
    printf("Enter number of students:");
    scanf("%d",&n);

    printf("Enter %d student's detail:\n",n);
    for(i=0; i<n; i++)
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

    for(i=0; i<n; i++)
    {
        printf("\nStudent%d Details- ", i+1);
        printf("Name: %s , ", st[i].name);
        printf("Roll No: %d , ", st[i].rollNo);
        printf("Marks: %d", st[i].marks);
    }
    return 0;
}

