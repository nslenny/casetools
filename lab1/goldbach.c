/*!\file*/
#include <stdio.h>
//test commit
#include "calculate_primes.h"
/*!

\brief Расчитывает гипотизу Гольдбоха
\version 1.0.0
\warning Это только начальная версия данной программы


\code
int main (){
    int n;
    int m;
    int s = 0;
    int max = 10000000;
    int number1;
    int number2;
    int buf = 0;
    scanf("%d",&n);
    scanf ("%d",&m);
    int arr[m];
    for (int i = 1; i<=m; i++){
	arr[i] = i;
    }
    calculate_primes(arr,m);

    for (int i = n; i <=m; i+=2){
	printf ("%d ",i);
	for (int x = 1;x <= m; x++){
	    for (int y = 1; y <= m;y++){
		if ((arr[x] != 1) && (arr[y] != 1) && (arr[x] + arr[y] == i)){
			s++;
			if ((arr[x] != arr[y]) && ((arr[x]+arr[y]) == (arr[y]+arr[x]))){
			    buf++;
			}
			if (x <= max){
			    number1 = x;
			    number2 = y;
			    max = x;
			}
		    }
	    }
	}
	s-=buf/2;
	printf ("%d %d %d\n",s ,number1, number2);
	s = 0;
	buf = 0;
	max = 10000000;
    }
\endcode

  
  
 */
int main (){
    int n;
    int m;
    int s = 0;
    int max = 10000000;
    int number1;
    int number2;
    int buf = 0;
    scanf("%d",&n);
    scanf ("%d",&m);
    int arr[m];
    for (int i = 1; i<=m; i++){
	arr[i] = i;
    }
    calculate_primes(arr,m);

    for (int i = n; i <=m; i+=2){
	printf ("%d ",i);
	for (int x = 1;x <= m; x++){
	    for (int y = 1; y <= m;y++){
		if ((arr[x] != 1) && (arr[y] != 1) && (arr[x] + arr[y] == i)){
			s++;
			if ((arr[x] != arr[y]) && ((arr[x]+arr[y]) == (arr[y]+arr[x]))){
			    buf++;
			}
			if (x <= max){
			    number1 = x;
			    number2 = y;
			    max = x;
			}
		    }
	    }
	}
	s-=buf/2;
	printf ("%d %d %d\n",s ,number1, number2);
	s = 0;
	buf = 0;
	max = 10000000;
    }
    
    
}
