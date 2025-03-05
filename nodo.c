#include <stdio.h>
#include "nodo.h"

Nodo* crear_Nodo(){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo -> sig=NULL;
    nuevo -> dato=0;
    return nuevo;
}

bool borrar_nodo(Nodo *n){
    if(n -> sig==NULL){
        free(n);
        return true;
    }
    return false;
}

Nodo* asignar_dato(Nodo *n,Dato d){
    if(n!=NULL){
        n -> dato=d;
    }
    return n;
}

Dato obtener_dato(Nodo *n){
    if(n==NULL){
        printf("No hay dato\n");
        return -1;
    }
    return n -> dato;
}

Nodo* asignar_referencia(Nodo *n, Nodo *e){
    if(n!=NULL){
        n -> sig=e;
    }
    return n;
}

Nodo* obtener_referencia(Nodo *c){
    if(c!=NULL){
        return c -> sig;
    }
    return NULL;
}