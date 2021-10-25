#include "global.hpp"

namespace image2{
    namespace menuimage{
        extern Image *title;
        extern Image *copyright;

        extern Image *play;

        extern Image *mario;
        extern Image *world;
        extern Image *time;
        extern Image *top;

        void loadTitle();
        void unloadTitle();

        void loadPlayGame();
        void unloadPlayGame();

        void loadStats();
        void unloadStats();
    }

    namespace numbers{
        extern Image *numbers[10];

        void loadNumbers();
        void unloadNumbers();
    }
}