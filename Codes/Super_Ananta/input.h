int kbinput (character  *hero) {
    char input;
    if (kbhit())  {
        input = getch();
        if (input == 27) {
            return 0;
        }
        if ((input == KEY_UP || input == 32 ) && (hero->state==1 || hero->state==0)) hero->state = 1;
        else if (input == KEY_DOWN && (hero->state==1 || hero->state==0)) hero->state = -1;
        else if (input == KEY_RIGHT)    return 50;
        else if (input==KEY_LEFT)  return 150;
        return 1;
    }
    return 1000;
}

