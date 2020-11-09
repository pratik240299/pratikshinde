
#include<stdio.h>

 struct mobile {
 
	 struct upperinfo {
	 
		 char device_name[20];
		 char device_os[20];
		 int device_ram;
		 char device_processor[20];
	 }upper;

	 struct deepInfo {
	 
		 char device_core[20];
		 int bit;
	 }deep;
 };

 void main() {
 
	 struct mobile obj = {{"Samsung M30","Android 8.1",4,"Exynos 7904"},{"Octa core",64}};
	 printf("Mobile Info : \n");
	 printf("Device name : %s\n",obj.upper.device_name);
	 printf("Device OS : %s\n",obj.upper.device_os);
	 printf("Device RAM : %dGB\n",obj.upper.device_ram);
	 printf("Device processor : %s\n",obj.upper.device_processor);
	 printf("Device core %s\n",obj.deep.device_core);
	 printf("Device bit %d bits\n",obj.deep.bit);
 }

/*
 * Mobile Info :
Device name : Samsung M30
Device OS : Android 8.1
Device RAM : 4GB
Device processor : Exynos 7904
Device core Octa core
Device bit 64 bits

*/
