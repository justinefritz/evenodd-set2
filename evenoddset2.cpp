#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int numb, reverse;
    cout << "Enter the integer : ";
    cin >> numb;
    if( numb%2 == 0){
        if (numb >= 1 && numb <= 15){
            cout << numb << " is an even number that belongs to letter B\n";
            main();
            }
            else if (numb >= 16 && numb <= 30){
                cout << numb << " is an even number that belongs to letter I\n";
                main();
                }
                else if (numb >= 31 && numb <= 45){
                    cout << numb << " is an even number that belongs to letter N\n";
                    main();
                    } 
                    else if (numb >= 46 && numb <= 60){
                        cout << numb << " is an even number that belongs to letter G\n";
                        main();
                        } 
                        else if (numb >= 61 && numb <= 75){
                            cout << numb << " is an even number that belongs to letter O\n";
                            main();
                            }
                            else if (numb < 1){
                                reverse == abs(numb);
                                cout << numb << " is not a valid input and its absolute value is " << reverse << "\n";
                                main();
                                }
                                else{
                                    cout << "Goodbye";
                                }
    }
    else {
        if (numb >= 1 && numb <= 15){
            cout << numb << " is an odd number that belongs to letter B\n";
            main();
            }
            else if (numb >= 16 && numb <= 30){
                cout << numb << " is an odd number that belongs to letter B\n";
                main();  
                }
                else if (numb >= 31 && numb <= 45){
                    cout << numb << " is an odd number that belongs to letter B\n";
                    main();
                    } 
                    else if (numb >= 46 && numb <= 60){
                        cout << numb << " is an odd number that belongs to letter B\n";
                        main();
                        } 
                        else if (numb >= 61 && numb <= 75){
                            cout << numb << " is an odd number that belongs to letter B\n";
                            main(); 
                            }
                            else if (numb < 1){
                                reverse = abs(numb);
                                cout << numb << " is not a valid input and its absolute value is " << reverse << "\n";
                                main();
                            }
                            else{
                                cout << "Goodbye";
                                }    
    }
}