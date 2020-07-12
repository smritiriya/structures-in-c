#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   char name[30];
   int id;
   int salary;
   int experience;
}

employee;
int main()
{ int i,n=5;
   employee e[5];
   // taking  each employee details as input
     printf("enter %d employee details \n\n",5);
      for(i=0;i<5;i++)
      {
          printf("employee %d: \n",i+1);
          printf("Name: ");
          scanf("%s",e[i].name);
          printf("ID: ");
          scanf("%d",&e[i].id);
          printf("salary: ");
          scanf("%d",&e[i].salary);
          printf(" years of experience: ");
          scanf("%d",&e[i].experience);
          printf("\n");

      }
      //displaying employee details
      printf("_______________ employee details_____________\n ");
      for(i=0;i<5;i++)
      {
          printf("name \t: ");
          printf("%s\n",e[i].name);
          printf("id \t: ");
          printf("%d \n",e[i].id);
          printf("salary \t : ");
          printf("%d \n",e[i].salary);
          printf(" experience \t :");
          printf("%d \n",e[i].experience);
          printf("\n");
      }

    return 0;
}
