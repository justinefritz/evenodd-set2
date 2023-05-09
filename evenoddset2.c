#include <stdio.h>
#include <math.h>

int main(){
    int numb, reverse;
    printf("Enter the integer : ");
    scanf("%d", &numb);
    if( numb%2 == 0){
        if (numb >= 1 && numb <= 15){
            printf("%d is an even number that belongs to letter B\n", numb);
            main();
            }
            else if (numb >= 16 && numb <= 30){
                printf("%d is an even number that belongs to letter I\n", numb); 
                main();
                }
                else if (numb >= 31 && numb <= 45){
                    printf("%d is an even number that belongs to letter N\n", numb);
                    main();
                    } 
                    else if (numb >= 46 && numb <= 60){
                        printf("%d is an even number that belongs to letter G\n", numb);  
                        main();
                        } 
                        else if (numb >= 61 && numb <= 75){
                            printf("%d is an even number that belongs to letter O\n", numb); 
                            main();
                            }
                            else if (numb < 1){
                                reverse == abs(numb);
                                printf("%d is not a valid input and its absolute value is %d\n", numb, reverse);
                                main();
                                }
                                else{
                                    printf("Goodbye");
                                }
    }
    else {
        if (numb >= 1 && numb <= 15){
            printf("%d is an odd number that belongs to letter B\n", numb);
            main();
            }
            else if (numb >= 16 && numb <= 30){
                printf("%d is an odd number that belongs to letter I\n", numb);
                main();  
                }
                else if (numb >= 31 && numb <= 45){
                    printf("%d is an odd number that belongs to letter N\n", numb);  
                    main();
                    } 
                    else if (numb >= 46 && numb <= 60){
                        printf("%d is an odd number that belongs to letter G\n", numb); 
                        main();
                        } 
                        else if (numb >= 61 && numb <= 75){
                            printf("%d is an odd number that belongs to letter O\n", numb);
                            main(); 
                            }
                            else if (numb < 1){
                                reverse = abs(numb);
                                printf("%d is not a valid input and its absolute value is %d\n", numb, reverse);
                                main();
                            }
                            else{
                                printf("Goodbye");
                                }    
    }
}