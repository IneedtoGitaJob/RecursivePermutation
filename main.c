#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void RecursivePermute(char str[], int k);
int main(){
    int k = 0;
//arbitrary value
char str[4] = "KFKR";
RecursivePermute(str, k);
return 1;
}

void ExchangeCharacters(char str[], int i, int j) {
    char temp = str[i];
     str[i] = str[j];
     str[j] = temp; }



//creates recursively every permutation of chars
     void RecursivePermute(char str[], int k) {
         int j;

      if (k == strlen(str)) printf("%s\n", str);
       else {
            for (j=k; j<strlen(str); j++) {

                 ExchangeCharacters(str, k, j);

      RecursivePermute(str, k+1);

       ExchangeCharacters(str, j, k);

       }
       }
                                        }
