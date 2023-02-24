#include<stdio.h>
int main()
{
	float real1,real2,img1,img2,real,img;
	printf("Enter real parts of first and second No. respectively = ");
	scanf("%f%f",&real1,&real2);
	printf("Enter imaginary parts of first and second No. respectively = ");
	scanf("%f%f",&img1,&img2);
	real=real1+real2;
	img=img1+img2;
	printf("%.1f+%.1fi",real,img);

	return 0;	
}
