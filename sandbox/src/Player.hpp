#ifndef KZ_PLAYER_HPP
#define KZ_PLAYER_HPP

#include <RVL.hpp>

namespace kz
{
    using namespace rvl;
    class Player
    {

    public:
        Player();
        ~Player();

        void Update();
        void Render();

    private:
        Ref<Sprite> _sprite;
    };
}

#endif
