#ifndef STRUCTS_H
#define STRUCTS_H

struct item {char name[256]; int price;};
struct item* new_item(char arr[], int i);
void change_name(struct item* ip, char arr[]);
void change_price(struct item* ip,int i);
void print_item(struct item f);

#endif
