#ifndef KZ_MAINSCENE_HPP
#define KZ_MAINSCENE_HPP

#include "Player.hpp"

namespace kz
{
    class MainScene : public rvl::RvlScene
    {
    public:
        MainScene();
        ~MainScene();

        void Start() override;
        void Update() override;
        void Render() override;

    private:
        rvl::Scope<Player> _player;
    };
}

#endif
