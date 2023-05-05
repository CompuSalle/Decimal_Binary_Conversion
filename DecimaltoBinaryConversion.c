#include <stdio.h>
 
/* function that gets binary number of the given decimal number */   
void showbits( unsigned int x )
{
    int i=0;
    for (i = (sizeof(int) * 2) - 1; i >= 0; i--)
    {
       putchar(x & (1u << i) ? '1' : '0');
    }
    printf("\n");
}
//The Main Programe 
int main( void )
{
    int a_first_number[10],ii,iii,a_secound_number[10];   
    int First_userInput, Second_userInput;
    int theBcode;
    printf("Enter First dDecimal Number  : "); //taking user input 
    scanf("%d", &First_userInput);            //saving user input 
    printf("Enter secound decimal number  : "); //taking user input 
    scanf("%d", &Second_userInput);            //saving user input 

    printf("First Decimal (%d) in binary  : ", First_userInput);
    showbits(First_userInput);
    printf("Second Decimal (%d) in binary  : ", Second_userInput); //printing the binary value of the user input 
    /* Calling the function on the user input to convert the decimal into binary */
    showbits(Second_userInput);
    
    /* First decimal number left - shift operation */ 
    printf("\n"); 
    printf("-------------------\n"); 
    printf("Left Sifter (8-Bit)\n\n"); 
    int stoptheloop = 0;
    while (stoptheloop < 8 ){
        
        for(ii=0;First_userInput > 0;ii++)    {
            a_first_number[ii]=First_userInput%2;    
            First_userInput=First_userInput/2; 
            
            }
            
            for(iii=0;Second_userInput > 0;iii++)    {
            a_secound_number[iii]=Second_userInput%2;    
            Second_userInput=Second_userInput/2; 
            }
            
                for(ii=ii-1;ii>=0;ii--)
                {    
                    printf("%d\n", a_first_number[ii]%10); 
                    a_first_number[ii]=a_first_number[ii]/10;
                    
                }   
                    int tostop =1;
                    while(tostop==1){
                        printf("\n\n\n");
                       
                        for(iii=iii-1;iii>=0;iii--)
                        {    
                            printf("%d\n", a_secound_number[iii]%10); 
                            a_secound_number[iii]=a_secound_number[iii]/10;
                            
                        }
                            for(int xx=0; xx <= 2; xx++){
                                
                                printf("test"); 
                                xx =+ 1;
                                tostop = 2;
                                break;
                            }
                    }
                    break;
    }


    return 0;
}
