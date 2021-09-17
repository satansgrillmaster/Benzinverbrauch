#include <stdio.h>

const char km = 100;

// calculate gas con per km *petrol petrol in L, *km kilometers
float gas_consumption(float petrol, float drivenKm){
    float result = petrol / drivenKm * 100;
    return result;
}

int main() {

    // variable decloration
    float petrol = 50;
    float kilometerDriven = 100;
    char invoiceIndex = 0;
    float averageConsum = 0;
    char nextStep = 'n';

    do{


        printf("Gib die Menge des getankten Benzins ein:");
        scanf("%f",&petrol);
        getchar();

        printf("Gib die gefahrenen Kilometer ein:");
        scanf("%f",&kilometerDriven);
        getchar();

        printf("Verbrauch: %.2fL pro 100 Kilometer.\n", gas_consumption(petrol, kilometerDriven));
        averageConsum += gas_consumption(petrol, kilometerDriven);
        invoiceIndex++;
        printf("Durchschnittsverbrauch: %.2fL auf 100 km in %d Berechnungen.\n",
               averageConsum / invoiceIndex, invoiceIndex);
        printf("Weitere Berechnung durchfueren ? y/n\n\n");
        scanf("%c",&nextStep);
        getchar();

    } while (nextStep != 'n');

    return 0;
}
