#include "jinishpotro.h"
int main () {
    // The following function will collect the currently saved scores
    leaderBoardInitialize(players);
    initwindow (xAxis, yAxis, "Super Ananta");
    settextstyle(3, HORIZ_DIR, 1);
    //theEpicFightEasier();
    int i;
    readimagefile("cover.jpg", 0, 0, 640, 480);
    for (i=0; i<=70000000; i++) {
        if (kbhit()) {
            clearBuffer();
            break;
        }
    }
    while(welcomeScreen()!= 0) ;
    return 0;
}
