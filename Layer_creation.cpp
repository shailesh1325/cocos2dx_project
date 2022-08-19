  Layer_creation::init(){
    Layer::init();
    viewSize = Director::getInstance()->getWinSize();

    Layer *avtarLayer = Layer::create();
    this->addChild(avtarLayer,10);

    {
        Sprite *normal = Sprite::create("Ms_Bg.png");
        Sprite *sel = Sprite::create("Ms_Bg.png");
        normal->setColor(Color3B::BLACK);

        auto imgBack = MenuItemSprite::create(normal,sel,CC_CALLBACK_1(Layer_creation::call_zero,this));
        imgBack->setPosition(viewSize/2);
        imgBack->setColor(Color3B::BLACK);
        imgBack->setOpacity(150);
        imgBack->setTag(-1);

        auto menu = Menu::create(imgBack,NULL);
        menu->setPosition(Vec2::ZERO);
        avtarLayer->addChild(menu);
    }

    Sprite *Popup = Sprite::create("pA_Popup.png");
    Popup->setPosition(viewSize/2);
    avtarLayer->addChild(Popup);
    
    
    
    Popup->setScale(0);
    avtarLayer->setScale(0);
    
  }
