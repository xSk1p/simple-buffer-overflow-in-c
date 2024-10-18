#include <stdio.h>
#include <string.h>

void freeMoney(){
    printf("Congratulations! You've triggered the free money function! \n");
    printf("Your Balance is 1,000,000$ :D\n");
}

void print_balance(char *source_str){
   char buffer[128];
   strcpy(buffer,source_str);
   printf("Your Balance is 100$ :(\n");
}

int main(int argc, char *argv[]){
    if (argc < 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1; 
    }
    print_balance(argv[1]);
    return 0;
}
