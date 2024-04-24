#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
    }

    for (int i = 0; i < n; i++) {
        char fruit[50];
        char color[50];

        printf("Enter fruit name: ");
        scanf("%s", fruit);

        printf("Enter color: ");
        scanf("%s", color);

        fprintf(file, "%s - %s\n", fruit, color);
    }

    fclose(file);

    printf("Data written to data.txt successfully!\n");

}
