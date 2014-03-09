#include <stdio.h>
main(){
	int i, n;
	do{
	printf("Podaj ilosc cyfr jaka ma byc wyliczona: ");
	scanf("%d", &n);
	} while(n<=1);
	printf("\n-Obliczanie za pomoca petli FOR-\n");
	for(i=1; i<=n; i++){
		printf("Kwandrat liczby %d wynosi: %d\t\t", i, i*i);
		printf("Szescian liczby %d wynosi: %d\n", i, i*i*i);
	}
	printf("\n\n-Obliczanie za pomoca petli WHILE-\n");
	i=1;
	while(i<=n){
		printf("Kwandrat liczby %d wynosi: %d\t\t", i, i*i);
		printf("Szescian liczby %d wynosi: %d\n", i, i*i*i);
		i++;
	}
	printf("\n\n-Obliczanie za pomoca petli DO WHILE-\n");
	i=1;
	do{
		printf("Kwandrat liczby %d wynosi: %d\t\t", i, i*i);
		printf("Szescian liczby %d wynosi: %d\n", i, i*i*i);
		i++;
	} while(i<=n);
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar(); getchar();
}
