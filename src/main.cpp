#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "test_scanner.h"

std::string get_filename(int argc, char** argv);

int main(int argc, char** argv) 
{
    std::string filename = get_filename(argc, argv);
    
    test_scanner(filename);

    return 0;
}

std::string get_filename(int argc, char** argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    std::string filename(argv[1]);
    return filename;
}