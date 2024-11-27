#include <stdio.h>
#include <string.h>

typedef struct Car {
    char make[30];
    char model[30];
    int year;
    float price;
    int mileage;
} Car;

void addCars(int n, Car cars[]) {
    for (int i = 0; i < n; i++) {
        getchar();    
        printf("Enter car no %d make: ", i + 1);
        scanf("%[^\n]s", cars[i].make);
        getchar();
        printf("Enter car model: ");
        scanf("%[^\n]s", cars[i].model);
        printf("Enter car year: ");
        scanf("%d", &cars[i].year);
        printf("Enter car price: ");
        scanf("%f", &cars[i].price);
        printf("Enter car mileage: ");
        scanf("%d", &cars[i].mileage);
        return;
    }
}

void displayCars(int n, Car cars[]) {
    for (int i = 0; i < n; i++) {
        printf("Car make: %s\n", cars[i].make);
        printf("Car model: %s\n", cars[i].model);
        printf("Car year: %d\n", cars[i].year);
        printf("Car price: %.2f\n", cars[i].price);
        printf("Car mileage: %d\n", cars[i].mileage);
    }
}

void searchCar(char query[], int n, Car cars[]) {
    getchar();
    scanf("%[^\n]s", query);
    for (int i = 0; i < n; i++) {
        if (strcmp(query, cars[i].make) == 0 || strcmp(query, cars[i].model) == 0) {
            printf("Car found:\n");
            printf("Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %d\n", 
                   cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
            return;
        }
    }
    printf("Car not found.\n");
}

int main() {
    int n;
    printf("Number of cars to be entered: ");
    scanf("%d", &n);
    Car cars[n];

    cars[0].year = -1;

    for (int i = 0; i < 9999; i++) {
        printf("1. Add cars\n2. Display cars\n3. Search for a car by make or model\n4. Exit\nEnter option: ");
        int x;
        scanf("%d", &x);

        if (x == 1) {
            addCars(n, cars);
        } else if (x == 2) {
            if (cars[0].year == -1) {
                printf("No cars available\n");
            } else {
                displayCars(n, cars);
            }
        } else if (x == 3) {
            if (cars[0].year == -1) {
                printf("No cars available\n");
            } else {
                char query[30];
                searchCar(query, n, cars);
            }
        } else if (x == 4) {
            printf("\nYou exited\n");
            break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}
