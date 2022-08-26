//structure Employee with member variables id, name, salary
#include<stdio.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};
int main()
{
  struct Employee e;

  printf("Enter Name of employee: ");
  gets(e.name);
  printf("Enter id of employee: ");
  scanf("%d",&e.id);
  printf("Enter salary of employee: ");
  scanf("%f",&e.salary);
  printf("Name is: %s\nId is : %d\nsalary is: %2f",e.name,e.id,e.salary);
  return 0;

}
