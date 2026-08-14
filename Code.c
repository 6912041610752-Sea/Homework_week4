#include <stdio.h>
int main() {
    char name[31];
    int age;
    float height;
    char drink ;
    float price;
    char size;

    scanf("%s %d %f", name, &age, &height);
    getchar();
    scanf("%c %f %c", &drink, &price, &size);
    printf("%s is %d years old and is %.1f cm tall.\n", name, age, height);
    printf("Favourite drink %c costs %.2f baht and has size %c.\n", drink, price,size);

    return 0;
}