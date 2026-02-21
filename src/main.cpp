#include <raylib-cpp.hpp>

Texture2D atlas;

int main() {
    
    // Initialization
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(screenWidth, screenHeight, "Raylib C++ Starter Kit Example");
    
    SetTargetFPS(60);

    atlas = LoadTexture("assets/asteroids-2x.png");
    Rectangle big_rock1 = Rectangle{0, 0, 160, 160}; //starts at the top left corner for 160px
    Rectangle big_rock2 = Rectangle{160,0,160,160}; 
    Rectangle big_rock3 = Rectangle{320, 0, 160, 160};

    Rectangle medium_rock1 = Rectangle{0, 160, 96,96};
    Rectangle medium_rock2 = Rectangle{96,160, 96,96};
    Rectangle medium_rock3 = Rectangle{192, 160, 96,96};

    Rectangle ufo = Rectangle{416, 160, 96,80};

    Rectangle small_rock1 = Rectangle{0, 256, 64,64};
    Rectangle small_rock2 = Rectangle{64, 256, 64,64};
    Rectangle small_rock3 = Rectangle{128, 256, 64,64};

    Rectangle ship_1 = Rectangle{192, 256, 96,64};
    Rectangle ship_2 = Rectangle{288, 256, 96,64};

    Rectangle bullet_small = Rectangle{448, 288, 32,32};
    Rectangle bullet_large = Rectangle{480, 288, 32,32};


    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Update

        // TODO: Update your variables here

        // Draw
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTextureRec(atlas,big_rock1, Vector2{0,0}, WHITE);
        DrawTextureRec(atlas, big_rock2, Vector2{0,160}, WHITE);
        DrawTextureRec(atlas, big_rock3, Vector2{160, 0}, WHITE);

        DrawTextureRec(atlas, medium_rock1, Vector2{320, 0}, WHITE);
        DrawTextureRec(atlas, medium_rock2, Vector2{416, 0}, WHITE);
        DrawTextureRec(atlas, medium_rock3, Vector2{512, 0}, RED);

        DrawTextureRec(atlas, ufo, Vector2{608, 0}, GREEN);

        DrawTextureRec(atlas, small_rock1, Vector2{0,320}, WHITE);
        DrawTextureRec(atlas, small_rock2, {64, 320}, WHITE);
        DrawTextureRec(atlas, small_rock3, {128,320}, WHITE);

        DrawTextureRec(atlas, ship_1, {192, 320}, WHITE);
        DrawTextureRec(atlas, ship_2, {288, 320}, WHITE);

        DrawTextureRec(atlas, bullet_small, {448,288}, WHITE);
        DrawTextureRec(atlas, bullet_large, {480,288}, WHITE);
        EndDrawing();
    }

    return 0;
}