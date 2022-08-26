//function to sort employees according to their salary
#include<stdio.h>
#include<string.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};
struct Employee input(struct Employee*,int);
void sortsalary(struct Employee*,int);
int main()
{
    struct Employee e[5];
    input(e,5);
    sortsalary(e,5);
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
void sortsalary(struct Employee *e,int n)
{
    int i,j;
    struct Employee t;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)

      {
         if(strcmp(e[i].salary,e[j].salary) > 0)
         {
           t=e[i];
           e[i]=e[j];
           e[j]=t;
         }

         }
      }
      printf("\ndata after sorting by salary\n");
      for(i=0;i<n;i++)
      printf("\nName is: %s\nId is : %d\nsalary is: %2f",e[i].name,e[i].id,e[i].salary);
}


