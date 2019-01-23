#include <stdio.h>
#include <glib.h>

int main() {
    GList* list = NULL;
    list = g_list_append(list, "Hello, World!");
    printf("The first item is '%s'\n", g_list_first(list)->data);
    return 0;
}