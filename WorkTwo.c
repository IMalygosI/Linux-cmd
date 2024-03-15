#include <stdio.h>
#include <stdint.h>
#include <limits.h>
int main(int argc, char** argv) {
 printf("Usigned char - sizeof uint8_t:			 %lu\n", sizeof(uint8_t));
 printf("char - sizeof uint8_t:				 %lu\n", sizeof(uint8_t));
 printf("Singed char - sizeof int8_t: 			 %lu\n", sizeof(int8_t));
 printf("Usinged short - sizeof uint16_t:		 %lu\n", sizeof(uint16_t));
 printf("Usinged short int - sizeof uint16_t: 		 %lu\n", sizeof(uint16_t));
 printf("short - sizeof int16_t: 			 %lu\n", sizeof(int16_t));
 printf("short int - sizeof int16_t: 	        	 %lu\n", sizeof(int16_t));
 printf("Singed short - sizeof uint16_t: 		 %lu\n", sizeof(uint16_t));
 printf("Usinged int - sizeof uint32_t:			 %lu\n", sizeof(uint32_t));
 printf("int - sizeof int32_t: 				 %lu\n", sizeof(int32_t));
 printf("signed - sizeof int16_t:	 		 %lu\n", sizeof(int16_t));
 printf("signed int - sizeof int16_t: 			 %lu\n", sizeof(int16_t));
 printf("Usigned - sizeof int16_t:			 %lu\n", sizeof(int16_t));
 printf("long - sizeof int32_t:				 %lu\n", sizeof(int32_t));
 printf("long int - sizeof int32_t:			 %lu\n", sizeof(int32_t));
 printf("Singed long - sizeof uint32_t: 		 %lu\n", sizeof(int32_t));
 printf("Singed long int - sizeof uint32_t:     	 %lu\n", sizeof(int32_t));
 printf("Usinged long - sizeof uint32_t:		 %lu\n", sizeof(uint32_t));
 printf("Usinged long int - sizeof uint32_t:    	 %lu\n", sizeof(uint32_t));
 printf("Usinged long long - sizeof uint64_t:  		 %lu\n", sizeof(uint64_t));
 printf("Usinged long long int - sizeof uint64_t:        %lu\n", sizeof(uint64_t));
 printf("long long int - sizeof int64_t:		 %lu\n", sizeof(int64_t));
 printf("long long - sizeof int64_t:			 %lu\n", sizeof(int64_t));
 printf("Singed long long - sizeof uint64_t:		 %lu\n", sizeof(int64_t));
 printf("Singed long long int - sizeof uint64_t:	 %lu\n", sizeof(int64_t));
 printf("float - sizeof float:				 %lu\n", sizeof(float));
 printf("double - sizeof double: 			 %lu\n", sizeof(double));
 printf("long double - sizeof double: 			 %lu\n", sizeof(double));
 return 0;
}
