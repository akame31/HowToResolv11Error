#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x;

	printf("Olá, deseja resolver o erro? Se sim, digiter enter ");
	getchar();
	remove("/var/cache/apt/archives/lock");

	printf("Pronto, agora depois de terminado o programa, digite sudo apt-get install _nomedopacote_ \n");

}
