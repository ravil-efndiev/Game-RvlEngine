#include "MainScene.hpp"

namespace kz
{
    using namespace rvl;

    MainScene::MainScene() {}
    MainScene::~MainScene() {}

    void MainScene::Start()
    {
        _camera = Camera::Create();
        _player = CreateScope<Player>();
    }

    void MainScene::Update()
    {
        _player->Update();
    }

    void MainScene::Render()
    {
        _player->Render();
    }
}
