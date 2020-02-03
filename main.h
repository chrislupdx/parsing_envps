#pragma once
/*
     Lab 3: Created ordered list of environment variables
*/

// System Libraries
#include <iostream>
#include <cstring>

// Defined Constants
#define max_variables  1000                  // Maximum number of environment variables to store
#define max_length     1024                  // Maximum length of an environment variable string

// Function Declarations
int main       (int, char **, char **);                     // Main function
void insert    (char [][max_length], char *, int, int &);   // Insertion function
void remove    (char [][max_length], int, int &);           // Remove function
void print     (char [][max_length], int);                  // Print function

