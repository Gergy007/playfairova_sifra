//
// Created by jurko on 8/20/22.
//

#ifndef PLAYFAIROVA_SIFRA_PLAYFAIR_H
#define PLAYFAIROVA_SIFRA_PLAYFAIR_H

#define MAKRO "ABCDEFGHIJKLMNOPQRSTUVXYZ"

char arr[5][5];

char* playfair_encrypt(const char* key, const char* text);
char* playfair_decrypt(const char* key, const char* text);
void print_array(char *array);
void edit_array(char *array, const char* key);


#endif //PLAYFAIROVA_SIFRA_PLAYFAIR_H
