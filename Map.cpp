//creating map in game using  cocos2dx library 
if(mapNo == 1 ) {
            Sprite *nmsrite = Sprite::create("Lvl_H1_01.png");
            Sprite *sdsrite = Sprite::create("Lvl_H1_11.png");

            houseLevel[0] = MenuItemSprite::create(nmsrite, sdsrite,
                                                   CC_CALLBACK_1(LevelScreen::call_level_Pop,
                                                                 this));
            houseLevel[0]->setPosition(Vec2(viewSize.width / 2 - 245, viewSize.height / 2 - 225));
            houseLevel[0]->setTag(1);

            houseLevel[1] = MenuItemSprite::create(Sprite::create("Lvl_H2_00.png"),
                                                   Sprite::create("Lvl_H2_11.png"),
                                                   CC_CALLBACK_1(LevelScreen::call_level_Pop, this));
            houseLevel[1]->setPosition(Vec2(viewSize.width / 2 - 140, viewSize.height / 2));
            houseLevel[1]->setTag(2);

            houseLevel[2] = MenuItemSprite::create(Sprite::create("Lvl_H3_00.png"),
                                                   Sprite::create("Lvl_H3_11.png"),
                                                   CC_CALLBACK_1(LevelScreen::call_level_Pop,
                                                                 this));
            houseLevel[2]->setPosition(Vec2(viewSize.width / 2 + 300, viewSize.height / 2 - 65));
            houseLevel[2]->setTag(3);

            houseLevel[3] = MenuItemSprite::create(Sprite::create("Lvl_H4_00.png"),
                                                   Sprite::create("Lvl_H4_11.png"),
                                                   CC_CALLBACK_1(LevelScreen::call_level_Pop,
                                                                 this));
            houseLevel[3]->setPosition(Vec2(viewSize.width / 2 + 80, viewSize.height / 2 + 50));
            houseLevel[3]->setVisible(true);
            houseLevel[3]->setTag(4);

            Menu *houseBtn = Menu::create(houseLevel[1], houseLevel[3], houseLevel[0],
                                          houseLevel[2], nullptr);
            houseBtn->setPosition(Vec2::ZERO);
            this->addChild(houseBtn, 2);
