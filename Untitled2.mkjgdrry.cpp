#include<stdio.h>
struct employee
{
    int ph,age,salary;
    char name[25];
}emp[100];
 
int main()
{
    int i,n;
    printf("Enter the no of employees\n\n");
    scanf("%d",&n);
    printf("Enter employee info as phone number,  age,  salary,  Name\n");
    printf("note - follow the order and enter commas also.\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d ,%d, %d,%s",&emp[i].ph,&emp[i].age,&emp[i].salary,&emp[i].name);
    }
    printf("\nNAME\t\tPhone N.o\t\tAGE\t\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].ph,emp[i].age,emp[i].salary);
    }
}
