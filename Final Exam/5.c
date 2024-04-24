#include <stdio.h>
#include <string.h>

struct Laptop {
    char company[50];
    char processor[50];
    int price;
};

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);
        printf("Company: ");
        scanf("%s", laptops[i].company);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%d", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        printf("Company: %s\n", laptops[i].company);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %d\n", laptops[i].price);
        printf("\n");
    }

    return 0;
}
