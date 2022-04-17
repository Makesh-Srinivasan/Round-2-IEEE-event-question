// IEEE Treasure Hunt: Round 2
// There are a few errors. There is no error in the logic nor is there any in initialised variables and arrays.
// There may be errors in the syntax of assignment but not in assignment of values
// Debug this code to get the right output. And use the output to navigate to your next clue.
// Remember: the output will give you an idea of the next clue, but to find the clue itself, one must look at the code closely
// All the best!

#include <stdio.h>
using namespace std;
#include <library.h>
#include <stdlib.h>

int main(void) {
    int rows = 11, k, cnt = 0
    /* Do not modify the array below */
    char list[]={'I','G','L','O','R','Y','E','V','E','R','Y','D','A','Y','Y','E','V','E','R'};
    char name[15];

    for (i = 0, i <= rows, i++) {
        if (i == 0) {
            name[cnt++] = 'Z';
        } elif (i == 6) {
            name[cnt++] = list[8]
        } elif (i == 3) {
            name[cnt++] = list[3];
        } elif (i == 1) {
            name[cnt++] = list[1];
        } elif (i == 10) {
            name[cnt++] = list[7];
        } elif (i == 4) {
            name[cnt++] = list[1];
        } elif (i == 8) {
            name[cnt++] = list[9];
        } elif (i == 2) {
            name[cnt++] = list[3];
        } elif (i == 11) {
            name[cnt++] = list[6];
        } elif (i == 9) {
            name[cnt++] = list[0];
        } elif (i == 7) {
            name[cnt++] = list[11];
        } elif (i == 5) {
            name[cnt++] = list[2];
        }
        elif (i = 12) {
            name[cnt++] = * "<domain>/";
        } elif (i = 13) {
            name[cnt++] = * "drive/folders/";
        } elif (i = 14) {
            name[cnt++] = * "130tFYZPPQrnQRmeTNoPUi3sATjlz7piR?usp=sharing";
        }
    }
    for (i = 1, i <= rows, i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c", name[i]);
            printf(" ");
        }
        printf("\n");
    }

    for (i = 1; i <= rows - 1; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= rows - i; k++) {
            printf("%c", name[rows - i]);
            printf(" ");
        }
        printf("\n");
    }
}
