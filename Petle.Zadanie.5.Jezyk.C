#include <stdio.h>
#include <math.h>
main(){
	int i;
	double x = 0;
	printf("________sin_____cos\n");
	for(i=0; i<=180; i+=30){
		x = (i * M_PI) / 180;
		printf("%3d\370   %.2f   %+.2f\n", i, sin(x), cos(x));
	}
	printf("\n\n\nWcisnij klawisz ENTER aby wyjsc...");
	getchar();
}
