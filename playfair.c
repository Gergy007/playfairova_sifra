//
// Created by jurko on 8/20/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playfair.h"

char* playfair_encrypt(const char* key, const char* text)
{
    size_t dlzka_textu = strlen(text);
    size_t i;
    char *encrypted_text = (char *)malloc(sizeof(char)*25);

    for(i=0;i<dlzka_textu;++i)
    {
        *(encrypted_text+i) = *(text+i);
    }

    for(;i<25;++i)
    {
        for(size_t j=0;j<25;++j)
        {
            if(strchr(encrypted_text,MAKRO[j]) == NULL)
            {
                *(encrypted_text+i) = MAKRO[j];
                break;
            }
        }
    }
    return encrypted_text;
}

char* playfair_decrypt(const char* key, const char* text)
{

}

