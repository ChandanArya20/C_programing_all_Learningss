#include<stdio.h>
#include<math.h>
long long fact(int);
int main()
{
    int n,i,power,sign;
    float x,j,term,sum=0;
    printf(" Enter the angle in degrees : ");
    scanf("%f",&x);
    x=x*0.017460;        // To convert degree to radiun
    for ( i = 1; i <= 10; i++)
    {
       sign= (i%2==0)?-1:1;
       j=i*2-1;
       term = sign*pow(x,j)/fact(j);
       sum+=term;
    }
    printf(" Sum of the series = %f\n",sum);
    printf(" Sum of the series = %f",sin(x));

    return 0;
}

long long fact(int n)
{
	if(n<0)
		printf(" Please inter non-negative integer\n");
	else
	{
		long long f=1;
    	for(f=1;n>0;n--)
        {
            f*=n;
        }
		return f;
	}
	return 0;
}

