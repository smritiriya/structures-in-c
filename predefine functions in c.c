#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main()
{
    int choice,num1,num2,len,lower=1,upper=6,c=10,i;
    double  num,result;
    char str1[20];
    char str2[20];
    printf("enter your choice (1,2,3,4,5): ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter two strings to compare:");
        scanf("%s %s ",&str1,&str2);
         result= strcmp(str1,str2);
         if(result==0)
         printf("\n strings are equal\n");
         else
        printf("\n strings are not equal\n");
        break;
        case 2:
            printf("enter string to copy");
            scanf("%s ",&str1 );
            strcpy(str2,str1);
            printf("\n copied string : %s",str2);
            break;
        case 3:
            printf("enter string to reverse:\n");
            gets(str1);
            strrev(str1);
            printf(" reverse of string :%s\n",str1);
            break;
        case 4:
            printf("\n enter string to find length:");
            gets(str1);
            len=strlen(str1);
            printf("\n length of string: %d",len);
            break;
        case 5:
            printf("enter string :");
            gets(str1);
             strlwr(str1);
              printf("\n string after strlwr: %s",str1);
               break;
        case 6:
        printf("\n enter  base and power:");
        scanf("%d %d",&num1,&num2);
        printf("result = %.2f",pow(num1,num2));
        break;
        case 7:

         printf("\n enter no. to find sqrt: ");
         scanf("%f",& num);
         result= sqrt(num);
         printf("\n squart root is %f",result);
         break;
         case 8:


           printf("\n enter number :");
           scanf("%f",&num);
           result= ceil(num);
           printf("ceiling integer is %d:",result);
           break;
         case 9:

             printf("\n enter value to be floored :");
             scanf("%f",&num);
             printf("\n floored value is %f ",floor(num));
             break;
         case 10:

            srand(time(0));
            printf("\n random numbers are :");
            for(i=0;i<c;i++)
            {
                int num=(rand()%(upper-lower +1))+lower;
                printf("%d",num);
                break;
            }

}
return 0;
}

