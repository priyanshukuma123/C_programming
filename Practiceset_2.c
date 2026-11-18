/*     practice set 2 contains 5 question 
       date 08/08/2026
       */

/*  QUESTION 1 :  Which of the following is invalid in C.
    (I) int a ;  b = a ; 
    (II) int V =  3^3 ;
    (III) char dt = '21 Dec 2020 '; 
*/

#include<stdio.h>

int main(){
  //  int a ;  b = a ; 
        //  :No this is wrong as b is not defined and if b is defined like int a ,b ; still it is 
        //   wrong as there is no value of a is assigned 

   int V =  3^3 ;  //this is correct 

   char dt = '21 Dec 2020' ;  //This is also correct 
     
}

//  QUESTION 2 :  What data type will it returns ? : 3.0/8-2 
/*
Answer : It returns a double data type as 3.0 is a double number , code to check the data type is : 
#include <stdio.h>
*/

int main() {
    printf("Size: %zu bytes\n", sizeof(3.0 / 8 - 2));
    return 0;
}
//  if it will return 8 bite it is a double and if it return 4 it is a float or int .


//   QUESTION 3 :  Write a program to check whether a number is divisibe by 97 or not.

#include<stdio.h>

int main(){

    int num;

    printf("Enter a number to check wheather a number is divisible by 97 or not\n");
    scanf("%d",&num);

    if (num % 97 == 0)
    {
        printf("Yes the number is divisible by 97 \n");
    }
    else{
        printf("The number is not divisible by 97 it will leave remainder as %d",num % 97);
    }

    return 0;
    
}



// QUESTION 4 :  Explain step by step evalution of 3*x/y-z+k , where x=2,y=3,z=3,k=1.
/* 
Answer : first priority *and/ from left to right then +and- from left to right so 2*3=6 ,6/3=2 , 2-3=-1,-1+1=0 ans.
*/

// QUESTION 5 :  3.0 + 1 Wll be :  (a) integer ,(b) floating point number ,(c) character .

// Answer :  It is a floating point number as 3.0 is a floating point number.