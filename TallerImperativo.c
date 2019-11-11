#include <stdio.h>



float equivalenteMillas(){
    for(int i = 1; i <=100; ++i){
        float resultado;
        resultado = (i*1.609344);
        printf("Este es el resultado %f del kilometro %i\n", resultado,i);
    }
}

float CenToFar(float cen){
    float far;
    far = ((cen*1.8)+32);
    printf("El valor en Farenheit es %f del grado Centigrado %f:\n", far, cen);
}
//hacerla recursiva
int DigiNum(double num){
    int dig = 1;
    while (num >= 10){
        num /= 10;
        ++ dig;
    }
    printf("El numero tiene %i digitos.",dig);  
}


int main(){
    //equivalenteMillas();
    //CenToFar(9.7);
    DigiNum(25413134454);

    return 0;

}