#include "raylib.h"

const float startWindowWidth = 1280;
const float startWindowHeight = 1280;
const char* startWindowTitle = "GAME TITLE";

int main() {

	InitWindow(startWindowWidth, startWindowHeight, startWindowTitle);
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}