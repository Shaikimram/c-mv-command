C project to move files in a Linux environment, mimicking the mv command:

This project implements a simplified version of the Linux mv command using C programming language. The mv command is traditionally used to move files or directories from one location to another.

Features:
Command-line Arguments: Accepts command-line arguments for specifying the source and destination files.
File Existence Check: Verifies if the source file exists before attempting to move it.
Error Handling: Provides appropriate error messages if the source file doesn't exist or if the move operation fails.

Implementation Details
The program consists of:

file_exists: Function to check if a file exists using access function.
move_file: Function to move a file using rename function.
Main Function: Validates command-line arguments, checks file existence, and performs the file move operation.
Usage
To use the program, compile the mi.c file and execute it with the following command-line format:

bash
Copy code
./mi <source_file> <destination_file>
Replace <source_file> with the path/name of the file to move and <destination_file> with the path/name of the destination.

Building
To compile the program, use the following command:

gcc mi.c -o mi
Example
Rename a file named file.txt to newfile.txt:

Copy code
./mi file.txt newfile.txt

Example
move file from one location to another

Copy code
// go to the path where the executable file is located
cd /home/ubuntu/Desktop
./mi /home/ubuntu/Desktop/file_name new_location path


Requirements
This program is designed to work in a Linux environment.
Pre-built Linux applications and functions such as system() and popen() were not used as per project requirements.
