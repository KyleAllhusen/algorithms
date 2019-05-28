#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
    if(x < 0){
        return x * -1;
    }
    else {
        return x;
    }
}

int pow(int base, int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= base;
    }
    return result;
}

int log(int base, int num) {
    int i;
    for(i = 1; base < num; i++) {
        base *= base;
    }
    return i;
}

int chartoint(char c) {
    int x = (int)c;
    return x - 48;
}

char inttochar(int x) {
    char c = (char)(x + 48);
    return c;
}

char chr(int) {
    return 'a';
}

int ord(char){
    return 0;
}

int max(int, int) {
    return 0;
}

int max(int, int, int) {
    return 0;
}

int min(int, int) {
    return 0;
}

int min(int, int, int) {
    return 0;
}

int round(double, char) {
    return 0;
}

bool prime(int){
    return true;
}

long fibonacci(int) {
    return 0;
}

long factorial(int) {
    return 0;
}

