#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow(int base, int num) {
  int ret = 1;
  for (int i = 0; i < num; ++i) {
    ret *= base;
  }
  return ret;
}

int log(int base, int num) {
  int count = 0;
  for (num; num > 1; num /= base)
    ++count;
  return count;
}

int chartoint(char c) {
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x) {
  return (char)(x + '0');
}

char chr(int x) {
  return (char)x;
}

int ord(char c) {
  return (int)c;
}

int max(int x, int y) {
  return (x > y) ? x : y;
}

int max(int x, int y, int z) {
  return max(x, max(y, z));
}

int max(int arr[], int n) {
  int ans = arr[0];
  for(int i = 1; i < n; i++) {
    if(arr[i] > ans) {
      ans = arr[i];
    }
  }
  return ans;    
}

int min(int x, int y) {
  return (x < y) ? x : y;
}

int min(int x, int y, int z) {
  return min(x, min(y, z));
}

int min(int arr[], int n) {
  int ans = arr[0];
  for(int i = 1; i < n; i++) {
    if(arr[i] < ans) {
      ans = arr[i];
    }
  }
  return ans;
}

int round(double x, char c) {
  if (x > 0) {
    return (c == 'd') ? (int)x : (int)x + 1;
  } else {
    return (c == 'd') ? (int)x - 1 : (int)x;
  }
}

bool all(bool arr[], int n) {
  for(int i = 0; i < n; i++){
    if (!arr[i]){
      return false;
    }
  }
  return true;
}

bool any(bool arr[], int n) {
    for(int i = 0; i < n; i++){
    if (arr[i]){
      return true;
    }
  }
  return false;
}

int frequency(int arr[], int n, int x) {
  int count = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] == x) {
      count++;
    }
  }
  return count;
}

long sum(int arr[], int n) {
  long sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int index(char str[], char substr[]) {
  
}

bool is_sorted(int arr[], int n) {
  int i = 0;
  if(arr[i] <= arr[i + 1]) {
    for(i; i < n; i++) {
      if(!(arr[i] > arr[i + 1])){
        return false;
      }
    } 
  }
  else if(arr[i] >= arr[i + 1]) {
    for(i; i < n; i++) {
      if(!(arr[i] < arr[i + 1])) {
        return false;
      }
    }
  }
  return true;
}
