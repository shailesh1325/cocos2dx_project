    int no_oflevel = 30;
    int no_ofSelf = 10;

    levelScroll = ui::ScrollView::create();
    levelScroll->setInnerContainerSize(Size(440,170*no_ofSelf));
    levelScroll->setContentSize(Size(450+5,440));
 //   levelScroll->setScrollBarEnabled(true );
 //   levelScroll->setPosition(Vec2(sublevelpop->getContentSize().width-860,
                                  sublevelpop->getContentSize().height/11));
 
    sublevelpop->addChild(levelScroll);
    
    for(int i = 0; i < no_ofSelf ; i++)
    {
        lvl_Shelf[i] = Sprite::create("Self.png");
        lvl_Shelf[i]->setAnchorPoint(Vec2::ANCHOR_MIDDLE_BOTTOM);
        lvl_Shelf[i]->setPosition(Vec2(levelScroll->getContentSize().width / 2 + 5, 170 * i));
        levelScroll->addChild(lvl_Shelf[i]);

        int n1 = i*3 + 1;
        int n2 = i*3 + 2;
        int n3 = i*3 + 3;

        lvlButton[n1] =ui::Button::create("1_box.png",
                                          "1_box.png",
                                          "1_boxG.png");
        lvlButton[n1]->setPosition(Vec2(lvl_Shelf[i]->getPositionX()-140,
                                        lvl_Shelf[i]->getPositionY() + 70));
        levelScroll->addChild(lvlButton[n1],2);
        lvlButton[n1]->setTag(i*3 +1 );

        auto lvNo1 = Label::createWithTTF(StringUtils::format("%02d",n1), TTF_FONT_1, 23);
        lvNo1->setPosition(Vec2(83,22));
        lvNo1->enableOutline(GreenOutline,2);
        lvlButton[n1]->addChild(lvNo1);

        lvlButton[n2] =ui::Button::create(""1_box.png",
                                          "1_box.png",
                                          "1_boxG.png");
        lvlButton[n2]->setPosition(Vec2(lvl_Shelf[i]->getPositionX() ,
                                        lvl_Shelf[i]->getPositionY() + 70));
        levelScroll->addChild(lvlButton[n2],2);
        lvlButton[n2]->setTag(i*3 + 2 );

        auto lvNo2 = Label::createWithTTF(StringUtils::format("%02d",n2), TTF_FONT_1, 23);
        lvNo2->setPosition(Vec2(83,22));
        lvNo2->enableOutline(GreenOutline,2);
        lvlButton[n2]->addChild(lvNo2);

        lvlButton[n3] =ui::Button::create(""1_box.png",
                                          "1_box.png",
                                          "1_boxG.png");
        lvlButton[n3]->setPosition(Vec2(lvl_Shelf[i]->getPositionX()+140 ,
                                        lvl_Shelf[i]->getPositionY() + 70));
        levelScroll->addChild(lvlButton[n3],2);
        lvlButton[n3]->setTag(i*3+3);

        auto lvNo3 = Label::createWithTTF(StringUtils::format("%02d",n3), TTF_FONT_1, 23);
        lvNo3->setPosition(Vec2(83,22));
        lvNo3->enableOutline(GreenOutline,2);
        lvlButton[n3]->addChild(lvNo3);

        lvlButton[n1]->addTouchEventListener(CC_CALLBACK_2(LevelScreen::callSubLevel_event,this));
        lvlButton[n2]->addTouchEventListener(CC_CALLBACK_2(LevelScreen::callSubLevel_event,this));
        lvlButton[n3]->addTouchEventListener(CC_CALLBACK_2(LevelScreen::callSubLevel_event,this));


        lvlButton[n1]->setVisible(n1 < no_oflevel);
        lvlButton[n2]->setVisible(n2 < no_oflevel);
        lvlButton[n3]->setVisible(n3 <= no_oflevel);
    }
