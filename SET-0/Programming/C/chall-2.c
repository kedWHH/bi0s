#include <stdio.h>
#include <math.h>

float pi = 3.14159265358;

void cone(float r, float h){
	float l = sqrt(r*r + h*h);
	float area = pi * r * ( r + h);
	float volume = pi * r * r * l;
	float circ = 2 * pi * r;
	printf("Surface Area : %f\nVolume : %f\nCircumference : %f", area, volume, circ);
}

void sphere(float r){
	float area = 4 * pi * r * r;
	float volume = area * r / 3;
	printf("Surface Area : %f\nVolume : %f\nCircumference : N/A", area, volume);
}

void cuboid(float l, float b, float h){
	float area = 2 * (l*b + b*h + b*l);
	float volume = l * b * h;
	float perimeter = 4 * (l + b + h);
	printf("Surface Area : %f\nVolume : %f\nPerimeter : %f", area, volume, perimeter);
}


void main(){
	int c;
	printf("Enter 1 for cuboid, 2 for cone or 3 for sphere : ");
	scanf("%d", &c);
	if (c==1){
		float m1,m2,m3;
		printf("Enter length : ");
		scanf("%f", &m1);
		printf("Enter breadth : ");
                scanf("%f", &m2);
		printf("Enter height : ");
                scanf("%f", &m3);
		cuboid(m1,m2,m3);
	}
	if (c==2){
                float m1,m2;
                printf("Enter radius of base : ");
                scanf("%f", &m1);
                printf("Enter height : ");
                scanf("%f", &m2);
                cone(m1,m2);
        }
	if (c==3){
                float m1;
                printf("Enter radius : ");
                scanf("%f", &m1);
                sphere(m1);
        }


}
