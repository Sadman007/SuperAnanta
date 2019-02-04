void writeTheLeaderBoard (individual ara[]) {
    printf("a");
    FILE *fp;
    int i;
    fp = fopen("leaderboard.txt", "w");
    for (i=0; i<10; i++) {
        fprintf(fp, "%d ", ara[i].score);
        fprintf(fp, "%s\n", ara[i].name);
    }
    fclose(fp);
}

void leaderBoardInitialize (individual ara[]) {
    int i;
    freopen("leaderboard.txt", "r", stdin);
    for (i=0; i<10; i++) {
        scanf("%d", &ara[i].score);
        scanf("%s", ara[i].name);
        if (i==0) strcpy(highscore, "10");
    }
}

void insert (individual ara[], char name[], int score) {
    int i, j;
    printf("a");
    for (i=0; i<10; i++) {
        if (score > ara[i].score) {
            for (j=9; j>i; j--) {
                ara[j] = ara[j-1];
            }
            strcpy(ara[i].name, name);
            ara[i].score = score;
            break;
        }
    }
    writeTheLeaderBoard(players);
    leaderBoardInitialize(players);
}

void printLeaderBoard () {
    readimagefile("story8.jpg", 0, 0, 640, 480);
    int midx;
    int midy;
    midx = (xAxis/2) - 40;
    midy = (yAxis/2) - 200;

    setcolor(BLACK);
    setbkcolor(WHITE);
    outtextxy(midx-60, midy, "NAME               SCORE");

    char str[100];
    int i;

    freopen("leaderboard.txt", "r", stdin);
    for (i=0; i<10; i++) {
        scanf("%s", str);
        outtextxy(midx+40, midy+i*20+20, str);
        scanf("%s", str);

        outtextxy(midx-60, midy+i*20+20, str);
    }
    outtextxy(midx-70, midy+10*20+40, "Press any key to go back.");
    while (!kbhit());
    getch();
}
