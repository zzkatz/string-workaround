#include <stdio.h>
#include<stddef.h>
#include <stdlib.h>
#include <string.h>

#include <stdbool.h>
#include <stdint.h>

typedef struct {
  char *s;
  size_t str_size;
}

String;
String new_str(const char * initial_str) {
    String  new_str;
    if(
    initial_str==NULL) {
        new_str.s = NULL;
        new_str.str_size = 0;
        return new_str;
    }
    new_str.str_size = strlen(initial_str);
    new_str.s = (char *)
    malloc(new_str.str_size + 1);
    if(new_str.s!=NULL) {
        strcpy(new_str.s, initial_str);
    }
    
    return new_str;
  }

void free_string(String * str) {
    if(str==nullptr) return ;
    free(str->s);
    str->s=nullptr; 
    str->str_size=0;
    }
