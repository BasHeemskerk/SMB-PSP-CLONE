#include "included/menu.hpp"

namespace title{

    float cursorPos;

    float yPos[4];
    float xPos[15];

    float score;
    float coins;
    float world;
    float level;

    void loadMenuAssets(){
        tile::menutile::loadTiles();

        image2::menuimage::loadTitle();
        image2::menuimage::loadPlayGame();

        image2::menuimage::loadStats();

        image2::numbers::loadNumbers();
    }

    void setPos(){
        yPos[0] = 240;
        yPos[1] = 208;
        yPos[2] = 176;
        yPos[3] = 144;

        xPos[0] = 0;
        xPos[1] = 32;
        xPos[2] = 64;
        xPos[3] = 96;
        xPos[4] = 128;
        xPos[5] = 160;
        xPos[6] = 192;
        xPos[7] = 224;
        xPos[8] = 256;
        xPos[9] = 288;
        xPos[10] = 320;
        xPos[11] = 352;
        xPos[12] = 384;
        xPos[13] = 416;
        xPos[14] = 448;
    }

    void paintMenu(){

        //ground
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[0], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[1], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[2], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[3], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[4], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[5], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[6], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[7], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[8], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[9], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[10], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[11], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[12], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[13], yPos[0], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::groundtile, xPos[14], yPos[0], 0);


        //plants
        //1
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[0], xPos[1], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[1], xPos[2], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[2], xPos[3], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[3], xPos[4], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[4], xPos[5], yPos[1], 0);

        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[5], xPos[2], yPos[2], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[6], xPos[3], yPos[2], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[7], xPos[4], yPos[2], 0);

        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[8], xPos[3], yPos[3], 0);

        //2
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[9], xPos[9], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[10], xPos[10], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[10], xPos[11], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[10], xPos[12], yPos[1], 0);
        drawSpriteAlpha(0, 0, 32, 32, tile::menutile::planttiles[11], xPos[13], yPos[1], 0);

        //menu title
        drawSpriteAlpha(0, 0, 280, 140, image2::menuimage::title, 100, 20, 0);
        drawSpriteAlpha(0, 0, 240, 20, image2::menuimage::copyright, 140, 160, 0);

        //menu options (1 atm)
        drawSpriteAlpha(0, 0, 240, 20, image2::menuimage::play, 115, 200, 0);

        //game stats
        drawSpriteAlpha(0, 0, 240, 20, image2::menuimage::mario, 30, 10, 0);
        drawSpriteAlpha(0, 0, 240, 20, image2::menuimage::world, 230, 10, 0);
        drawSpriteAlpha(0, 0, 240, 20, image2::menuimage::time, 340, 10, 0);

        //numbers
        

    }

    void startMenu(){

    }
    void startGame(){

    }
}