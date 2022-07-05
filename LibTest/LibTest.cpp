#include <stdio.h>
#include "pyc.h"

void main(int argc, char** argv)
{
	auto vba_p = pyc_create_vba(10);
	pyc_free_vba(vba_p);
	printf("Hahah !!! Exit the process!!!");
}