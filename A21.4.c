//function to find the highest salary employee from a given array of 10
#include<stdio.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};
struct Employee input(struct Employee*,int);
void higestsalary(struct Employee*,int);
int main()
{
    struct Employee e[10];
    input(e,10);
    higestsalary(e,10);
    return 0;
}
struct Employee input(struct Employee *e,int n)
{
  for(int i=0;i<n;i++)
  {
  printf("Enter Name of employee: ");
  scanf("%s",e[i].name);
  printf("Enter id of employee: ");
  scanf("%d",&e[i].id);
  printf("Enter salary of employee: ");
  scanf("%f",&e[i].salary);
  }

}
void higestsalary(struct Employee *e,int n)
{
int i;
    struct Employee t;

    t = e[0];
    for(i=1; i<n; i++)
     {
        if (e[i].salary > t.salary)
            t = e[i];

    }

 printf("Name is: %s\nId is : %d\n Higest salary is: %2f",t.name,t.id,t.salary);
}


