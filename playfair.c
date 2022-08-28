//
// Created by jurko on 8/20/22.
//
#include <stdio.h>
#include <string.h>
#include "playfair.h"

char* playfair_encrypt(const char* key, const char* text)
{
    size_t dlzka_textu = strlen(text);
    size_t i;
    size_t j;
    char arr[5][5];
    edit_array((char *)arr,text);
    print_array((char*)arr);

    return "TREBA DOKONCIT!!!";
}

char* playfair_decrypt(const char* key, const char* text)
{

}

void print_array(char *array)
{
    char *i;
    int p = 0;
    for(i=array;i<(array+25);++i,++p)
    {
        (!(p%5))? printf("\n%c",*i): printf("\t%c",*i);
    }
}

void edit_array(char *array, const char* text)
{
    int dlzka_textu = strlen(text);
    char *i;
    int p = 0;
    for(i=array;i<(array+25);++i,++p)
    {
        if(p == dlzka_textu)
        {
            break;
        }
        *i = *(text+p);
    }

    for(;p<25;++p)
    {
        for(int j=0;j<25;++j)
        {
            if((strchr(array,MAKRO[j])) == NULL)
            {
                *(array+p) =MAKRO[j];
                break;
            }
        }
    }
}
