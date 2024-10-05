#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Prints all permutations of a given string by swapping characters at each index.
 *        The permutations are printed in lexicographical order.
 * @param str The string to be permuted.
 * @param index The index of the character to be swapped (starts at 0).
 */
void printPermutations(string &str, int index)
{
    // base case
    if (index >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        // recursion
        swap(str[index], str[j]);
        printPermutations(str, index + 1);
        // backtracking
        swap(str[index], str[j]);
    }
}

bool isSafe(int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &visited)
{
    return (newx >= 0 && newx < row && newy >= 0 && newy < col && maze[newx][newy] == 1 && !visited[newx][newy]);
}

void printAllPath(int maze[][4], int row, int col, int srcx, int srcy, int destx, int desty, string &output, vector<vector<bool>> &visited){

    // base case
    if (srcx == destx && srcy == desty)
    {
        cout << output << endl;
        return;
    }

    // move right
    // possiblities: out of bounds, path closed, not to visit already visited placed
    // a function to that will handle all three above possiblities
    // move right
    if (isSafe(srcx, srcy + 1, maze, row, col, visited))
    {
        visited[srcx][srcy + 1] = true;
        output.push_back('R');
        printAllPath(maze, row, col, srcx, srcy + 1, destx, desty, output, visited);
        output.pop_back(); // backtrack
        visited[srcx][srcy + 1] = false;
    }

    // move down
    if (isSafe(srcx + 1, srcy, maze, row, col, visited))
    {
        visited[srcx + 1][srcy] = true;
        output.push_back('D');
        printAllPath(maze, row, col, srcx + 1, srcy, destx, desty, output, visited);
        output.pop_back(); // backtrack
        visited[srcx + 1][srcy] = false;
    }

    // move left
    if (isSafe(srcx, srcy - 1, maze, row, col, visited))
    {
        visited[srcx][srcy - 1] = true;
        output.push_back('L');
        printAllPath(maze, row, col, srcx, srcy - 1, destx, desty, output, visited);
        output.pop_back(); // backtrack
        visited[srcx][srcy - 1] = false;
    }

    // move up
    if (isSafe(srcx - 1, srcy, maze, row, col, visited))
    {
        visited[srcx - 1][srcy] = true;
        output.push_back('U');
        printAllPath(maze, row, col, srcx - 1, srcy, destx, desty, output, visited);
        output.pop_back(); // backtrack
        visited[srcx - 1][srcy] = false;
    }
}

int main()
{

    // string str = "abc";
    // int index = 0;
    // printPermutations(str, index);

    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {1, 1, 1, 1}};
    
    int row = 4, col = 4;
    int srcx = 0, srcy = 0;
    int destx = 3, desty = 3;
    string output = "";

    // create a 2d vector of visited array
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[srcx][srcy] == 0)
    {
        cout << "Rat can't move" << endl;
    }
    else
    {
        visited[srcx][srcy] = true;
        printAllPath(maze, row, col, srcx, srcy, destx, desty, output, visited);
    }


    return 0;
}