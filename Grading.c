#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter your Marks= ");
    int Marks=0;
    scanf("%d",&Marks);
    if(Marks>=85 && Marks<=100)
    {
    printf("Your grade is A");
    }
  else if(Marks>=70 && Marks<=84)
  {
printf("Your grade is B");
} 
else if(Marks>=55 && Marks<=69)

{
printf("Your grade is C");
}

else if(Marks>=40 && Marks<=54)
{

printf("Your grade is D");
}

else
{
printf("Your grade is F");
}


}
