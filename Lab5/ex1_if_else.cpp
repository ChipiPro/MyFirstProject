// EXERCISE 1: Subscription check using if / else-if
#include <iostream>   // gives us cout (printing to the screen)
#include <cstdlib>    // gives us rand() and srand() (random numbers)
#include <ctime>      // gives us time(), used to seed the random generator
using namespace std;  // lets us write cout instead of std::cout

int main() {
    srand(time(0));   // seed the generator with the current time so the number differs each run
                      // MISTAKE: skip this and you get the SAME "random" number every run

    int daysUntilExpiration = rand() % 12;  // rand() % 12 gives 0..11 (the remainder is always 0 to 11)

    // Only ONE message must print, so we use one if / else-if chain.
    // Order matters: check the most specific cases first.
    if (daysUntilExpiration == 0) {                         // 0 days left = already expired
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration == 1) {                    // exactly 1 day left
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if (daysUntilExpiration <= 5) {                    // 2 to 5 days (1 was already handled above)
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration <= 10) {                   // 6 to 10 days
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else {                                                  // only 11 is left
        cout << "You have an active subscription." << endl;
    }

    return 0;  // 0 tells the operating system "finished successfully"
}
