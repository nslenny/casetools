/*!\file*/

#include <stdio.h>
#include "calculate_primes.h"

/*!

\brief Это отдельная библиотека для подсчёта простых чисел
\version 1.0.0
\warning Это только начальная версия данной библеотеки


\code
int calculate_primes (int primes[], int n){
    for (int i = 1; i <= n; i++){
	if (primes[i] != 1){
	    for (int j = i; j <= n; j++){
		if ((primes[j] % primes[i] == 0) && (primes[i] != primes [j])) {
		    primes [j] = 1;
		}
	    }
	}
\endcode

  
  
 */


int calculate_primes (int primes[], int n){
    for (int i = 1; i <= n; i++){
	if (primes[i] != 1){
	    for (int j = i; j <= n; j++){
		if ((primes[j] % primes[i] == 0) && (primes[i] != primes [j])) {
		    primes [j] = 1;
		}
	    }
	}
    }
}


