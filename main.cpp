/*
 * Subject : Lab 03 - Prime Numbers
 * Starting Date : 05.10.2023
 *
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    const int column = 5;
    const int width  = 10;


    cout << "ce programme ..." << endl;


    // user input + input restrictions
    int value;

    do {

        cout << "entrer une valeur [1-1000] : ";
        cin >> value;

    } while (value <= 0 or value > 1000);


    // calculate prime numbers and display the results
    cout << "Voici la liste des nombres premiers" << endl;

    int nb_prime;
    int number, divisor;
    int column_counter;
    // int nb_time = 0; -> ERROR, have to put in the FOR loop, initial value = 0 for every iteration

            // Define prime numbers
            for (number = 1; number <= value; ++number) { // checking all numbers less than the value

                int nb_time = 0;

                //  calculate the number of times it is divisible
                for (divisor = 1; divisor <= number; ++divisor) {
                    if (number % divisor == 0) {
                        ++nb_time;
                    }
                }

                        // pick up prime numbers
                        if (nb_time == 2) {
                            nb_prime = number;
                            ++column_counter;

                            // display prime numbers on 5 columns
                            cout << setw(width) << nb_prime;

                            if (column_counter%column==0){
                                cout << endl;
                            }
                        }
            }

    // Quit function


    return EXIT_SUCCESS;
}


















