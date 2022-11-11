#include <stdio.h>
void main(){
float num_1;
float num_2;
float num_3;
float num_4;
float num_5;
float total;
float avg;
printf("please enter first number: \n");
scanf("%f",&num_1);

printf("please enter second number: \n");
scanf("%f",&num_2);

printf("please enter third number: \n");
scanf("%f",&num_3);

printf("please enter fourth number: \n");
scanf("%f",&num_4);

printf("please enter fifth number: \n");
scanf("%f",&num_5);
total = num_1+num_2+num_3+num_4+num_5;
avg = total/5;

printf("total = %f \n",total);
printf("avarage = %f ", avg);
}
