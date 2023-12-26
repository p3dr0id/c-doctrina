#define mapA printf("       |--------|\n");                   \
             printf("  var2 |  %3hd   | %p\n", var2, &var2);  \
             printf("       |--------|\n");                   \
             printf("       |        |\n");                   \
             printf("       |--------|\n");                   \
             printf("  var1 |  %3hd   | %p\n", var1, &var1);  \
             printf("       |--------|\n");                   \
             printf("       |        |\n")                 
              
#define mapB printf("       |--------|\n");                   \
             printf("  ptr  | %p | %p\n",     ptr, &ptr);    \
             printf("       |--------|\n");                   \
             printf("       |        |\n");                   \
             printf("       |--------|\n")  
