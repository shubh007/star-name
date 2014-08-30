#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
clrscr();
int i,j,s,x,y,w,b,k,c=6,r;
char n[100],p[100],z;
while(c)
{
   printf("Enter password :\n");
    gets(p);
   r=strcmp(p,"star");
   if(r==0)
   {  clrscr();
      gotoxy(30,12);
      printf("WELCOME TO STAR WORLD");
      getch();
      break ;
   } clrscr();
    printf("Invalid password \n");
     c--;
     printf(" %d Chance left !!!!! \n",(c-1));
   if
   (c==1)
   { clrscr();
     gotoxy(30,12);
     printf("Byeeeeeeeeeee !!!!!!!!!! \a\n");
     getch();
    exit(0);
    }

}
while(1)
{
clrscr();
k=2;
w=0;
printf("Enter your name :");
gets(n);
for(s=0;n[s]!='\0';s++)
{

      if(x>=66)
      { w=0;
	b=8;
      }
      else
      b++;
      x=w*11;
      w++;
if(n[s]<=122 && n[s]>=97)
   {
       n[s] = n[s] - 32;
   }
    switch(n[s])
    {


case 'A':         for(i=0;i<5;i++)
		  {
		  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2)
			{
			    printf("*");
			 }
		 if(i==1||i==3 || i==4)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'B': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'C':for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3 || i==2)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'D':for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==2)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
case 'E': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
case 'F' :for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==4)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'G':  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==4)
			{
			    printf("*");
			 }
		 if(i==1)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }
	       if(i==2)
	       {if(j==0||j==2||j==3)
		 printf("*");
		 else
		 printf(" ");
		 }
	      if(i==3)
	      {if(j==0||j==3)
		printf("*");
		else
		printf(" ");
		}
		}
		 printf("\n");
		  }
		  break ;
   case 'H': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==2)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==0||i==4)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'I': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==2)
		  { if(j==2)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'J': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {      printf(" ");
			 if(i==0)
			 {  if(j>1)
			    printf("*");
			    else
			    printf(" ");
			   }
			 if(i==4)
			{
			    printf("*");
			 }
			 if(i==1||i==2)
			  { if(j==3)
			     printf("*");
			    else
			    printf(" ");
			  }
		 if(i==3)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'K':  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0||i==4)
			{   if(j==0||j==3)
			    printf("*");
			    else
			    printf(" ");
			 }
			 if(i==1||i==3)
			 {if(j==0||j==2)
			   printf("*");
			   else
			   printf(" ");
			 }
			 if(i==2)
			 {if(j==0||j==1)
			  printf("*");
			  else
			  printf(" ");
			 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'L':  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==2||i==0)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'M':   for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 || i==3 ||i==4)
			{   if(j==0||j==4)
			    printf("*");
			    else
			    printf(" ");
			 }
		 if(i==1)
		  { if(j==0||j==4||j==1||j==3)
			printf("*");
		 else
		printf(" ");
		 }
	      if(i==2)
	      { if(j==0||j==4||j==2)
		printf("*");
		else
		printf(" ");
	      }
		 }
		 printf("\n");
		  }
		  break ;
  case 'N': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{   if(j==0||j==4)
			    printf("*");
			    else

			    printf(" ");
			 }
		 if(i==1)
		  { if(j==0||j==4||j==1)
			printf("*");
		 else
		printf(" ");
		 }
		if(i==2)
		{ if(j==0||j==4||j==2)
		  printf("*");
		  else
		  printf(" ");
		}
		if(i==3)
		{ if(j==0||j==4||j==3)
		 printf("*");
		 else
		 printf(" ");
		}
		 }
		 printf("\n");
		  }
		  break ;
  case 'O':  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==2)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'P': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2)
			{
			    printf("*");
			 }
		 if(i==1)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }
		 if(i==3||i==4)
		 { if(j==0)
		     printf("*");
		   else
		   printf(" ");

		 }
		 }
		 printf("\n");
		  }
		  break ;
  case 'Q':   for(i=0;i<6;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {

			 if(i==0||i==4)
			{   printf(" ");
			    printf("*");
			 }
		 if(i==1||i==2)
		  { printf(" ");
		    if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }
		 if(i==5)
		 { if(j==3)
		   printf("*");
		   else

		   printf("  ");

		 }
		 if(i==3)
		 { if(j==0)
		   printf(" *");
		   if(j==1)
		   printf("  ");
		   if(j==2)
		   printf("* ");
		   if(j==3)
		   printf(" *");
		 }
		 }
		 printf("\n");
		  }
		  break ;
  case 'R':  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2)
			{
			    printf("*");
			 }
		 if(i==1)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }
		 if(i==3)
		 { if(j==0||j==2)
		     printf("*");
		   else
		   printf(" ");

		 }
	       if(i==4)
	       { if(j==0||j==3)
		 printf("*");
		 else
		 printf(" ");
	       }
		 }
		 printf("\n");
		  }
		  break ;
  case 'S': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==0 || i==2 ||i==4)
			{
			    printf("*");
			 }
		 if(i==1)
		  { if(j==0)
			printf("*");
		 else
		printf(" ");
		 }
		if(i==3)
		{ if(j==3)
		   printf("*");
		   else
		   printf(" ");
		}

		 }
		 printf("\n");
		  }
		  break ;
  case 'T': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==2||i==4)
		  { if(j==2)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
  case 'U': for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<4;j++)
		     {
			  printf(" ");
			 if(i==4)
			{
			    printf("*");
			 }
		 if(i==1||i==3||i==0||i==2)
		  { if(j==0||j==3)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'V' : for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==4)
			{   if(j==2)
			    printf("*");
			    else
			    printf(" ");
			 }
			 if(i==3)
			 { if(j==1||j==3)
			  printf("*");
			  else
			  printf(" ");
			 }
		 if(i==1||i==0||i==2)
		  { if(j==0||j==4)
			printf("*");
		 else
		printf(" ");
		 }

		 }
		 printf("\n");
		  }
		  break ;
   case 'W' :   for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 || i==1 ||i==4)
			{   if(j==0||j==4)
			    printf("*");
			    else
			    printf(" ");
			 }
		 if(i==3)
		  { if(j==0||j==4||j==1||j==3)
			printf("*");
		 else
		printf(" ");
		 }
	      if(i==2)
	      { if(j==0||j==4||j==2)
		printf("*");
		else
		printf(" ");
	      }
		 }
		 printf("\n");
		  }
		  break ;
   case 'X' :    for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{   if(j==0||j==4)
			    printf("*");
			    else
			    printf(" ");
			 }
		 if(i==1||i==3)
		  { if(j==3||j==1)
			printf("*");
		 else
		printf(" ");
		 }
	      if(i==2)
	      { if(j==2)
		printf("*");
		else
		printf(" ");
	      }
		 }
		 printf("\n");
		  }
		  break ;
   case 'Y' :  for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 )
			{   if(j==0||j==4)
			    printf("*");
			    else
			    printf(" ");
			 }
		 if(i==1)
		  { if(j==3||j==1)
			printf("*");
		 else
		printf(" ");
		 }
	      if(i==2||i==3||i==4)
	      { if(j==2)
		printf("*");
		else
		printf(" ");
	      }
		 }
		 printf("\n");
		  }
		  break ;
   case 'Z' :   for(i=0;i<5;i++)
		  {  y=i+k;
		  gotoxy(x,y);
		  for(j=0;j<5;j++)
		     {
			  printf(" ");
			 if(i==0 ||i==4)
			{
			    printf("*");

			 }
		 if(i==1)
		  { if(j==3)
			printf("*");
		 else
		printf(" ");
		 }
	      if(i==2)
	      { if(j==2)
		printf("*");
		else
		printf(" ");
	      }
	      if(i==3)
	      { if(j==1)
		printf("*");
		else
		printf(" ");
	      }
		 }
		 printf("\n");
		  }
		  break ;
  default : printf("%c\n",n[s]);
	    break;
 }
 }
 gotoxy(1,18);
 printf("\n");
 puts(n);
 getch();
 clrscr();
 gotoxy(10,12);
 printf("Press Y to enter more names or any other key to exit :");
 z=getch();
 if(z=='y'||z=='Y')
 continue;
 else
 {
 clrscr();
 gotoxy(22,10);
 printf("THANKS FOR USING THIS SOFTWERE\n");
 gotoxy(30,12);
 printf("SEE YOU SOON %c\n\n",1);
 getch();
 exit(0);
 }
  }
}
