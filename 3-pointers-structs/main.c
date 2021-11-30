#include <stdio.h>

void printContents();

typedef struct GpsCoordinate
{
    char *name;
    double lat;
    double lng;
} GpsCoordinate;

int main()
{
    GpsCoordinate gps = {"Den Dries", 5.2, 122.5};
    printContents(&gps);
}

void printContents(GpsCoordinate *gps) {
    printf("lattitude is %f, longitude is %f\n", (*gps).lat, (*gps).lng);
    printf("lattitude is %f, longitude is %f\n", gps->lat, gps->lng);
}
