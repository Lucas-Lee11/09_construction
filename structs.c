#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

struct item* new_item(char arr[], int i){
    struct item* ip;
    ip = malloc(sizeof(struct item));

    strncpy(ip->name, arr, sizeof(ip->name));
    ip->price = i;
    return ip;
}

void change_name(struct item* ip, char arr[]){
    strncpy(ip->name, arr, sizeof(ip->name));
}

void change_price(struct item* ip, int i){
    ip->price = i;
}

void print_item(struct item f){
    printf("Item {\n\tname: \"%s\"\n\tprice: $%d\n}\n", f.name, f.price);
}
