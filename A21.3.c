//function to take display employee data.
#include<stdio.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};
struct Employee input(struct Employee);
void display(struct Employee);
int main()
{
    struct Employee e;
    e=input(e);
    display(e);
    return 0;
}
struct Employee input(struct Employee e)
{

  printf("Enter Name of employee: ");
  gets(e.name);
  printf("Enter id of employee: ");
  scanf("%d",&e.id);
  printf("Enter salary of employee: ");
  scanf("%f",&e.salary);
  return e;

}
void display(struct Employee e)
{
 printf("Name is: %s\nId is : %d\nsalary is: %2f",e.name,e.id,e.salary);
}


