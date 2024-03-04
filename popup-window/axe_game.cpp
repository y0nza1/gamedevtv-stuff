#include <iostream> // angle brackets for standard libraries
#include "raylib.h" // quotes for external libraries, the 'h' 
                    // refers to a header file

int main()
{
    // window dimensions
    int width{750}, height{500}; 

    // takes 3 parameters: width and height (int) and title (string)
    InitWindow(width, height, "Jen's Window");

    // circle coordinates
    int circle_x{375}, circle_y{250};

    SetTargetFPS(60); // refresh frames at this rate; prevents zoomies

    // infinitely loops as long as the player hasn't closed the window
    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic begins

        DrawCircle(circle_x, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }

        if (IsKeyDown(KEY_W))
        {
            circle_y = circle_y - 10;
        }

        if (IsKeyDown(KEY_S))
        {
            circle_y = circle_y + 10;
        }
       
        // end game logic 

        EndDrawing();
    }
}


