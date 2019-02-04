int levels () {
    int x, y;
    printf("1");
    while (1) {
        x=mousex();
        y=mousey();

        if (x>=46&&x<=125&&y>=60&&y<=80) {
            readimagefile("L1.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return gameLoop(1);
            }
        }
        else if(x>=46&&x<=131&&y>=88&&y<=108) {
            readimagefile("L2.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return gameLoop(2);
            }
        }
        else if(x>=46&&x<=132&&y>=118&&y<=135) {
            readimagefile("L3.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return gameLoop(3);
            }
        }
        else if(x>=46&&x<=133&&y>=145&&y<=163) {
            readimagefile("L4.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return gameLoop(4);
            }
        }
        else if(x>=46&&x<=130&&y>=174&&y<=192) {
            readimagefile("L5.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return gameLoop(5);
            }
        }
        else {
            readimagefile("L.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
    }
}

int endScreen () {
    int x, y;
    while (1) {
        x=mousex();
        y=mousey();
        if (x>=200&&x<=250&&y>=390&&y<=420) {
            readimagefile("E1.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                delay(1000);
                clearmouseclick(WM_LBUTTONDOWN);
                return 0;
            }
        }
        else if(x>=415&&x<=460&&y>=390&&y<=420) {
            readimagefile("E2.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return 1;
            }
        }
        else {
            readimagefile("E.jpg", 0, 0, 640, 480);
            clearmouseclick(WM_LBUTTONDOWN);
        }
    }
    return 1;
}

void howToPlay () {

}

void credits() {
    while (!kbhit()) readimagefile("credits.jpg", 0, 0, 640, 480);
    getch();
}

int welcomeScreen () {
    int x, y;
    while (1) {
        x=mousex();
        y=mousey();
        if (x>=24&&x<=140&&y>=52&&y<=75) {
            readimagefile("wc1.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                current_score=0;
                return levels();
            }
        }
        else if(x>=19&&x<=171&&y>=98&&y<=123) {
            readimagefile("wc2.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                howToPlay();
            }
        }
        else if(x>=22&&x<=181&&y>=145&&y<=165) {
            readimagefile("wc3.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                printLeaderBoard();
            }
        }
        else if(x>=21&&x<=109&&y>=193&&y<=212) {
            readimagefile("wc4.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                credits();
            }
        }
        else if(x>=23&&x<=75&&y>=237&&y<=260) {
            readimagefile("wc5.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
                return  endScreen();
            }
        }
        else {
            readimagefile("wcmain.jpg", 0, 0, 640, 480);
            if (ismouseclick(WM_LBUTTONDOWN)) {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
    }
    return 1;
}
