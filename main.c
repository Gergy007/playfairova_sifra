#include <stdio.h>
#include "playfair.h"

int main()
{
    char *encrypted_text = playfair_encrypt("kluc","CLOVEK");
    printf("\n%s\n",encrypted_text);
    return 0;
}