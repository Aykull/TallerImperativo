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
}/*
//Escriba la siguiente función:
//Void strcat(char *dest, char *src)
//La función pega al final del string dest el valor del string src.
void _strcat(char *dest, char *src){
    char *aux = (char*) malloc(strlen(dest) + strlen(src) + 1);
    strcpy(aux, dest);
    strcpy(aux, src);
    
    printf("La nueva cadena es --> %c\n", aux);
}
/*

//Ejercicio 2.7 Concatenar str
void _strcat(char *dest, char *src){

    char *auxres = (char*) malloc(strlen(dest) + strlen(src) + 1);
    strcpy(auxres,dest);
    strcpy(auxres, src);

    printf("La nueva cadena es --> %c\n", auxres);
}


//Ejercicio 2.9 Frecuencia de las palabras
struct detail
{
    char word[20];
    int freq;
};

int update(struct detail [], const char [], int);

int update(struct detail s[], const char unit[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (strcmp(s[i].word, unit) == 0)
        {
            s[i].freq++;

            return count;
        }
    }
    strcpy(s[count].word, unit);
    s[count].freq++;

    return (count + 1);
}

int frecuencia()
{
    struct detail s[10];
    char string[100], unit[20], c;
    int i = 0, freq = 0, j = 0, count = 0, num = 0;

    for (i = 0; i < 10; i++)
    {
        s[i].freq = 0;
    }
    printf("Enter string: ");
    i = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        string[i++] = c;

    } while (c != '\n');
    string[i - 1] = '\0';
    printf("The string entered is: %s\n", string);
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && string[i] != ' ' && isalnum(string[i]))
        {
            unit[j++] = string[i++];
        }
        if (j != 0)
        {
            unit[j] = '\0';
            count = update(s, unit, count);
            j = 0;
        }
    }

    printf("*****************\nWord\tFrequency\n*****************\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\t   %d\n", s[i].word, s[i].freq);
        if (s[i].freq > 1)
        {
            num++;
        }
    }
    printf("The number of repeated words are %d.\n", num);

    return 0;
}
*/

int main(){
    //equivalenteMillas();
    //CenToFar(9.7);
    //DiNumPar(2541368);
    //strcmp("hola","adios");
    strcat("he","llo");

    return 0;

}