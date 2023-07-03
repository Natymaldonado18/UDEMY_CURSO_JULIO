// Práctica 13
// Realizado por: Nathalia Maldonado
// promedio de temporadas de un hotel usando matricws
#include <stdio.h>

int main ()
{
    int informacion[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_en_temprada_baja = 0;
    int suma_en_temprada_media = 0;
    int suma_en_temprada_alta = 0;

    for (int i=0; i<3; i++){
        for (int j=1; j<4; j++){
            if (j == 1){
                suma_en_temprada_baja=suma_en_temprada_baja + informacion [i][j];
            }
            if (j == 2){
                suma_en_temprada_media=suma_en_temprada_media + informacion [i][j];
            }
            if (j == 3){
                suma_en_temprada_alta=suma_en_temprada_alta + informacion [i][j];
            }
        }
    }

    float promedio_temporada_baja = suma_en_temprada_baja/3;
    float promedio_temporada_media = suma_en_temprada_media/3;
    float promedio_temporada_alta = suma_en_temprada_alta/3;

    printf("Promedio temporada baja: %.2f\n", promedio_temporada_baja);
    printf("Promedio temporada media: %.2f\n", promedio_temporada_media);
    printf("Promedio temporada alta: %.2f\n", promedio_temporada_alta);
}