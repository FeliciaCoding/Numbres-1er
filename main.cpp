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



    cout << "ce programme ..." << endl;


    // user input + input restrictions
    int value;

    do{

        cout << "entrer une valeur [1-1000] : ";
        cin >> value;

    } while(value <= 0 or value > 1000);


    // calculate prime numbers and display the results
    cout << "Voici la liste des nombres premiers" << endl;

    int nb_prime ;
    int temp_prime, x;
    // int nb_time = 0; -> ERROR, have to put in the FOR loop, initial value = 0 for every iteration

    // Define prime numbers
    for ( temp_prime=1; temp_prime <= value; ++temp_prime) { // checking all numbers less than the value

        int nb_time = 0;

        //  number of times of integer division
        for (x=1; x <= temp_prime /* temp_prime/2 */ ; ++x) {
            if (temp_prime % x ==0){
                ++nb_time;
            }
        }

        // pick up prime numbers
        if (nb_time <= 2){
            nb_prime = temp_prime;

            // organise and display prime numbers
            cout << setw(10) << nb_prime << endl;

        }



    }


    // Quite function


    return EXIT_SUCCESS;
}







