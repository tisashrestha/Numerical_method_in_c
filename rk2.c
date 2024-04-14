#include<stdio.h>
#include<math.h>

float func(float x, float y){
	return 3*pow(x,2)+1;
}

int main(){
	float x0, y0, h, xn, y1, k1, k2, k;
	int i, n;
	printf("Enter the values of x and y and stepsize h: ");
	scanf("%f%f%f",&x0,&y0,&h);
	printf("Enter the value of x for which y is required: ");
	scanf("%f",&xn);
	n = (xn-x0)/h;
	
	for(i=0;i<n;i++){
		k1 = h*func(x0, y0);
		k2 = h*func(x0+h, y0+k1);
		k = (k1+k2)/2;
		y1 = y0 + k;
		y0 = y1;
		x0 = x0 + h;
	}
			printf("The value of y is %f", y1);
		return 0;
}
