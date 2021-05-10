#include <bits/stdc++.h>
using namespace std;
int countt=0;
struct stud
{
long long int ph;
int sem;
char name[15],usn[15],brnch[8];
struct stud *next;
}*head=NULL,*tail=NULL,*temp=NULL,*temp1;
void create(long long int n,int s,char na[20],char u[15],char b[5])
{
if(head==NULL)
{
head=(struct stud*)malloc(1*sizeof(struct stud));
head->ph=n;
head->sem=s;
strcpy(head->name,na);
strcpy(head->usn,u);
strcpy(head->brnch,b);
head->next=NULL;
tail=head;
countt++;
}
else
{
temp=(struct stud*)malloc(1*sizeof(struct stud));
temp->ph=n;
temp->sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);
strcpy(temp->brnch,b);
temp->next=NULL;
tail->next=temp;
tail=temp;
countt++;
}
}
void display()
{
temp1=head;
if(temp1==NULL)
{
printf("\nlist is empty\n");
}
else
{
printf("student details are as follows:\n");
while(temp1!=NULL)
{
printf(" \n");
printf("NAME:%s\nUSN:%s\nBRANCH:%s\nSEM:%d\nPHONE NO.:%lld\n",temp1 ->name,temp1->usn,temp1->brnch,temp1->sem,temp1->ph);
printf(" \n");
temp1=temp1->next;

}
printf("no. of nodes=%d\n",countt);
}
}
void insert_head(long long int n,int s,char na[15],char u[15],char b[8])
{
temp=(struct stud*)malloc(1*sizeof(struct stud));
temp->ph=n;
temp->sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);
strcpy(temp->brnch,b);
temp->next=head;
head=temp;
countt++;
}
void insert_tail(long long int n,int s,char na[15],char u[15],char b[8])
{
temp=(struct stud*)malloc(1*sizeof(struct stud));
temp->ph=n;
temp->sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);
strcpy(temp->brnch,b);
tail->next=temp;
temp->next=NULL;
tail=temp;
countt++;
}
void delete_head()
{
temp1=head;
if(temp1==NULL)
{
printf("list is empty\n");
}
else
{
head=head->next;
printf("deleted node is:\n");
printf(" \n");
printf("NAME:%s\nUSN:%s\nBRANCH:%s\nSEM:%d\nPHONE NO.:%lld\n",temp1->name, temp1->usn,temp1->brnch,temp1->sem,temp1->ph);
printf(" \n");
free(temp1);
countt--;
}
}
void delete_tail()
{
temp1=head;
if(temp1==NULL)
{
printf("list is empty\n");
}
while(temp1->next!=tail)
{
temp1=temp1->next;
}
printf("deleted node is:\n");
printf(" \n");
printf("NAME:%s\nUSN:%s\nBRANCH:%s\nSEM:%d\nPHONE NO.:%lld\n",tail->name,tail->usn,tail->brnch,tail->sem,tail->ph);
printf("\n");
free(tail);
tail=temp1;
tail->next=NULL;
countt--;
}
int main()
{
int choice;
long long int ph; int sem;

char name[20],usn[15],brnch[5];
printf("--------MENU \n");
printf("1.create\n2.Insert from head\n3.Insert from tail\n4.Delete from head\5.Delete fromtail\n6.display \n7.exit\n");
printf(" \n");
while(1)
{
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the name usn branch sem phno. of the student respectively\n");
scanf("%s%s%s%d%lld",name,usn,brnch,&sem,&ph);
create(ph,sem,name,usn,brnch);
break;
case 2:printf("enter the name usn branch sem phno. of the student respectively\n");
scanf("%s%s%s%d%lld",name,usn,brnch,&sem,&ph);
insert_head(ph,sem,name,usn,brnch);
break;
case 3:printf("enter the name usn branch sem phno. of the student respectively\n");
scanf("%s%s%s%d%lld",name,usn,brnch,&sem,&ph);
insert_tail(ph,sem,name,usn,brnch);
break;
case 4:delete_head();
break;
case 5:delete_tail();
break;
case 6:display();
break;
case 7:exit(0);
default:printf("invalid option\n");
}
}
return 0;
}
