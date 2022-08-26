//function to take input employee data from the user
#include<stdio.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};
struct Employee input(struct Employee);
int main()
{
    struct Employee ee;
    ee=input(ee);
    return 0;
}
struct Employee input(struct Employee ee)
{
  struct Employee e;
  printf("Enter Name of employee: ");
  gets(e.name);
  printf("Enter id of employee: ");
  scanf("%d",&e.id);
  printf("Enter salary of employee: ");
  scanf("%f",&e.salary);
  printf("Name is: %s\nId is : %d\nsalary is: %2f",e.name,e.id,e.salary);

}
