#include "types.h"
#include "user.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{
	char *va;
	char *pa;

	if(argc < 2) {
		printf(stderr, "Numero insuficiente de argumentos.\n");
		exit();
	}

	va = (char*) atoi(argv[1]);

	printf(stdout, "Endereço virtual %p\n", va);
	pa = virt2real(va);

	if (!pa) {
		printf(stderr, "Erro na chamada de sistema\n");
		exit();
	}
	printf(stdout, "Endereço real %p\n", pa);
	exit();
}
