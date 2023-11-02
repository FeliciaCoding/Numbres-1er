/*
 * Subject : Lab 03 - Prime Numbers
 * Starting Date : 05.10.2023
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

int main() {

    // good 👍
    // but naming convention is all caps for constants: COLUMN or WIDTH
    const int column = 5;
    const int width  = 10;


    // not good... 🤢
    // gotos are not recommended for the last 60 years...
    // read more here: https://homepages.cwi.nl/~storm/teaching/reader/Dijkstra68.pdf
    restart_program: // The label of "goto"
    // don't be lazy, write the whole thing
    cout << "Ce programme ..." << endl;
    cout << endl;

    // User input + input restrictions
    // bad name
    int value;

    do {

        cout << "entrer une valeur [2-1000] : ";
        cin >> value;

        // extract to constants
    } while (value <= 1 or value > 1000);


    // Calculate prime numbers and display the results
    cout << endl;
    cout << "Voici la liste des nombres premiers" << endl;

    int nb_prime;
    // number is a very bad name
    // you don't need to declare divisor here
    int number, divisor;
    int column_counter;
    // int nb_time = 0; ---> [ERROR] have to put in the FOR loop, initial value = 0 for every iteration

    // why the indentation ?
            // Define prime numbers
            for (number = 1; number <= value; ++number) { // checking all numbers less than the value

                // bad name
                int nb_time = 0;

                // the algorithm is technically correct but not advisable...
                //  Calculate the number of times it is divisible
                for (divisor = 1; divisor <= number; ++divisor) {
                    if (number % divisor == 0) {
                        ++nb_time;
                    }
                }

                // why the indentation again ?
                        // Pick up prime numbers
                        if (nb_time == 2) {
                            nb_prime = number;
                            ++column_counter;


                            cout << setw(width) << nb_prime;


                            // Display prime numbers on 5 columns
                            // should reset column_counter if you want it to have it's meaning
                            if (column_counter%column==0){
                                cout << endl;
                            }
                        }
            }
    // Always display only 1 empty line before start asking the following question
    if (column_counter%column!=0){
        cout << endl;
    }
    cout << endl;

    // Quit/Restart function
    char restart;

    do{
        cout << "Voulez-vous recommencer [O/N] : ";
        cin >> restart;

        // extract to constants
    } while (restart != 'O' and restart !='N') ;

    if(restart == 'O'){
        // why do a goto ? not a do...while ?
        goto restart_program;
    }

    cout << endl;
    cout << "Fin de programme" << endl;

    return EXIT_SUCCESS;
}

