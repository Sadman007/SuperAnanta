#define dela 200
int ananta = 3;
int dipjol = 20;
char score[100];
int countdown = 40;
void generateRandomString (char ara[10]) {
    int i;
    int len = rand()%3 + 7;
    //time(&seconds);
    ara[len] = 0;
    char ara2[] = "abcdefghijkLmnopqrstuvwxyzABCDEFGHiJKLMNOPQRSTUVWXYZ";
    srand(time(NULL));
    for (i=0; i<len; i++) {
        int random = rand()%52;
        ara[i] = ara2[random];
    }
}
void dipjolShes() {
    settextstyle(3, HORIZ_DIR, 1);
    readimagefile("ananta7.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta8.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta9.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta10.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(2*dela);
}
void anantaHits () {
    settextstyle(3, HORIZ_DIR, 1);
    readimagefile("ananta1.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta2.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta3.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta4.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("ananta5.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    dipjol--;
    strcpy(score, "Ananta: ");
    sprintf(&score[strlen(score)], "%d %s: %d", ananta, "Dipjol", dipjol);
    readimagefile("ananta6.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    dipjolShes();
    if (dipjol != 0) {
        readimagefile("ananta11.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
        readimagefile("ananta12.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
        readimagefile("ananta13.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
    }
}

void anantaShes() {
    settextstyle(3, HORIZ_DIR, 1);
    readimagefile("dipjol7.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol8.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol9.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(3*dela);
}

void dipjolHits() {
    settextstyle(3, HORIZ_DIR, 1);
    readimagefile("dipjol1.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol2.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol3.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    ananta--;
    strcpy(score, "Ananta: ");
    sprintf(&score[strlen(score)], "%d %s: %d", ananta, "Dipjol", dipjol);
    readimagefile("dipjol4.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol5.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    readimagefile("dipjol6.jpg", 0,0,640, 480);
    outtextxy(475, 20, score);
    delay(dela);
    anantaShes();
    if (ananta != 0) {
        readimagefile("dipjol10.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
        readimagefile("dipjol11.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
        readimagefile("dipjol12.jpg", 0,0,640, 480);
        outtextxy(475, 20, score);
        delay(dela);
    }
}

void generalscreen() {

}

int theEpicFightEasier() {
    clearBuffer();
    readimagefile("story18.jpg", 0, 0, 640, 480);
    delay(2000);
    clearBuffer();
    char str[8], inputStr[8];
    int cnt = 0;
    readimagefile("back.jpg", 0,0,640, 480);
    while (!kbhit());
    clearBuffer();
    setbkcolor(LIGHTBLUE);
    while (ananta!=0 && dipjol!=0) {
        printf("%d %d\n", ananta, dipjol);
        srand(time(NULL));
        strcpy(str, strings[rand()%1108]);
        setcolor(BLACK);
        int flag = 0;
        int time = 0;
        countdown = levelThreeCountdown;
        while (1) {
            time++;
            if (time <countdown) readimagefile("back5.jpg", 0, 0, 640, 480);
            else if (time <2*countdown) readimagefile("back4.jpg", 0, 0, 640, 480);
            else if (time < 3*countdown) readimagefile("back3.jpg", 0, 0, 640, 480);
            else if (time <4*countdown) readimagefile("back2.jpg", 0, 0, 640, 480);
            else if (time < 5*countdown) readimagefile("back1.jpg", 0, 0, 640, 480);
            else {
                setcolor(GREEN);
                dipjolHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            setcolor(BLACK);
            settextstyle(4, HORIZ_DIR, 2);
            outtextxy(300, 200, str);
            strcpy(score, "Ananta: ");
            sprintf(&score[strlen(score)], "%d %s: %d", ananta, "Dipjol", dipjol);
            settextstyle(3, HORIZ_DIR, 1);
            outtextxy(475, 20, score);
            if (kbhit()) {
                inputStr[cnt] = getch();
                cnt++;
                inputStr[cnt]=0;
                flag=1;
            }
            char c = str[cnt-1];

            if (flag && tolower(inputStr[cnt-1]) != tolower(str[cnt-1])) {
                setcolor(RED);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
                delay(300);
                setcolor(BLACK);
                dipjolHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            else if (flag && cnt == 7) {
                inputStr[cnt-1]=c;
                setcolor(GREEN);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
                delay(300);
                setcolor(BLACK);
                anantaHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            else if (cnt!=0) {
                setcolor(GREEN);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
            }
        }
    }

    if (dipjol == 0) {
        delay(3000);
        return 1;
        readimagefile("winner.jpg", 0, 0, 640, 480);
    }
    else {
        delay(3000);
        return 1;
        readimagefile("gameover.jpg", 0, 0, 640, 480);
    }

}


int theEpicFightHarder() {
    clearBuffer();
    char str[10], inputStr[10];
    ananta = 10;
    dipjol = 100;
    readimagefile("back.jpg", 0,0,640, 480);
    while (!kbhit());
    clearBuffer();
    setbkcolor(LIGHTBLUE);
    countdown = levelFourCountdown;
    while (ananta!=0 && dipjol!=0) {
        generateRandomString(str);
        int len = strlen(str);
        int cnt = 0;
        setcolor(BLACK);
        int flag = 0;
        int time = 0;
        while (1) {
            time++;
            if (time <countdown) readimagefile("back5.jpg", 0, 0, 640, 480);
            else if (time <2*countdown) readimagefile("back4.jpg", 0, 0, 640, 480);
            else if (time < 3*countdown) readimagefile("back3.jpg", 0, 0, 640, 480);
            else if (time <4*countdown) readimagefile("back2.jpg", 0, 0, 640, 480);
            else if (time < 5*countdown) readimagefile("back1.jpg", 0, 0, 640, 480);
            else {
                setcolor(GREEN);
                dipjolHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            setcolor(BLACK);
            settextstyle(4, HORIZ_DIR, 2);
            outtextxy(300, 200, str);
            strcpy(score, "Ananta: ");
            sprintf(&score[strlen(score)], "%d %s: %d", ananta, "Dipjol", dipjol);
            settextstyle(3, HORIZ_DIR, 1);
            outtextxy(475, 20, score);
            if (kbhit()) {
                inputStr[cnt] = getch();
                cnt++;
                inputStr[cnt]=0;
                flag=1;
            }
            char c = str[cnt-1];

            if (flag && tolower(inputStr[cnt-1]) != tolower(str[cnt-1])) {
                setcolor(RED);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
                delay(300);
                setcolor(GREEN);
                dipjolHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            else if (flag && cnt == len) {
                inputStr[cnt-1]=c;
                setcolor(GREEN);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
                delay(300);
                setcolor(BLACK);
                anantaHits();
                cnt = 0;
                clearBuffer();
                break;
            }
            else if (cnt!=0) {
                inputStr[cnt-1]=c;
                setcolor(GREEN);
                settextstyle(4, HORIZ_DIR, 2);
                outtextxy(300, 220, inputStr);
                setcolor(BLACK);
            }
        }
    }
    //printf("%d %d\n", dipjol, ananta);

    if (dipjol == 0) {
        delay(3000);
        return 1;
    }
    else {
        delay(3000);
        return 1;
    }
    while (1);
}

void mainScreen(double *current_score) {
    readimagefile("background.jpg", 0, 0, 640, 480);
    setcolor(BLACK);
   // line (0, 401, xAxis, 401);
    *current_score+= .25;
    setbkcolor(COLOR(128, 255, 255));
    char str[100] = "High Score: 931  Current Score: ";
    sprintf(&str[strlen(str)], "%d", (int)*current_score);
    setcolor(BLACK);
    outtextxy(360, 20, str);
}
int arrowSequence (int *cnt, int direction, int input) {
    if (direction == input) (*cnt)--;
    else *cnt = 2;
}
int douradouri (int numberOfDifferentObs, int del) {
    int currentNumberOfObstacles = 0;
    srand(time(NULL));
    char input;
    int i=0;
    obstacle ara[4];
    int timeCountTillLasstObstacle = 20;
    int flag = 0;
    printf("%d\n", numberOfDifferentObs);
    int arrowCount = 2, flagArrow = 0, direction = 0;
    while (1) {
        mainScreen(&current_score);
        int randomNumber = rand()%20;
        if (timeCountTillLasstObstacle >=40 && (randomNumber%4==0||randomNumber%4==1|| randomNumber%4==2)) {
            ara[currentNumberOfObstacles].type = rand()%(numberOfDifferentObs) + (5-numberOfDifferentObs);

            if (ara[currentNumberOfObstacles].type == 0) ara[currentNumberOfObstacles].type = 2;
            printf("%d\n", ara[currentNumberOfObstacles].type);
            ara[currentNumberOfObstacles].currentLeftMostPosition = 640;
            ara[currentNumberOfObstacles].counter = 0;
            ara[currentNumberOfObstacles].flag = 0;
            currentNumberOfObstacles++;
            timeCountTillLasstObstacle = 0;
        }
        printHero(&flag, &hero);
        currentNumberOfObstacles = printObstacle(ara, currentNumberOfObstacles);
        if (ara[0].type == 1 && flagArrow == 0) {
            direction = rand()%2;
            flagArrow = 1;
        }
        if (ara[0].type == 1) {
            if (direction == 1) outtextxy(200, 220, "PRESS LEFT");
            else outtextxy(200, 220, "PRESS RIGHT");
        }
        int input = kbinput(&hero);
        if (input == 0)  {
             int x, y;
             while (1) {
                x=mousex();
                y=mousey();
                if (x>=15&&x<=116&&y>=94&&y<=116) {
                    readimagefile("wait1.jpg", 0, 0, 640, 480);
                    if (ismouseclick(WM_LBUTTONDOWN)) {
                        clearmouseclick(WM_LBUTTONDOWN);
                        break;
                    }
                }
                else if(x>=15&&x<=128&&y>=136&&y<=158) {
                    readimagefile("wait2.jpg", 0, 0, 640, 480);
                    if (ismouseclick(WM_LBUTTONDOWN)) {
                        clearmouseclick(WM_LBUTTONDOWN);
                        return gameOver((int)current_score);
                    }
                }
                else {
                    readimagefile("wait.jpg", 0, 0, 640, 480);
                    if (ismouseclick(WM_LBUTTONDOWN)) {
                        clearmouseclick(WM_LBUTTONDOWN);
                    }
                }
            }
        }
        else if (input == 50||input == 150) {
            arrowSequence (&arrowCount, direction, input/100);
            flagArrow = 0;
        }
        //else if (input == 1000) flagArrow = 0;
        if (arrowCount == 0 && ara[0].type == 1) {
            ara[0].type = 5;
            arrowCount = 2;
            flagArrow = 0;
        }


        if (safetyCheck(ara, hero, currentNumberOfObstacles)) {
            if (safetyCheck(ara, hero, currentNumberOfObstacles)==1) outtextxy(200, 240, "Oops!! You are caught by Shakib Khan!");
            else if (safetyCheck(ara, hero, currentNumberOfObstacles)==2) outtextxy(200, 240, "Oops!! You have been run over by a car!");
            else if (safetyCheck(ara, hero, currentNumberOfObstacles)==3) outtextxy(200, 240, "Oops!! You have been run over by a car!");
            else if (safetyCheck(ara, hero, currentNumberOfObstacles)==3) outtextxy(200, 240, "Oops!! You have been abducted by a spaceship!");
            outtextxy(200, 260, "Press Any Key To Continue.");
            clearBuffer();
            delay(2000);
            while (!kbhit);
            clearBuffer();
            return gameOver((int)current_score);
        }
        delay(del);
        timeCountTillLasstObstacle++;
    }
}

int levelOne () {
    clearBuffer();
    char c=0, str[100] = "story1.jpg";
    int i;
    while (1) {
        for (i = 1; i<=9; i++) {
            str[5] = i+'0';
            while (1) {
                readimagefile(str, 0, 0, 640, 480);
                if(kbhit()) {
                    c = getch();
                    break;
                }
            }
            if (c == 27) break;
        }
        if (c!=27) {
            while (1) {
                readimagefile("story10.jpg", 0, 0, 640, 480);
                if(kbhit()) {
                    c = getch();
                    break;
                }
            }
            if (c == 27) break;
             while (1) {
                readimagefile("story11.jpg" , 0, 0, 640, 480);
                if(kbhit()) {
                    c = getch();
                    break;
                }
            }
            if (c == 27) break;
        }
        break;
    }
    hero.state = 0;
    return douradouri(levelOneObstacles, levelOneDelay);
}

int levelTwo() {
    clearBuffer();
    char c, str[100] = "story13.jpg";
    int i;
    for (i=3; i<=6; i++) {
    str[6] = i+'0';
        while (1) {
            readimagefile(str, 0, 0, 640, 480);
            if(kbhit()) {
                c = getch();
                break;
            }
        }
        if (c == 27) break;
    }
    hero.state = 0;
    return douradouri(levelTwoObstacles, levelTwoDelay);
}
int gameLoop (int level) {
    if (level == 1) {
        return levelOne();
    }
    if (level == 2) {
        return levelTwo();
    }
    while(level==1 || level==2) {

    }

    if (level==3) {
        return theEpicFightEasier();
    }

    else if (level==4) {
        return theEpicFightHarder();
    }
    else if (level==5) {

    }
}

