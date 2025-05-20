//Print numbers between 11 to 20:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=11;i<=20;i++)
printf("%d\n",i);
getch();
}

//2     Find factorial:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,f=1;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("Factorial:%d",f);
getch();
}

//3 Fibonacci series:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,a=0,b=1,c;
printf("Enter terms:");
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
getch();
}

//4 Sum using UDF:

#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
clrscr();
int a,b,s;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("Sum:%d",s);
getch();
}
int sum(int x,int y)
{
return x+y;
}

//5 Addresses of variables

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=5;
float b=3.2;
char c='A';
int *p1=&a;
float *p2=&b;
char *p3=&c;
printf("Address of a:%u\n",p1);
printf("Address of b:%u\n",p2);
printf("Address of c:%u\n",p3);
getch();
}

//6  Area of ellipse:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,area;
printf("Enter a and b:");
scanf("%f%f",&a,&b);
area=3.14*a*b;
printf("Area:%f",area);
getch();
}

//7 Design patterns:


// 8 First 10 natural numbers:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=1;i<=10;i++)
printf("%d\n",i);
getch();
}

//9 Triangle pattern:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
printf("%d ",j);
printf("\n");
}
getch();
}

//10 Prime number check:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,f=0;
printf("Enter number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
printf("Prime");
else
printf("Not Prime");
getch();
}

//11 Numbers below 100 divisible by 9:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=1;i<100;i++)
if(i%9==0)
printf("%d\n",i);
getch();
}

//12 Smallest divisor:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
printf("Enter number:");
scanf("%d",&n);
for(i=2;i<=n;i++)
if(n%i==0)
{
printf("Smallest divisor:%d",i);
break;
}
getch();
}

//13 Largest of 4 numbers:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
printf("Enter 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("%d is largest",a);
else if(b>c && b>d)
printf("%d is largest",b);
else if(c>d)
printf("%d is largest",c);
else
printf("%d is largest",d);
getch();
}

//14 Numbers between 51 to 60:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=51;i<=60;i++)
printf("%d\n",i);
getch();
}

//15 Area of triangle:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float b,h,area;
printf("Enter base and height:");
scanf("%f%f",&b,&h);
area=0.5*b*h;
printf("Area:%f",area);
getch();
}

//16 Area of circle:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,area;
printf("Enter radius:");
scanf("%f",&r);
area=3.14*r*r;
printf("Area:%f",area);
getch();
}

//17 Simple interest:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float p,r,t,si;
printf("Enter p,r,t:");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("SI:%f",si);
getch();
}

//18 10 odd positive numbers:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,c=0;
for(i=1;c<10;i+=2)
{
printf("%d\n",i);
c++;
}
getch();
}

//19 10 even positive numbers:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,c=0;
for(i=2;c<10;i+=2)
{
printf("%d\n",i);
c++;
}
getch();
}

//20 Odd or even check:

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("Enter number:");
scanf("%d",&n);
if(n%2==0)
printf("Even");
else
printf("Odd");
getch();
}

//21 Arithmetic operations using switch:

  #include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
char op;
printf("Enter a,b and operator:");
scanf("%d%d %c",&a,&b,&op);
switch(op)
{
case '+':printf("Sum:%d",a+b);break;
case '-':printf("Diff:%d",a-b);break;
case '*':printf("Product:%d",a*b);break;
case '/':printf("Div:%d",a/b);break;
default:printf("Invalid operator");
}
getch();
}

//22 Average of 3 numbers using UDF: 

#include<stdio.h>
#include<conio.h>
float avg(int,int,int);
void main()
{
clrscr();
int a,b,c;
float av;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
av=avg(a,b,c);
printf("Average:%f",av);
getch();
}
float avg(int x,int y,int z)
{
return (x+y+z)/3.0;
}

//23 Copy string

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char s1[20],s2[20];
printf("Enter string:");
scanf("%s",s1);
strcpy(s2,s1);
printf("Copied string:%s",s2);
getch();
}


//24 Employee details using array of struct:

#include<stdio.h>
#include<conio.h>
struct emp
{
char name[20];
float salary;
char dept[20];
};
void main()
{
clrscr();
struct emp e[3];
int i;
for(i=0;i<3;i++)
{
printf("Enter name,salary,dept:");
scanf("%s%f%s",e[i].name,&e[i].salary,e[i].dept);
}
for(i=0;i<3;i++)
{
printf("Name:%s\n",e[i].name);
printf("Salary:%f\n",e[i].salary);
printf("Dept:%s\n",e[i].dept);
}
getch();
}


//25 Struct pointer and hello message: 

#include<stdio.h>
#include<conio.h>
struct msg
{
char m[20];
};
void main()
{
clrscr();
struct msg m1={"Hello"};
struct msg *p=&m1;
printf("%s",p->m);
getch();
}
