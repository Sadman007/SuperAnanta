void duck (int *flag, character *hero) {
    clearBuffer();
    hero->top = 353;
    hero->bottom = 400;
    hero->left = 10;
    hero->right = 105;
    hero->state--;
    readimagefile("8.jpg", 10, 353, 105, 400);
    if (hero->state == -18) hero->state = 0;
}
void jump (int *flag, character *hero) {
    clearBuffer();
    hero->top = 305-(jumpingAra[hero->state]);
    hero->bottom = 400-(jumpingAra[hero->state]);
    hero->left = 10;
    hero->right = 57;
    readimagefile("3.jpg", 10, 305-jumpingAra[hero->state], 57, 400-(jumpingAra[hero->state]));
    hero->state = hero->state + 1;

    if (hero->state==20) hero->state = 0;
}

void printHero (int *flag, character *hero ) {

    if (hero->state==0) {
        hero->top = 305;
        hero->bottom = 400;
        hero->left = 10;
        hero->right = 57;

        if (legs%7==0) readimagefile("1.jpg", 10,305, 57, 400);
        else if (legs%7==1) readimagefile("2.jpg", 10,305, 57, 400);
        else if (legs%7==2) readimagefile("3.jpg", 10,305, 57, 400);
        else if (legs%7==3) readimagefile("4.jpg", 10,305, 57, 400);
        else if (legs%7==4) readimagefile("5.jpg", 10,305, 57, 400);
        else if (legs%7==5) readimagefile("6.jpg", 10,305, 57, 400);
        else readimagefile("7.jpg", 10,305, 57, 400);
        legs++;
    }
    else if (hero->state < 0) duck(flag, hero);
    else {
        jump(flag, hero);
    }
}
