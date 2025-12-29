#include <stdio.h>

int maze(int sr, int sc, int er, int ec)
{
    // 1. Base Case: Reached the destination
    if (sr == er && sc == ec)
        return 1;

    // 2. Edge Case: If in the last row, we can only go Right
    if (sr == er)
    {
        return maze(sr, sc + 1, er, ec);
    }

    // 3. Edge Case: If in the last column, we can only go Down
    if (sc == ec)
    {
        return maze(sr + 1, sc, er, ec);
    }

    // 4. Normal Case: Can go both Right and Down
    int rightWays = maze(sr, sc + 1, er, ec);
    int downWays = maze(sr + 1, sc, er, ec);
    
    return rightWays + downWays;
}

int main()
{
    int n;
    printf("Enter numbers of rows of the maze: ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns of the maze: ");
    scanf("%d", &m);
    
    int noOfWays = maze(1, 1, n, m);
    printf("Number of ways: %d", noOfWays);
    
    return 0;
}