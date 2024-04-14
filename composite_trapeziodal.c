#include<stdio.h>
#include<math.h>
#define f(x) (1+pow(x,3))

int main(){
	float a, b, inte = 0.0, h, k;
	int i,n;
	printf("Enter the lower and upper limit and no of intervals: ");
	scanf("%f%f%d",&a,&b,&n);
	h = (b-a)/n;
	inte = f(a)+f(b);
	for(i=1;i<n;i++){
		k = a + i*h;
		inte = inte + 2*f(k);
	}
	inte = inte * h/2;
	printf("Value is %f",inte);
	return 0;
}
