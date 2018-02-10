#include<stdio.h>
int main()
{long int loan_req,noy,loan,salary;
printf("How much money do you require as loan?");
scanf("%ld",&loan_req);
printf("For how many years have you worked in this company?");
scanf("%ld",&noy);
printf("Have you taken any previous loans?\n1.Yes\n0.No");
scanf("%d",&loan);
printf("What is your salary?");
scanf("%d",&salary);
if(noy>=5 && loan==0 && loan_req<(3*salary))
 {printf("Have a great day! Your loan will be sanctioned.");
 }
else
 {printf("Sorry! Your request for a loan has been rejected.");
  } 
 return 0; 
}
