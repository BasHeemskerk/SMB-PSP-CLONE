#include "included/audio.hpp"

namespace audio{
    namespace music{
        OSL_SOUND* songs[3];

        void loadMusic(){
            if (state::musicId == 0){
                songs[0] = oslLoadSoundFileWAV("romfs/audio/music/game/song1-overworld.wav", OSL_FMT_NONE);
            }
            else if (state::musicId == 1){
                songs[1] = oslLoadSoundFileWAV("romfs/audio/music/game/song2-cave.wav", OSL_FMT_NONE);
            }
            else if (state::musicId == 2){
                songs[2] = oslLoadSoundFileWAV("romfs/audio/music/game/song3-castle.wav", OSL_FMT_NONE);
            }
        }
        void playMusic(){
            if (state::musicId == 0){
                oslPlaySound(songs[0], 0);

                oslSetSoundLoop(songs[0], 1);
                if (oslGetSoundChannel(songs[0]) == -1){
                    oslPlaySound(songs[0], 0);
                }
            }
            else if (state::musicId == 1){
                oslPlaySound(songs[1], 0);

                oslSetSoundLoop(songs[1], 1);
                if (oslGetSoundChannel(songs[1]) == -1){
                    oslPlaySound(songs[1], 0);
                }
            }
            else if (state::musicId == 2){
                oslPlaySound(songs[2], 0);

                oslSetSoundLoop(songs[2], 1);
                if (oslGetSoundChannel(songs[2]) == -1){
                    oslPlaySound(songs[2], 0);
                }
            }
        }
        void unloadMusic(){
            oslDeleteSound(songs[0]);
            oslDeleteSound(songs[1]);
            oslDeleteSound(songs[2]);
        }
    }

    namespace sfx{

    }
}