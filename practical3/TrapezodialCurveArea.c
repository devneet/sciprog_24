#include<stdio.h>
#include<math.h>

int main(void) {
	
	float a,b,sum;
	a=0;
	b= M_PI*60/(float)180;
	int i,N=12;
	
	for (i=5;i<60;i+=5) {
		sum+=2*tan(M_PI*(float)i/180.0);
	}
	sum+=tan(M_PI*60.0/(float)180);
	sum*=(b-a)/(2*(float)N);
	printf("Computed Value: %f\n",sum);
	printf("Actual Value (logf(2)): %f\n",logf(2));
	printf("Difference: %f\n",fabs(sum-logf(2)));
	return(0);
}
