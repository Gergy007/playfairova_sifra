#include <stdio.h>
#include "playfair.h"

int main()
{
    char *encrypted_text = playfair_encrypt("kluc","CLOVEK");
    printf("%s\n",encrypted_text);
    return 0;
}