```
#include <stdio.h>
main(){
	int i;
	printf("Wydrukowanie ciagu liczb przy pomocy petli FOR: ");
	for(i=0; i<=23; i++){
		printf("%d ",i);
	}
	printf("\n\n\nWydrukowanie ciagu liczb przy pomocy petli WHILE: ");
	i=0;
	while(i<=23){
		printf("%d ",i);
		i++;
	}
	printf("\n\n\nWydrukowanie ciagu liczb przy pomocy petli DO WHILE: ");
	i=0;
	do{
		printf("%d ",i);
		i++;
	} while(i<=23);
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}
```
