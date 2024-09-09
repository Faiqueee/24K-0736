#include <stdio.h>

int main() {
    int forwardtrip; // distance forward is 1207 km
    int backwardtrip; // distance for backward is 1207 km
    scanf("%d", &forwardtrip);
    scanf("%d", &backwardtrip);
    int totaldist = forwardtrip*1207+ backwardtrip*1207;
    printf("total distance covered is: %d\n", totaldist);
    int caravg;
    scanf("%u", &caravg);
    int fuelfw = 118; // forward fuel cost is 118 rs per liter
    int fuelbw = 123; // backward fuel cost is 123 rs per liter
    float totalfuel = totaldist / caravg;
    printf("total fuel consumed : %.2f\n", totalfuel);
    float fuel_fw =0.5*totalfuel*118;
    float fuel_bw =0.5*totalfuel*123;
    float costoffuel = fuel_fw  + fuel_bw ;
    printf("Cost of fuel both ways : %.2f\n", costoffuel);
    return 0;
}