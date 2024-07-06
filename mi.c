
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to check if a file exists
int file_exists(const char *filename){
return access(filename,F_OK) !=-1;
}

// Function to move a file
int move_file(const char *source,const char *destination){
  // Rename the file
  if(rename(source,destination)!=0){
     perror("Error moving file");
     return 1;
  }
 return 0;
}

int main(int argc,char *argv[]){
  // Check if the number of arguments is correct
  if(argc !=3){
    fprintf(stderr,"usage: %s <source_file> <destination_file>\n",argv[0]);
    return 1;
  }
 const char *source =argv[1];
 const char *destination =argv[2];
  if(!file_exists(source)){
    fprintf(stderr,"usage: %s does not exists.\n",source);
    return 1;
  }
  if(move_file(source,destination) !=0){
    return 1;
  }
printf("File moved successfully from %s to %s.\n",source,destination);
return 0;

}
