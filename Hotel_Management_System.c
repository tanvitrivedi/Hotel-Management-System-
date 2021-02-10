#include<stdio.h>
struct hotel_reservation
{
 int id;
 char visitor;
 char Rtype;
 int cno[10];
 char Address[10];
 int sdate;
 int edate;
 int days;
 int Booked_on;
 int Pstatus;
 float service;
 int Fstatus;
 int Rservice;
 int Tservice;
 float Discount;
 float bill;
} s[3];
void main()
{
 int i;
 for(i=0;i<=2;i++)
 {
  printf("Booking_id\n");
  scanf("%d",&s[i].id);
  printf("Type od visitor(Adult or children)\n");
  scanf("%s",&s[i].visitor);
  printf("Room_type\n");
  scanf("%s",&s[i].Rtype);
  printf("Contact number\n");
  scanf("%d",&s[i].cno);
  printf("Address\n");
  scanf("%s",s[i].Address);
  printf("start_date\n");
  scanf("%d",&s[i].sdate);
  printf("end_date\n");
  scanf("%d",&s[i].edate);
  printf("No of days booked for\n");
  scanf("%d",&s[i].days);
  printf("Booked_on\n");
  scanf("%d",&s[i].Booked_on);
  printf("Pass status\n");
  scanf("%d",&s[i].Pstatus);
  printf("Service charge\n");
  scanf("%d",&s[i].service);
  printf("Fooding status\n");
  scanf("%d",&s[i].Fstatus);
  printf("Room_service status\n");
  scanf("%d",&s[i].Rservice);
  printf("Tea service status\n");
  scanf("%d",&s[i].Tservice);
  printf("Discount offered\n");
  scanf("%d",&s[i].Discount);
  printf("Total bill to be payed\n");
  scanf("%d",&s[i].bill);
 }
 
 for(i=0;i<=2;i++)
 
 {
 if(s[i].days>2)
 s[i].Discount=0.01*+s[i].bill;

  if(s[i].visitor<=0)
s[i].service=0;

 
 if(s[i].visitor>=1)
s[i].service=0.05*+s[i].bill;
 
 if(s[i].Fstatus>0)
s[i].Fstatus=2000+s[i].bill;
 
 if(s[i].Rservice>0)
s[i].Rservice=0.01*+s[i].bill;

 if(s[i].Tservice>0)
 s[i].Tservice=0.03*+s[i].bill;



}
 printf("DATABASE\n");
 printf("Booking_id  Contact number  Adults imformation   Address  Room_service  children imformation\n");
 for(i=0;i<=2;i++)
 {
  printf("%d\t\t\%d\t%s\t\t%s\t\t\t%d\t%s\n",s[i].id,s[i].cno,s[i].visitor,s[i].Address,s[i].Rservice,s[i].visitor);    
 }

 printf("DATABASE\n");
 printf("start_date\t\tend_date\t\tBooked_on\t\tDiscount offered\t\tTotal bill to be payed\n");
 for(i=0;i<=2;i++)
 {
  printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",s[i].sdate,s[i].edate,s[i].Booked_on,s[i].Discount,s[i].bill);
 }
 

}