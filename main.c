#include <stdio.h>
#include <stdlib.h>

//adding the f_max function header file
#include "Header_Functions/f_max.h"
//adding the f_max function header file
#include "Header_Functions/f_min.h"
//adding the f_add function header file
#include "Header_Functions/f_add.h"

int main()
{       // testing the max function

        float n1,n2;
        printf("Enter two numbers :\n");

        //taking in two numbers to test the min and max functions
        scanf("%f%f",&n1,&n2);

        //testing if the max function works
         printf("\n Max is : %.2f \t",f_max(n1,n2));

        //testing if the max function works
         printf("\n Min is : %.2f \t",f_min(n1,n2));

         //testing if the add function works
         printf("\n %.2f + %.2f is = %.2f \t",n1,n2,f_add(n1,n2));


    return 0;
}
