#include <stdio.h>
#include<math.h>

void main()
{
   int hour, minute, second, flighttime;

   printf("Enter blast time of a rocket in hours, minutes and seconds: ");
   scanf("%d %d %d",&hour,&minute,&second);

   printf("Enter flight time in seconds: ");
   scanf("%d",&flighttime);

   second = second + flighttime;
   minute = minute + (second/60);
   hour = hour + (minute/60);
   second = second%60;
   minute = minute%60;
   hour = hour%24;

   printf("Time which the rocket return to earth %d : %d : %d ",hour,minute,second);

}
