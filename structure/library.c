struct bookshop
{
char bn[100];
char ba[100];
int stock;
int price;
}n[100];
void getdata(struct bookshop n[])
{
int i;
for (i=0;i<3;i++)
{
printf("Enter the bookname,author name,stock,price\n");
scanf("%s %s %d %d",n[i].bn,n[i].ba,&n[i].stock,&n[i].price);
}
}
void printdata(struct bookshop n[])
{
int i;
for (i=0;i<3;i++)
{
printf("\nThe bookname,author name,stock,price\t");
printf("%s %s %d %d",n[i].bn,n[i].ba,n[i].stock,n[i].price);
}
}
void compare(char a[],char b[])
{
int i;
int c,d,number;
for(i=0;i<3;i++)
{
d=strcmp(a,n[i].bn);
c=strcmp(b,n[i].ba);
if(d==0 && c==0)
break;
}
if(d==0 && c==0)
{
printf("\nEnter the number of books you want:");
scanf("%d",&number);
if(number>n[i].stock)
printf("We currently only have %d books",n[i].stock);
else
{
printf("We have the required books in stock");
printf("\n The price of books is %d",n[i].price);
}
}
else
{
printf("We currently don't have required books in stock");
}
}
int main()
{
getdata(n);
printdata(n);
printf("\nEnter the name and author of the book you want:");
char a[100],b[100];
scanf("%s %s",a,b);
compare(a,b);
return 0;
}