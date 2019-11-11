#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//Haga un programa que imprima los equivalentes 
//en millas del siguiente rango de kilómetros [1-10]
float equivalenteMillas(){
    for(int i = 1; i <=100; ++i){
        float resultado;
        resultado = (i*1.609344);
        printf("Este es el resultado %f del kilometro %i\n", resultado,i);
    }
}

//Haga un programa que imprima el equivalente de los 
//grados centígrados en Farenheit, debe recibir un valor de entrada.
float CenToFar(float cen){
    float far;
    far = ((cen*1.8)+32);
    printf("El valor en Farenheit es %f del grado Centigrado %f:\n", far, cen);
}

//Escriba una función recursiva 
//para calcular la cantidad de dígitos de un número.
int dig = 0;
int DiNum(double num){
    if (num < 10){
        dig ++;
        printf("El numero tiene %i digitos.",dig);
    } else{
        dig ++;
        DiNum(num/=10);
    }
}

//Escriba una función recursiva 
//para calcular la cantidad de dígitos pares de un número.
int sum = 1;
int DiNumPar(int num){
    int res, mod;
    res = num % 10;
    mod = res % 2;
    if (num / 10 > 0){
        if(mod == 0){
            ++ sum;
            DiNumPar(num/=10);
        } else{
            DiNumPar(num/=10);
        }
    } else{
        printf("La cantidad de digitos pares es: %i",sum);
    }
}
//Escriba la siguiente función:
//Int strcmp(char *s, char *p)
//La función compara el largo 
//del string s con el de p, y devuelve un valor:
int strcmp(char *s, char *p){
    int c1 = 0;
    int c2 = 0;

    while(s[c1] != '\0') {
        c1++;
    }

    while(p[c2] != '\0') {
        c2++;
    }

    if(c1 < c2){
        printf("-1");
        }
    else if(c1 > c2){
            printf("1");
        }
    else {
        printf("0");
    }
}/
//Escriba la siguiente función:
//Void strcat(char *dest, char *src)
//La función pega al final del string dest el valor del string src.
void _strcat(char *dest, char *src){
    char *aux = (char*) malloc(strlen(dest) + strlen(src) + 1);
    strcpy(aux, dest);
    strcpy(aux, src);
    
    printf("La nueva cadena es --> %c\n", aux);
}


int main(){
    //equivalenteMillas();
    //CenToFar(9.7);
    //DiNumPar(2541368);
    //strcmp("hola","adios");
    strcat("he","llo");

    return 0;

}