//enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
#include<stdio.h>
struct Marks
{
  int rollno;
  char name[20];
  float chem_marks, maths_marks,phy_marks;
};
int main()
{
   struct Marks s[5];
   int i;float per=0;
   for(i=0;i<5;i++)
   {
     printf("Student %d: \n",i+1);
     printf("Enter roll no. : ");
     scanf("%d",&s[i].rollno);
     printf("\nEnter name:");
     scanf("%s",s[i].name);
     printf("\nEnter chemistry marks out of 100:");
     scanf("%f",&s[i].chem_marks);
     printf("\nEnter Maths marks out of 100 :");
     scanf("%f",&s[i].maths_marks);
     printf("\nEnter Physics marks out of 100 :");
     scanf("%f",&s[i].phy_marks);

   }
   for(i=0;i<5;i++)
   {
     printf("Students %d :",i+1);
     per=(s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)/300*100;
     printf(" percentage is :%f\n",per);

   }
   return 0;

}
