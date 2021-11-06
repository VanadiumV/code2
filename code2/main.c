//
//  main.c
//  code2
//
//  Created by vanadiumv on 24/10/21.
//

#include <stdio.h>

int main(){
    
    for(int i=1; i<= 100 ; i++)
    {
    if (i % 3!=0 && i%5!=0)
    {
        printf("%d\n",i);
    }
        
    else if(i%3==0 && i%5==0)
{
printf("FizzBuzz\n");
}
        else if(i%5==0)
        {
            printf("Buzz\n");
        }
    }
    return 0;
}
