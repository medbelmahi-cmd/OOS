#include <stdio.h>
#include <iostream>
belmahi
typedef struct {
  int r; /** The list of students **/
  int g;    /** The logical size of the list **/
  int k;    /** The physical size of the list **/
} e;



typedef struct {
  int *data; /** The list of students **/
  int cd;    /** The logical size of the list **/
  int cdd;    /** The physical size of the list **/
} database_t;


void f(int* p){
    std::cout << *p <<std::endl;
}
int main() {
  int x = 5;
  int *a = &x;
  int y = 6;
  int *b = a + 1;
  std::cout<< x << " adresse: "<< a << std::endl;

  std::cout<< y << " or "<< *b << " adresse: " << b << std::endl;
  int s  =5;

  f(&s);

  database_t *k;
  k->cdd = 5;
  std::cout<< k->cdd << std::endl;


  
}