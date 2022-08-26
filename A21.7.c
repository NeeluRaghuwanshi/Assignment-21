//calculate the difference between two time periods
#include<stdio.h>
struct time
{
  int hr;
  int min;
  int sec;
};
int main()
{
  struct time t1, t2, *diff,start,stop;
  printf("Enter start time: ");
  scanf("%d:%d:%d",&t1.hr,&t1.min,&t1.sec);
  printf("\nEnter end time : ");
  scanf("%d:%d:%d",&t2.hr,&t2.min,&t2.sec);
  while(stop.sec>start.sec)
  {
    --start.min;
    start.sec += 60;
  }
  diff->sec = start.sec-stop.sec;
  while(stop.min>start.min)
  {
    --start.hr;
    start.min += 60;
  }
  diff->min = start.min-stop.min;
  diff->hr = start.hr-stop.hr;


  printf("Time differnce is : %d:%d:%d",diff->hr,diff->min,diff->sec);
  return 0;

}
