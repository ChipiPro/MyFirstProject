// EXERCISE 2: Same program as Exercise 1, using switch
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                                // seed the random generator
    int daysUntilExpiration = rand() % 12;         // number from 0 to 11

    // switch compares ONE value against exact cases.
    switch (daysUntilExpiration) {
        case 0:                                    // exactly 0
            cout << "Your subscription has expired." << endl;
            break;                                 // break stops us falling into the next case
                                                   // MISTAKE: forgetting break prints several messages
        case 1:                                    // exactly 1
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:                                    // cases 2,3,4,5 share one block.
        case 3:                                    // No break between them, so they "fall through"
        case 4:                                    // to the code below on purpose.
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:                                    // cases 6 to 10 share one block
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:                                   // anything else (only 11 here)
            cout << "You have an active subscription." << endl;
            break;
    }
    return 0;
}
