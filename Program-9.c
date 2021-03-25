#include<stdio.h>
#include<conio.h>
int main()
{
typedef struct date
{
    int dd;
    int mm;
    int yyyy;
}DOB;
struct name
{
    char first_n[10];
    char mid_n[10];
    char last_n[10];
};
struct student
{
    int roll;
    struct name s_name;
    char sec[2];
    char dep[3];
    float fee;
    DOB dob;
    int result;
}s[50];
int i, l, n, count;
printf("Enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
    printf("\nEnter details of student:%d\nRoll no:",i+1);
    scanf("%d",&s[i].roll);
    printf("\nName:");
    scanf("%s %s %s",s[i].s_name.first_n, s[i].s_name.mid_n, s[i].s_name.last_n);
    printf("\nSection(eg:PA,PB,CA,CB):");
    scanf("%s",s[i].sec);
    printf("\nDepartment(eg:CIV, ECE, CSE, ISE):");
    scanf("%s",s[i].dep);
    printf("\nFees:");
    scanf("%f",&s[i].fee);
    printf("\nDate of Birth:");
    scanf("%d %d %d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yyyy);
    printf("\nResult in percentage:");
    scanf("%d",&s[i].result);
    }
l=s[0].result;
count=0;
for(i=0;i<n;i++)
   {
       if(s[i].result>l)
        {   l=s[i].result;
            count=i;
        }
   }

printf("\nThe student with highest marks is:");
printf("\nRoll no:%d",s[count].roll);
printf("\nName:%s %s %s",s[count].s_name.first_n, s[count].s_name.mid_n, s[count].s_name.last_n);
printf("\nSection:%s",s[count].sec);
printf("\nDepartment:%s",s[count].dep);
printf("\nFees:%f",s[count].fee);
printf("\nDate of Birth:%d %d %d",s[count].dob.dd,s[count].dob.mm,s[count].dob.yyyy);
printf("\nResult in percentage:%d",s[count].result);


}
