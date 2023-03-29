#include <stdio.h>
#include <math.h>
//beecrowd | 1038 : Snack
int main() 
{
    //X = array of prices , Y = quantity of the items 
    int code ,quantity;
    double amount;
    double price[5] = {4.00,4.50,5.00,2.00,1.50};

    if (scanf("%d%d",&code ,&quantity))
        {
            if (code <= 0 && code <= 6){

            printf("Erorr\n");

        }else{
                
                code -= 1;

                amount = price[code] * quantity; 
                
                printf("Total: R$ %0.2lf\n",amount);
            }

    }else {

       printf("Error");
    }
        
 return 0; 
}
