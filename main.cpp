/*
   Lab 3: Ordered list of environment variables
 */
#include "main.h"
using namespace std;

int main(int argc, char **argv, char **envp)
{
  // Local variables
  char      list[max_variables][max_length];        // Ordered list of variables
  int       used = 0;                               // Number of variables stored in the list
  int       position = 0;                           // Loop index

  // Insertion Loop
  for (int idx = 0; envp[idx] != nullptr; idx++) {  // Outer loop iterates envp array
    if (used >= (max_variables- 1)) continue;    // Limit what we try to store in the list
    cout << "[Storing item  " << idx << " - " << envp[idx] << "]" << endl;       // Progress report
    for(position = 0; position < used; position++) {       // Scan loop: where should we insert?
      if (strcmp(envp[idx],list[position]) < 0) break;  // Yes - stop the loop
    }
    insert(list,envp[idx],position,used);        // Insert new value at position 'position'
  }


  // Display the list
  cout << "\n\nOrdered List Of Environment Variables: " << endl;
  print(list,used);

  // Remove an element and display
  cout << "Enter valid element number to remove: ";
  // cin >> position;
  // remove(list,position,used);
  // print(list,used);

  return 0;
}

// Remove element as position pos
void remove(char list[][max_length], int pos, int & size) 
{
}

// Print the ordered list
void print(char list[][max_length], int size)
{
  for (int idx = 0; idx < size; idx++)  //go through rows
  {
    cout << "Item " << idx << " - " << list[idx] << endl;
  }
}

// Ordered Insertion
void insert(char list[][max_length], char * new_val, int pos, int & size)
{
  if (size < (max_length))
  {
    for (int idx = size; idx > pos; idx--) //scoot stuff out away from zero 
    {
      strcpy(list[idx],list[idx - 1]); //shift everything by one (dstination, source)
    }
  
  strcpy(list[pos], new_val);

    size++; //double check where the increment needs to be positioned
  }
}
