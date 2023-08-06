/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int rem[32];
    while(n!=0){
        
        for(int i=0;i<n;i++){
            rem[i]=n%2;
             n=n/2;
             printf("%d",rem[i]);
                    }
               }
          return 0;
} 

