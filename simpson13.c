#include<stdio.h>
#include<math.h>
#define f(x) (1+pow(x,3))

int main(){
	float a, b, inte = 0.0, h;
	int i;
	printf("Enter the lower and upper limit: ");
	scanf("%f%f",&a,&b);
	h = (b-a)/2;
	inte = (h/3)*(f(a)+4*f((a+b)/2)+f(b));
	printf("Value is %f",inte);
	return 0;
}
