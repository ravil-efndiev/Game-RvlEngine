#ifndef KZ_GAME_HPP
#define KZ_GAME_HPP

#include "MainScene.hpp"

namespace kz
{
    class Game : public rvl::RvlApp
    {
    public:
        Game();
        ~Game();

    private:
        void Start() override;
        void Update() override;
        void Render() override;

    };
}

#endif
