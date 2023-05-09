#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int numb, reverse;
    char type[5], letter[2];
    printf("Enter the integer : ");
    scanf("%d", &numb);
    if( numb%2 == 0){
    	strcpy(type, "even");
    }
    	else {
    		strcpy(type, "odd");
		}
        if (numb >= 1 && numb <= 15){
            strcpy(letter, "B");
            }
            else if (numb >= 16 && numb <= 30){
               	strcpy(letter, "I");
                }
                else if (numb >= 31 && numb <= 45){
					strcpy(letter, "N");
                    } 
                    else if (numb >= 46 && numb <= 60){
						strcpy(letter, "G");
                        } 
                        else if (numb >= 61 && numb <= 75){
							strcpy(letter, "O");		
                            }
                            else if (numb < 1){
                                reverse == abs(numb);
                                printf("%d is not a valid input and its absolute valus is %d", numb, reverse);
                                main();
                                }
                                else {
                                   	printf("Goodbye");
                                    return 0;
                                }
    printf("%d is an %s number that belongs to letter %s\n", numb, type, letter); 
	main();                        
}