#include <stdio.h>
#include <math.h>

int main(){
	
	float diameter = 15.0;
	float jari_jari;
	float volume;
	const float pi = 3.14159;
	
	jari_jari = diameter / 2;
	
	volume = (4.0 / 3.0) * pi * pow(jari_jari, 3);
	
	printf("Volume bola adalah: %.2f cm^3\n", volume);
	
	return 0;
}
