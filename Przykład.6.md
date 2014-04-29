```
#include <stdio.h>
main(){
	int n, i;
	float x, suma = 0, srednia_arytmetyczna = 0;
	do{
	printf("Podaj ilosc liczb do wczytania: ");
	scanf("%d", &n);
	} while(n<=1);
	for(i=1; i<=n; i++){
		printf("Podaj %d liczbe: ", i);
		scanf("%f", &x);
		suma+= x;
	}
	printf("Suma wyswietlonych liczb wynosi: %.1f\nSrednia arytmetyczna wyswietlonych liczb wynosi: %.1f", suma, suma/n);
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar(); getchar();
}
