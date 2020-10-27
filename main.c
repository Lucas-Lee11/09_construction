#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

int main(int argc, char const *argv[]) {
    srand(time(NULL));

    struct item* item = new_item("Gucci Banana", rand());
    print_item(*item);

    change_name(item, "Holy Hand Grenade");
    change_price(item, rand());
    print_item(*item);

    return 0;
}
