/* Andiamo a dichiarare una variabile
 * Associamo un valore e stampiavo il valore con printf()
 * Associamo un nuovo valore e ristampiamo il nuovo valore.
 */

#include <stdio.h>
int main(void){
	int A;
	A = 100;
	printf("Il valore di A e' pari a: %d\n", 	A);
	A = 200;
	printf("Ora il valore di e' pari ad: %d\n", A);
}
