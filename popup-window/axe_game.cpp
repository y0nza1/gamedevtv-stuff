#include <iostream> // angle brackets for standard libraries
#include "raylib.h" // quotes for external libraries, the 'h' 
                    // refers to a header file

int main()
{
    // window dimensions
    int width{800}, height{500}; 

    // takes 3 parameters: width and height (int) and title (string)
    InitWindow(width, height, "Jen's Window");

    // circle coordinates
    int circle_x{200};
    int circle_y{200};
    
    // axe coordinates
    int axe_x{400};
    int axe_y{0};
    int direction{10};

    SetTargetFPS(60); // refresh frames at this rate; prevents zoomies

    // infinitely loops as long as the player hasn't closed the window
    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic begins
        DrawCircle(circle_x, circle_y, 25, GREEN);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move the axe
        axe_y += direction;

        if (axe_y > 500 || axe_y < 0)
        {
            direction = -direction;
        }

        // circle movements controls
        if (IsKeyDown(KEY_D) && circle_x < 750)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        if (IsKeyDown(KEY_W) && circle_y > 0)
        {
            circle_y -= 10;
        }

        if (IsKeyDown(KEY_S) && circle_y < 500)
        {
            circle_y += 10;
        }
       
        // end game logic 

        EndDrawing();
    }
}


