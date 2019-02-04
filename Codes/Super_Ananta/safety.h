// the following is for debugging
void potato() {
    printf("a");
}
int gameOver (int score) {
    readimagefile("gameover.jpg", 0, 0, 640, 480);
    settextstyle(3, HORIZ_DIR, 1);
    outtextxy(200, 220, "Enter Your Name:           ");
    char name[100]="Enter Your Name: ", c;
    int cnt = strlen(name);
    while (1) {
        if (kbhit()) {
            c = getch();
            if (c==13) {
                insert(players, &name[strlen("Enter Your Name: ")], score);
                return 1;
            }
            else if (c==8 && cnt>=18) {
                cnt--;
                name[cnt]=0;
                readimagefile("gameover.jpg", 0, 0, 640, 480);
                outtextxy(200,220, name);
            }
            else {
                name[cnt] = c;
                name[++cnt] = 0;
                outtextxy(200,220, name);
            }
        }
    }

}

int safetyCheck (obstacle ara[4], character hero, int cnt) {
    int i;
    for (i=0; i<cnt; i++) {
        if (ara[i].type == 2 || ara[i].type ==3 || ara[i].type == 5) {
            if (hero.right >= ara[i].left && hero.right <= ara[i].right) {
                if (hero.bottom >= ara[i].top && hero.bottom <= ara[i].bottom) return ara[i].type;
            }
            else if (hero.left >= ara[i].left && hero.left <= ara[i].right) {
                if (hero.bottom >= ara[i].top && hero.bottom <= ara[i].bottom) return ara[i].type;
            }
        }
        else if (ara[i].type == 4) {
            if (ara[i].left >= 10 && ara[i].left <=57) {
                if (hero.state >=0) return ara[i].type;
            }
            else if (ara[i].right >= 10 && ara[i].right <=57) {
                if (hero.state >=0) return ara[i].type;
            }
        }
        else if (ara[i].type == 1) {
            if (ara[i].left <= hero.right) return 1;
        }
    }
    return 0;
}
