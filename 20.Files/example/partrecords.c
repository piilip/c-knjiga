

// opens a binary file containing part structures, reads the structures into an
// array, sets the on_hand member of each structure to 0, adn then writes the
// structures back to the file. note that the program opnes the file in "rb+"
// mode, allowing both reading and writing.

#include <stdio.h>
#include <stdlib.h>
#define NAME_LEN 25
#define MAX_PARTS 100
struct part {
   int number;
   char name[NAME_LEN + 1];
   int on_hand;
} inventory[MAX_PARTS];
int num_parts;

int main(int argc, char const *argv[]) {
   FILE *fp;
   int i;
   if ((fp = fopen("inventory.dat", "rb+")) == NULL) {
      fprintf(stderr, "Can't open inventory file\n");
      exit(EXIT_FAILURE);
   }
   num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);

   for (int i = 0; i < num_parts; i++) {
      inventory[i].on_hand = 0;
   }
   rewind(fp); // after the fread call the file position is at the end of the
   
               // file. if we were to call frwrite without calling rewind first,
               // frwrite would add new data to the end of the file instead of
               // overwriting the old data

   fwrite(inventory, sizeof(struct part), num_parts, fp);
   fclose(fp);

   return 0;
}
