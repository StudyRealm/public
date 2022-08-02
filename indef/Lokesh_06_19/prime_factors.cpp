/*	By getting factors through this algo, we will only get the prime factors and the prev prime numbers will divide the upcomimg non-prime factors of the given number.
 */

#include <iostream>
using std::cin, std::cout;

void factors(int num) {
    int temp = 2;
    while (temp * temp <= num) {	//checking whether the product of further multiplication stay
			      	//within the number n (initial or modified)

        if (num % temp  == 0) { 	// Checking for factors
            cout << temp <<'\n';
            num /= temp;		// Diving the number to remove the factor
        } else {		
            temp++;
        }
    }
    if (num > 1) {		// Primting out the last prime factor left (i.e. the number left)
				//  after removing every non-prime factor from the number.
        cout << num << '\n';
    }
}

int main() {
	int target;
	cin >> target;
	factors(target);
}

