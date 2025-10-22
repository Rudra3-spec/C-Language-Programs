#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int map1[256] = {0};
    int map2[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        if (map1[c1] == 0 && map2[c2] == 0) {
            map1[c1] = c2;
            map2[c2] = c1;
        } 
        else if (map1[c1] != c2) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[] = "egg";
    char t[] = "add";

    if (isIsomorphic(s, t))
        printf("Strings are isomorphic\n");
    else
        printf("Strings are not isomorphic\n");

    return 0;
}
