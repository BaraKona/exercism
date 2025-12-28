#include "raindrops.h"
#include <string>

namespace raindrops {

    std::string convert(int number) {
        std::string sound{""};

        if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0){
            return std::to_string(number);
        };

        if (number % 3 == 0){
            sound = sound + "Pling";
        };
        if (number % 5 == 0){
            sound = sound + "Plang";
        };
        if (number % 7 == 0){
            sound = sound + "Plong";
        };

        return sound;
    }

}  // namespace raindrops
