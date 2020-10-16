#include <gmp.h>
#include <stdlib.h>
#include <stdio.h>

#include "ffc.h"



void ffc_test(void)
{
    mpz_t a;
    mpz_init(a);
    mpz_set_str(a, "4A", 16);

    unsigned int len = mpz_sizeinbase(a, 16) + 2;
    char *rop = malloc(sizeof(char) * len);
    mpz_get_str(rop, 16, a);
    // IMSG("Gmp value: %s", rop);
    printf("Gmp value: %s \n", rop);
    free(rop);

    mpz_clear(a);
}

