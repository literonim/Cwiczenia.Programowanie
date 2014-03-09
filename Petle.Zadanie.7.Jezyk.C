#include <stdio.h>
main(){
	char i;
	printf("_Wypisanie znakow w kolejnosci rosnacej wraz z ich kodami ASCI_\n\n_______Znaki: ");
	for(i='a'; i<='k'; i++)
	printf("%4c ", i);
	printf("\n_Dziesietnie: ");
	for(i='a'; i<='k'; i++)
	printf("%4d ", i);
	printf("\nSzesnastkowo: ");
	for(i='a'; i<='k'; i++)
	printf("%#4x ", i);
	printf("\n\n\n_Wypisanie znakow w kolejnosci malejacej wraz z ich kodami ASCI_\n\n_______Znaki: ");
	for(i='k'; i>='a'; i--)
	printf("%4c ", i);
	printf("\n_Dziesietnie: ");
	for(i='k'; i>='a'; i--)
	printf("%4d ", i);
	printf("\nSzesnastkowo: ");
	for(i='k'; i>='a'; i--)
	printf("%#4x ", i);
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}
