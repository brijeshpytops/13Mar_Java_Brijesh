
#include <stdio.h>

int main() {
    char name[] = {
        'b', 'r', 'i', 'j', 'e', 's', 'h'
    };
    // char name[] = "brijesh";
    for(int start = 0; start<=6; start++){
        // printf("%d - %c\n", start, name[start]);
        printf("%c",name[start]);
    }
    
    

    return 0;
}


# edit string

#include <stdio.h>

int main() {
    char name[] = {
        'b', 'r', 'i', 'j', 'e', 's', 'h'
    };
    name[0] = 'z';
    for(int start = 0; start<=6; start++){
        // printf("%d - %c\n", start, name[start]);
        printf("%c",name[start]);
    }
    return 0;
}

// find string length

#include <stdio.h>
#include <string.h>

void main() {
    char greeting[] = "Hello brijesh";
    
    int total_len = strlen(greeting);
    
    printf("%d", total_len);
   
}

// copy one string into another string

#include <stdio.h>
#include <string.h>

void main() {
    char myname[] = "brijesh";
    char yourname[7];
    strcpy(yourname, myname);
    
    printf("Your name is : %s", yourname);
   
}

// concat your string

#include <stdio.h>
#include <string.h>

void main() {
    char fname[20] = "brijesh";
    char lname[] = " gondaliya";
    strcat(fname, lname);
    
    printf("Your name is : %s", fname);
   
}

// compare string

#include <stdio.h>
#include <string.h>

void main() {
    char fname[] = "brijesh";
    char nfname[] = "Brijesh";
    
    printf("both string is same(1)/not same(0) %d", strcmp(fname, nfname) == 0);
   
}


#include <stdio.h>
#include <string.h>

void main() {
    char fname[] = "brijesh";
    char nfname[] = "Brijesh";
    strcmp(fname, nfname);
    
    printf("both string is same(1)/not same(0) %d", strcasecmp(fname, nfname) == 0);
   
}

// find first occurrence 

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char *ptr = strchr(str, 'o');
    
    if (ptr != NULL) {
        printf("Found at index: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}

// find sustring first occurrence
#include <stdio.h>
#include <string.h>

int main() {
    char haystack[] = "Hello, world!";
    char needle[] = "world";
    char *ptr = strstr(haystack, needle);
    
    if (ptr != NULL) {
        printf("Found at index: %ld\n", ptr - haystack);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}

// toknize your string

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! Ho$w are you?";
    char *token = strtok(str, " ,!$");
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,!$");
    }
    
    return 0;
}
