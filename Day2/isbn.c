#include <stdio.h>

int main(void)
{
    int gs1, group_id, publisher_code, item_num, id_code;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code ,&item_num ,&id_code);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", id_code);

    return 0;
}