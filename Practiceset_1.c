/*     practice set one contains 4 question 
       date 07/08/2026
 */

/*  QUESTION 1 :  write a c program to calculate the area of a rectangle 
    (I) by using hars coded inputs.
    (II) by using input supplied by the user. 
*/

#include <stdio.h>

int main(){
    int a = 10,b = 5;          //where a is the length and b is the bredth of rectangle

    printf("the area of the rectangle having length %d and bredth %d is : %d \n",a,b,a*b);

    printf("Enter the length of the new rectangle : ");
    scanf("%d",&a);

    printf("Enter the bredth of the new rectangle : ");
    scanf("%d",&b);

    printf("the area of the rectangle having length %d and bredth %d is : %d",a,b,a*b);

    return 0;

}

/*  QUESTION 2 :  Calculate the area of a circle and modify the same program to 
    calculate the volume of a cylinder gives it's radius and height .
*/


#include<stdio.h>

int main(){

    float r = 4;  // r is the radius of the circle or the base of the cylinder .
    float h = 10;  // h is the height of the cylinder .
    float A;  // A is the area of the circle or the base of the cylinder .
    float pi = 3.142;

    printf("The dimension of the cylinder is as follows : \n");
    printf("The radius of the base is : %f\n",r);
    printf("The height of the cylinder is : %f\n",h);

    A = pi*r*r ;

    printf("The area of the base having radius %f is : %f\n",r,A);

    printf("The volume of the cylinder with base area %f and height %f is : %f",A,h,A*h);

    return 0;

}

/*  QUESTION 3 :  Write a program to convert celcus(centigrade degree) temperature to farenheit .
*/


#include<stdio.h>
#include<math.h>

int main(){
    int option;
    float calcus,farenheight,temp;
    printf("Select any one option as 1 or 2 \n");
    printf("Option 1 : convert celcus into farenheight \n");
    printf("Option 2 : convert farenheight into celcus \n");
    scanf("%d",&option);

    if (option == 1)
    {
        printf("Enter the value of temperature into calcus:\n");
        scanf("%f",&calcus);
        temp = (((9*calcus)/5)+32);
        printf("The tenperature in farenheight is : %f",temp);
    }
    else{
        printf("Enter the value of temperature into farenheight:\n");
        scanf("%f",&farenheight);
        temp = (((farenheight-32)*5)/9);
        printf("The tenperature in calcus is : %f",temp);
    }

return 0;

}

/*  QUESTION 4 :  Write a program to calculate simple interest for 
    a set of values representing principle ,no. of years and rate of intrest 
*/


#include<stdio.h>

int main(){

    float p,t,r,SI;//where p is principle and t is time interval and r is rate of intrest .
    printf("Enter the value of principle amount \n");
    scanf("%f",&p);

    printf("Enter the value of intrest rate\n");
    scanf("%f",&r);

    printf("Enter the value of time interval\n");
    scanf("%f",&t);

    SI = ((p*t*r)/100);

    printf("The simple intrest for the principle amount %.2f,\nThe time interval %.2f year with the intrest rate %.2f %% is\n>>> %.2f",p,t,r,SI);

    return 0;
}