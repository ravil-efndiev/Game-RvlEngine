#include "Player.hpp"

namespace kz
{
    Player::Player()
    {
        _sprite = Sprite::Create(0.f, 0.f);
        _sprite->LoadTexture("assets/textures/player.png");
    }

    Player::~Player() {}

    void Player::Update()
    {
        if (Input::IsKeyPressedOnce(Keys::RVL_KEY_SPACE))
        {
            _sprite->Position = {Input::GetCursorPosition().x, Input::GetCursorPosition().y};
            RVL_LOG(Input::GetCursorPosition().x << " " << Input::GetCursorPosition().y);
        }
    }

    void Player::Render()
    {
        _sprite->Draw();
    }
}
