//Read N numbers and prints average//
#include<stdio.h>
main()
{
float avg=0,avg1=0;
int n,i=0;
printf("Enter the number of digits:");
scanf("%d",&n);
float a[n];
printf("The numbers are:",a[i]);
while(i>=0 && i<=n-1)
{
    scanf("%f",&a[i]);
    avg=avg+a[i];
    i++;
}
avg1=avg/n;
printf("The average is %f\n",avg1);
}
