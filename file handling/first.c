#include <stdio.h>


int main() {
    FILE *filePointer;
    char dataRead[50];

    filePointer = fopen("file.txt", "r");

    // putting data into the file
    // fputs("Dummy data", filePointer);

    // reading the data from the file
    fgets(dataRead, 50, filePointer);

    // printing the read data
    printf("%s\n", dataRead);
    
    // closing the file
    fclose(filePointer);

    printf("Data successfully written to file!");

    return 0;
}