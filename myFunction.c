#include <stdio.h>
#include "myFunction.h"

int myStrlen(char ch[]){
    int i=0;
    while (ch[i]!='\0'){
        i++;
    }
    return i;
}
void myStrcpy(char ch1[], char ch2[]) {
    int i = 0;
    while (ch2[i] != '\0') {
        ch1[i] = ch2[i];
        i++;
    }
    ch1[i] = '\0';
}
void myStrupr(char ch[]) {
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
        i++;
    }
}
void myStrlwr(char ch[]) {
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
}
int myStrchr(char ch[], char x) {
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == x) {
            return 1;
        }
        i++;
    }
    return -1;
}
int myStrstr(char ch1[], char ch2[]) {
    int i, j, cpt;
    for (i = 0; ch1[i] != '\0'; i++) {
        if (ch1[i] == ch2[0]) {
            cpt = 1;
            for (j = 0; ch2[j] != '\0'; j++) {
                if (ch1[i + j] != ch2[j]) {
                    cpt = 0;
                    break;
                }
            }
            if (cpt) return 1;
        }
    }
    return -1;
}
int myStrcmp(char ch1[], char ch2[]) {
    int i = 0;

    while (ch1[i] != '\0' || ch2[i] != '\0') {
        if (ch1[i] != ch2[i]) {
            return -1;
        }
        i++;
    }

    return 1;
}

