#include "included/image2.hpp"

namespace image2{
    namespace menuimage{
        Image *title;
        Image *copyright;

        Image *play;

        Image *mario;
        Image *world;
        Image *time;
        Image *top;

        void loadTitle(){
            title = loadPng("romfs/UI/menu/logo.png");
            copyright = loadPng("romfs/UI/menu/copyright.png");
        }
        void unloadTitle(){
            freeImage(title);
            freeImage(copyright);
        }

        void loadPlayGame(){
            play = loadPng("romfs/UI/menu/1-player-game.png");
        }
        void unloadPlayGame(){
            freeImage(play);
        }

        void loadStats(){
            mario = loadPng("romfs/UI/global/MARIO.png");
            world = loadPng("romfs/UI/global/WORLD.png");
            time = loadPng("romfs/UI/global/TIME.png");
            top = loadPng("romfs/UI/menu/TOP.png");
        }
        void unloadStats(){
            freeImage(mario);
            freeImage(world);
            freeImage(time);
            freeImage(top);
        }
    }

    namespace numbers{
        Image *numbers[10];

        void loadNumbers(){
            numbers[0] = loadPng("romfs/UI/global/numbers/0.png");
            numbers[1] = loadPng("romfs/UI/global/numbers/1.png");
            numbers[2] = loadPng("romfs/UI/global/numbers/2.png");
            numbers[3] = loadPng("romfs/UI/global/numbers/3.png");
            numbers[4] = loadPng("romfs/UI/global/numbers/4.png");
            numbers[5] = loadPng("romfs/UI/global/numbers/5.png");
            numbers[6] = loadPng("romfs/UI/global/numbers/6.png");
            numbers[7] = loadPng("romfs/UI/global/numbers/7.png");
            numbers[8] = loadPng("romfs/UI/global/numbers/8.png");
            numbers[9] = loadPng("romfs/UI/global/numbers/9.png");
        }
        void unloadNumbers(){
            freeImage(numbers[0]);
            freeImage(numbers[1]);
            freeImage(numbers[2]);
            freeImage(numbers[3]);
            freeImage(numbers[4]);
            freeImage(numbers[5]);
            freeImage(numbers[6]);
            freeImage(numbers[7]);
            freeImage(numbers[8]);
            freeImage(numbers[9]);
        }
    }
}