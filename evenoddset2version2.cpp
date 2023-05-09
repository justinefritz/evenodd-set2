#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int numb, reverse;
    string type, letter;
    cout << "Enter the integer : ";
    cin >> numb;
    if( numb%2 == 0){
    	type = "even";
    }
    	else {
    		type = "odd";
		}
        if (numb >= 1 && numb <= 15){
            letter = 'B';
            }
            else if (numb >= 16 && numb <= 30){
                letter = 'I';
                }
                else if (numb >= 31 && numb <= 45){
					letter = 'N';
                    } 
                    else if (numb >= 46 && numb <= 60){
						letter = 'G';
                        } 
                        else if (numb >= 61 && numb <= 75){
							letter = 'O';		
                            }
                            else if (numb < 1){
                                reverse == abs(numb);
                                cout << numb << " is not a valid input and its absolute value is " << reverse << "\n";
                                main();
                                }
                                else {
                                    cout << "Goodbye";
                                    return 0;
                                }
    cout << numb << " is an " << type << " number that belongs to letter " << letter << "\n";  
	main();                        
}