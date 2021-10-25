#include "included/state.hpp"

namespace state{
    bool isMenu = true;
    bool isLoading = false;
    bool inLevel = false;

    float currLevel = 1;
    float currWorld = 1;

    int musicId = 0; //0 = overworld, 1 = underground, 2 = castle
}
