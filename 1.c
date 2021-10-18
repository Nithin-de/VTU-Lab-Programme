// Program 1
// Design, Develop and Implement a menu driven Program in C for the following Array
// operations
// a. Creating an Array of N Integer Elements
// b. Display of Array Elements with Suitable Headings
// c. Inserting an Element (ELEM) at a given valid Position (POS)
// d. Deleting an Element at a given valid Position(POS)
// e. Exit.
// Support the program with functions for each of the above operations.
// Program
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 20
int a[MAX],n,val,i,pos;
/*Function Prototype*/
void create();
void display();
void insert();
void delet();
void main()
{
int choice=1;
while(choice)
{
printf(&quot;\n\n--------MENU-----------\n&quot;);
printf(&quot;/n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.EXIT\n&quot;);
printf(&quot;\nENTER YOUR CHOICE:\t&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1: create(); break;
case 2: display(); break;
case 3:insert();break;
case 4: delet();break;
case 5: exit(0);break;
default: printf(&quot;\nInvalid choice:\n&quot;);break;
}
}
}
//creating an array
void create()
{
printf(&quot;\nEnter the size of the array elements:\t&quot;);

scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nEnter the elements for the array:\n&quot;);
for(i=0;i&lt;n;i++)
{
scanf(&quot;%d&quot;,&amp;a[i]);
}
}
//displaying an array elements
void display()
{
printf(&quot;\nThe array elements are:\n&quot;);
for(i=0;i&lt;MAX;i++)
{
if(a[i])
printf(&quot;%d\t&quot;,a[i]);
}
}
//inserting an element into specified position of an array
void insert()
{
printf(&quot;\nEnter the array position for the new element:\t&quot;);
scanf(&quot;%d&quot;,&amp;pos);
printf(&quot;\nEnter the element to be inserted :\t&quot;);
scanf(&quot;%d&quot;,&amp;val);
for(i=n-1;i&gt;=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=val;
n=n+1;
}
//deleting an array element
void delet()
{
printf(&quot;\nEnter the array position of the element to be deleted:\t&quot;);
scanf(&quot;%d&quot;,&amp;pos);
val=a[pos];
//deleting at end
if(pos==n-1)
a[pos]=0;
else
//deleting at middle of array
{
for(i=pos;i&lt;n-1;i++)
{


a[i]=a[i+1];
}
a[n-1]=0;
}
n=n-1;
printf(&quot;\nThe deleted element is =%d&quot;,val);
}
