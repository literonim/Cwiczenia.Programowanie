#include <stdio.h>
main(){
	float i;
	printf("Wydrukowanie ciagu liczb przy pomocy petli FOR: ");
	for(i=-3.5; i<=7.5; i+=0.5){
		printf("%.1f ",i);
	}
	printf("\n\n\nWydrukowanie ciagu liczb przy pomocy petli WHILE: ");
	i=-3.5;
	while(i<=7.5){
		printf("%.1f ",i);
		i+=0.5;
	}
	printf("\n\n\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}
