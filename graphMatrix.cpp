/******************************************
Template created by Kazumi Slott
CS311
Graph of social network implmemented with a matrix

Your name:
Your programmer number:
Outputs:
Any difficulties?:
********************************************/


#include <iostream>
using namespace std;

const int NUM = 8;
const int MAX = NUM;

void printArray(char array[])
{
  //This would come in handy
  int numElements = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < numElements; i++)
  {
    if (array[i] >= 'A' && array[i] <= 'H')
      cout << array[i] << " ";
  }
  cout << endl;
}

int main()
{
  //This program should still work even if we change NUM to 100 and change the matrix.

  //       row column  
  // m[i][j]
  int m[NUM][NUM] = {
                      {0, 1, 1, 0, 1, 0, 0, 0}, // A
                      {1, 0, 1, 0, 0, 1, 1, 0}, // B
                      {1, 1, 0, 0, 1, 1, 0, 0}, // C
                      {0, 0, 0, 0, 1, 0, 0, 0}, // D
                      {1, 0, 1, 1, 0, 1, 0, 1}, // E
                      {0, 1, 1, 0, 1, 0, 0, 0}, // F
                      {0, 1, 0, 0, 0, 0, 0, 0}, // G
                      {0, 0, 0, 0, 1, 0, 0, 0}, // H
                    };  //Mij where i is row and j is column
  //A(0), B(1), ....

  //check if A and F are friends
  (m[0][5] == 1) ? cout << "Yes\n" : cout << "No\n";


  //Show all friends of A
  char friends[MAX]; //store all A's direct friends
  int index;
  for (int col = 0; col < NUM; col++)
  {
    if (m[0][col] == 1)
    {
      friends[index++] = col + 'A';
    }
  }
  printArray(friends);
  //Aswer: B, C, E

  //refer A A's friends' direct friends 
  //char refer[MAX]; //store referred friends for A
  //I made one more function to keep the loop small  

  //Answer: D, F, G, H  (don't repeat the same person. Order doesn't matter)


  //Test your code above with a new matrix - the picture is in the document "Lec supplement - matrix for 11/15(Mon)" under "Assignments"
  int m2[NUM][NUM] = {{0, 1, 0, 1, 1, 0, 0, 0},{1, 0, 1, 0, 0, 0, 0, 0},{0, 1, 0, 0, 1, 1, 0, 0},{1, 0, 0, 0, 1, 0, 0, 0}, 
		      {1, 0, 1, 1, 0, 0, 1, 0},{0, 0, 1, 0, 0, 0, 0, 1},{0, 0, 0, 0, 1, 0, 0, 1},{0, 0, 0, 0, 0, 1, 1, 0}};

  //A's friends -> B, D, and E

  //friends referred to A -> C and G



  return 0;
}


