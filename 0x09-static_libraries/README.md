# this is hard i think
    gcc -c *.c: This command compiles all .c files in the current directory into object files (.o files). The -c flag tells GCC to compile the source files into object files without linking them. Each .c file is compiled into a corresponding .o file.

    ar rc liball.a *.o: This command creates a static library named liball.a by archiving the object files (.o) generated from the previous step. The ar command is used to create and manage archives, and the options r and c stand for "replace" and "create" respectively. The liball.a is the archive file name, and *.o indicates all object files in the current directory.

    echo y | rm -I *.o: This command prompts the user to confirm the deletion of each object file (*.o) by displaying 'y'. The -I option for rm prompts for confirmation before removing each file. The echo y part automatically provides the 'y' response to the prompt for each file.