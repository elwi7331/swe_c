#include "swe.h"
#include "swe_extension.h"
#include <stdio.h>

hel primär() {
	för (hel i=0; i<10; i++) {
		om (i % 2 == 0 ) {
			printf("jämn: ");
		} annars {
			printf("udda: ");
		}
		printf("%d\n", i);
	}
	returnera 0;
}
