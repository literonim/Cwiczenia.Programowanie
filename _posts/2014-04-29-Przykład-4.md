```
#include <stdio.h>
main(){
	int suma_kwadratow = 0, i;
	for(i=3; i<=15; i++) suma_kwadratow+= i * i;
	printf("Suma kwadratow liczb od 3 do 15 obliczona za pomoca petli FOR wynosi: %d", suma_kwadratow);
	suma_kwadratow = 0;
	i=3;
	while(i<=15){
		suma_kwadratow+= i * i;
		i++;
	}
	printf("\nSuma kwadratow liczb od 3 do 15 obliczona za pomoca petli WHILE wynosi: %d", suma_kwadratow);
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}

