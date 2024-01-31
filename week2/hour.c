#include<ctype.h>
#include<cs50.h>
#include<stdio.h>


int main(void)

{
int weeks;

do
{
     weeks = get_int("Number of weeks taking CS50: ");
}
while(weeks<1);



int HW[weeks];
string week;
for(int i = 0; i<weeks ; i++)
 {
    HW[i] = get_int("Week %i HW Hours: ",i);

 }
char output ;
do
{
 output = toupper(get_char("Enter T for total hours, A for average hours per week:"));

}
while(output != 'A' && output != 'T' );

if( output=='T')
{
 //Initialize array
    float sum = 0;


    //Loop through the array to calculate sum of elements
    for (int i = 0; i < weeks; i++) {
       sum = sum + HW[i];
    }
    printf("%.1f hours\n", sum);
    return 0;
}
else
{
 float a = 0;


    //Loop through the array to calculate sum of elements
    for (int i = 0; i < weeks; i++) {
       a = (a + HW[i]);
    }
    float b=a/weeks;
    printf("%.1f hours\n", b);

}
}