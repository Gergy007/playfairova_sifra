#include <stdio.h>
#include "playfair.h"

int main()
{
    char *encrypted_text = playfair_encrypt(" SEcReT","HELLO WORLD");
    printf("\n%s\n",encrypted_text);
    return 0;
}