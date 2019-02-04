int obstacle1(obstacle ara[4], int i) {
    int leftMostPosition = ara[i].currentLeftMostPosition;
    ara[i].top = 300;
    ara[i].bottom = 400;
    ara[i].right = leftMostPosition+50;
    ara[i].left = leftMostPosition;
    if (ara[i].counter % 4 == 0) readimagefile("boss1.jpg", leftMostPosition, 300, leftMostPosition+50, 400);
    else if (ara[i].counter % 4 == 1) readimagefile("boss2.jpg", leftMostPosition, 300, leftMostPosition+50, 400);
    else if (ara[i].counter % 4 == 2) readimagefile("boss3.jpg", leftMostPosition, 300, leftMostPosition+50, 400);
    else readimagefile("boss4.jpg", leftMostPosition, 300, leftMostPosition+50, 400);
    ara[i].counter++;
    ara[i].currentLeftMostPosition-=8;

    if (ara[i].currentLeftMostPosition<=-50) return 0;
    return 1;
}

int obstacle2 (obstacle ara[4], int i) {
    int leftMostPosition = ara[i].currentLeftMostPosition;
    ara[i].top = 370;
    ara[i].bottom = 400;
    ara[i].right = leftMostPosition+67;
    ara[i].left = leftMostPosition;
    if (ara[i].counter % 4 == 0) readimagefile("car1.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else if (ara[i].counter % 4 == 1) readimagefile("car1.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else if (ara[i].counter % 4 == 2) readimagefile("car1.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else readimagefile("car1.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    ara[i].counter++;
    ara[i].currentLeftMostPosition-=10;
    if (ara[i].currentLeftMostPosition<=-50) return 0;
    return 1;
}

int obstacle3 (obstacle ara[4], int i) {
    int leftMostPosition = ara[i].currentLeftMostPosition;
    ara[i].top = 370;
    ara[i].bottom = 400;
    ara[i].right = leftMostPosition+67;
    ara[i].left = leftMostPosition;
    if (ara[i].counter % 4 == 0) readimagefile("car2.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else if (ara[i].counter % 4 == 1) readimagefile("car2.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else if (ara[i].counter % 4 == 2) readimagefile("car2.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    else readimagefile("car2.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    ara[i].counter++;
    ara[i].currentLeftMostPosition-=10;
    if (ara[i].currentLeftMostPosition<=-50) return 0;
    return 1;
}

int obstacle4 (obstacle ara[4], int i) {
    int leftMostPosition = ara[i].currentLeftMostPosition;
    ara[i].top = 330;
    ara[i].bottom = 350;
    ara[i].right = leftMostPosition+60;
    ara[i].left = leftMostPosition;
    readimagefile("spaceship.jpg", leftMostPosition, 330, leftMostPosition+60, 350);
    ara[i].currentLeftMostPosition-=10;
    if (ara[i].currentLeftMostPosition<=-50) return 0;
    return 1;
}

int obstacle5 (obstacle ara[4], int i) {
    int leftMostPosition = ara[i].currentLeftMostPosition;
    ara[i].top = 370;
    ara[i].bottom = 400;
    ara[i].right = leftMostPosition+67;
    ara[i].left = leftMostPosition;
    readimagefile("flames.jpg", leftMostPosition, 370, leftMostPosition+67, 400);
    ara[i].currentLeftMostPosition-=8;
    if (ara[i].currentLeftMostPosition<=-50) return 0;
    return 1;
}

int printObstacle(obstacle obstacle_ara[4], int cnt) {
    int i, j;
    for (i=0; i<cnt; i++) {
        if (obstacle_ara[i].type==1) {
            if (!obstacle1(obstacle_ara, i)) {
               for (j=i; j<cnt; j++) {
                    obstacle_ara[j] = obstacle_ara[j+1];
               }
               return cnt-1;
            }
        }
        else if (obstacle_ara[i].type==2) {
            if (!obstacle2(obstacle_ara, i)) {
                for (j=i; j<cnt; j++) {
                    obstacle_ara[j] = obstacle_ara[j+1];
                }
                return cnt-1;
            }
        }
        else if (obstacle_ara[i].type==3) {
            if (!obstacle3(obstacle_ara, i)) {
               for (j=i; j<cnt; j++) {
                    obstacle_ara[j] = obstacle_ara[j+1];
                }
                return cnt-1;
            }
        }
        else if (obstacle_ara[i].type==4) {

            if (!obstacle4(obstacle_ara, i)) {
               for (j=i; j<cnt; j++) {
                    obstacle_ara[j] = obstacle_ara[j+1];
                }
                return cnt-1;
            }
        }
        else if (obstacle_ara[i].type==5) {
            if (!obstacle5(obstacle_ara, i)) {
               for (j=i; j<cnt; j++) {
                    obstacle_ara[j] = obstacle_ara[j+1];
                }
                return cnt-1;
            }
        }
    }
    return cnt;
}
