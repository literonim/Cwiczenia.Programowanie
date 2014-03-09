#include <stdio.h>
main(){
	int a, b;
	printf("___");
	for(a=1; a<=13; a++) printf("__%02d_", a);
	for(a=1; a<=13; a++){
		printf("\n%02d", a);
		for(b=1; b<=13; b++)
		printf("  %3d", a * b);
	}
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}
