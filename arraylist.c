#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *local = (ArrayList*) malloc(sizeof(ArrayList));
  if (local == NULL) return NULL;
  local->data = (void*) calloc(2, sizeof(void*));
  if (local->data == NULL) return NULL;
  local->capacity = 2;
  local->size = 0;
  return local;
}

void append(ArrayList * l, void * data){
  l->size++;
  if (l->size == l->capacity) {
    l->data = (void*) realloc(l->data, sizeof(void*));
  }
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
