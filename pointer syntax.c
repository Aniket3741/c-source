# include <stdio.h>
int main() {
int number = 4;
//call by reference
square(&number);
printf("n is : %d\n", number);
return 0;
}
void square(int* n) {
*n = *n * *n;
printf("square is : %d\n", *n);
}
