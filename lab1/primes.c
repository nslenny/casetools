/*!\file*/
#include <stdio.h>
#include "calculate_primes.h"

int main(){
    int n;
    printf ("Ввести диапазон:\n");
    scanf ("%d",&n);
    int arr[n];
    for (int i = 1; i<=n; i++){
	arr [i] = i;
    }
    calculate_primes (arr, n);

    printf ("Простые числа:\n");

    for (int i = 1; i<=n; i++){
	if (arr[i] != 1){
	    printf ("%d\n", arr[i]);
	}
    }

    return 0;
}

