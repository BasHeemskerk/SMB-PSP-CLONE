#include "included/tile.hpp"

namespace tile{
    namespace menutile{
        Image *groundtile;
        Image *planttiles[12];

        void loadTiles(){
            groundtile = loadPng("romfs/tiles/ground/tile_0.png");

            planttiles[0] = loadPng("romfs/tiles/plant/tile_0.png");
            planttiles[1] = loadPng("romfs/tiles/plant/tile_1.png");
            planttiles[2] = loadPng("romfs/tiles/plant/tile_2.png");
            planttiles[3] = loadPng("romfs/tiles/plant/tile_3.png");
            planttiles[4] = loadPng("romfs/tiles/plant/tile_4.png");
            planttiles[5] = loadPng("romfs/tiles/plant/tile_5.png");
            planttiles[6] = loadPng("romfs/tiles/plant/tile_6.png");
            planttiles[7] = loadPng("romfs/tiles/plant/tile_7.png");
            planttiles[8] = loadPng("romfs/tiles/plant/tile_8.png");

            planttiles[9] = loadPng("romfs/tiles/plant/tile_9.png");
            planttiles[10] = loadPng("romfs/tiles/plant/tile_10.png");
            planttiles[11] = loadPng("romfs/tiles/plant/tile_11.png");

        }
        void unloadTiles(){
            freeImage(groundtile);

            freeImage(planttiles[0]);
            freeImage(planttiles[1]);
            freeImage(planttiles[2]);
            freeImage(planttiles[3]);
            freeImage(planttiles[4]);
            freeImage(planttiles[5]);
            freeImage(planttiles[6]);
            freeImage(planttiles[7]);
            freeImage(planttiles[8]);
            freeImage(planttiles[9]);
            freeImage(planttiles[10]);
            freeImage(planttiles[11]);
        }
    }
}