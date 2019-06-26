#include "header.h"

void static draw_menu(char *menus[]) {
	move(20, 80);
	attron(COLOR_PAIR(3));
	addstr(menus[0]);
	attroff(COLOR_PAIR(3));
	move(22, 80);
	attron(COLOR_PAIR(1));
	addstr(menus[1]);
	attroff(COLOR_PAIR(1));
	move(24, 80);
    attron(COLOR_PAIR(1));
    addstr(menus[2]);
    attroff(COLOR_PAIR(1));
	move(26, 80);
    attron(COLOR_PAIR(1));
    addstr(menus[3]);   
    attroff(COLOR_PAIR(1));
    move(28, 80);
    attron(COLOR_PAIR(1));
    addstr(menus[4]);
    attroff(COLOR_PAIR(1));
}

  

void static draw_choise(char *mana[], int k){
    draw_menu(mana);
    attron(COLOR_PAIR(2));
    move(20 + k * 2, 80);
    addstr(mana[k]);
    attroff(COLOR_PAIR(2));
	refresh();
}

void static go_up(int arr[]){
	int find = 0;
	while (arr[find] != 32)
		find++;
	if (find < 4)
		return;
	int temp = arr[find];
	arr[find] = arr[find - 4];
	arr[find - 4] = temp;
	attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr[i * 4 + j] != 32){
               
                if(arr[i * 4 + j]/10 >0){
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("  %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("   %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("       ");
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(40, 80);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D or ARROWS\n");
    attroff(COLOR_PAIR(1));
    refresh();
}

void static go_down(int arr[]){
    int find = 0;
    while (arr[find] != 32)
        find++;
    if (find > 11)
        return;
    int temp = arr[find];
    arr[find] = arr[find + 4];
    arr[find + 4] = temp;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr[i * 4 + j] != 32){
               
                if(arr[i * 4 + j]/10 >0){
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("  %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("   %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("       ");
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(40, 80);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D or ARROWS\n");
    attroff(COLOR_PAIR(1));
    refresh();
}   

void static go_left(int arr[]){
	int find = 0;
	while (arr[find] != 32)
		find++;
	if (find == 0 || find == 4 || find == 8 || find == 12)
		return;
	int temp = arr[find];
	arr[find] = arr[find - 1];
	arr[find - 1] = temp;
	attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr[i * 4 + j] != 32){
               
                if(arr[i * 4 + j]/10 >0){
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("  %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("   %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("       ");
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(40, 80);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D or ARROWS\n");
    attroff(COLOR_PAIR(1));
    refresh();
}

void static go_right(int arr[]){
    int find = 0;
    while (arr[find] != 32)
        find++;
    if (find == 3 || find == 7 || find == 11 || find == 15)
        return;
    int temp = arr[find];
    arr[find] = arr[find + 1];
    arr[find + 1] = temp;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr[i * 4 + j] != 32){
               
                if(arr[i * 4 + j]/10 >0){
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("  %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("   %d   ", arr[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("       ");
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(40, 80);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D or ARROWS\n");
    attroff(COLOR_PAIR(1));
    refresh();
}   

int static solo_player() {
	time_t t;
    srand(time(&t));
    const int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,32};
	erase();
	int game[16], randomizer[16];
	for (int i = 0; i < 16; i++) {
		game[i] = 0;
		randomizer[i] = -1;
	}
	int temp = rand() % 16;
	game[0] = numbers[temp];
	randomizer[0] = temp;
	int flag = 0;
	for (int i = 1; i < 16; i++) {
		while (flag != 16) {
			flag = 0;
			temp = rand() % 16;
			for (int j = 0; j < 16; j++) {
				if (temp != randomizer[j])
					flag++;
			}	
		}
		game[i] = numbers[temp];
		randomizer[i] = temp;
		flag = 0;
	}
	attron(COLOR_PAIR(2));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {	
			if (game[i * 4 + j] != 32){
               
                if(game[i * 4 + j]/10 >0){
            	move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("  %d   ", game[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("   %d   ", game[i * 4 + j]);
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 73 + j*8);
                printw("       ");
                move(18 + i * 4, 73 + j*8);
                printw("       ");
                move(19 + i * 4, 73 + j*8);
                printw("       ");
                
               
            }
		}
	}
    attroff(COLOR_PAIR(2));
    move(40, 80);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D or ARROWS\n");
    attroff(COLOR_PAIR(1));
	refresh();
	float time = clock();
	while (check_board(game) == false) {
		int c = getch();
		switch(c) {
			case KEY_UP: { go_up(game); break; }
			case KEY_DOWN: { go_down(game); break; }
			case KEY_LEFT: { go_left(game); break; }
			case KEY_RIGHT: { go_right(game); break; }
            case 'w': { go_up(game); break; }
            case 's': { go_down(game); break; }
            case 'a': { go_left(game); break; }
            case 'd': { go_right(game); break; }
			case 27: {
				erase();
				attron(COLOR_PAIR(1));
				move(25,80);
				addstr("The game was surrended...");
				attroff(COLOR_PAIR(1));
				refresh();
				usleep(2000000);
				erase();
				return 10000;
			}
		}
		time = clock()/CLOCKS_PER_SEC;
		move(10, 86);
		attron(COLOR_PAIR(2));
		printw("%0.lf sec", time);
		attroff(COLOR_PAIR(2));
		refresh();
	}
	move(33, 80);
	attron(COLOR_PAIR(1));
	printw(" WINNER! YOUR TIME IS %0.lf SECONS", time);
	attroff(COLOR_PAIR(1));
	refresh();
	usleep(200000);
	erase();
	return time;
}


















void static go_up1(int arr1[] ,int arr2[]){
    int find1 = 0;
    while (arr1[find1] != 32)
        find1++;
    if (find1 < 4)
        return;
    int temp1 = arr1[find1];
    arr1[find1] = arr1[find1 - 4];
    arr1[find1 - 4] = temp1;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}





void static go_up2(int arr1[] ,int arr2[]){
    int find2 = 0;
    while (arr2[find2] != 32)
        find2++;
    if (find2 < 4)
        return;
    int temp2 = arr2[find2];
    arr2[find2] = arr2[find2 - 4];
    arr2[find2 - 4] = temp2;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}

void static go_down1(int arr1[] ,int arr2[]){
    int find1 = 0;
    while (arr1[find1] != 32)
        find1++;
    if (find1 > 11)
        return;
    int temp1 = arr1[find1];
    arr1[find1] = arr1[find1 + 4];
    arr1[find1 + 4] = temp1;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}  


void static go_down2(int arr1[] ,int arr2[]){
    int find2 = 0;
    while (arr2[find2] != 32)
        find2++;
    if (find2 > 11)
        return;
    int temp2 = arr2[find2];
    arr2[find2] = arr2[find2 + 4];
    arr2[find2 + 4] = temp2;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}    














void static go_left1(int arr1[] ,int arr2[]){
    int find1 = 0;
    while (arr1[find1] != 32)
        find1++;
    if (find1 == 0 || find1 == 4 || find1 == 8 || find1 == 12)
        return;
    int temp1 = arr1[find1];
    arr1[find1] = arr1[find1 - 1];
    arr1[find1 - 1] = temp1;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}

void static go_right1(int arr1[] ,int arr2[]){
    int find1 = 0;
    while (arr1[find1] != 32)
        find1++;
    if (find1 == 3 || find1 == 7 || find1 == 11 || find1 == 15)
        return;
    int temp1 = arr1[find1];
    arr1[find1] = arr1[find1 + 1];
    arr1[find1 + 1] = temp1;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}   















void static go_left2(int arr1[] ,int arr2[]){
    int find2 = 0;
    while (arr2[find2] != 32)
        find2++;
    if (find2 == 0 || find2 == 4 || find2 == 8 || find2 == 12)
        return;
    int temp2 = arr2[find2];
    arr2[find2] = arr2[find2 - 1];
    arr2[find2 - 1] = temp2;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}

void static go_right2(int arr1[] ,int arr2[]){
    int find2 = 0;
    while (arr2[find2] != 32)
        find2++;
    if (find2 == 3 || find2 == 7 || find2 == 11 || find2 == 15)
        return;
    int temp2 = arr2[find2];
    arr2[find2] = arr2[find2 + 1];
    arr2[find2 + 1] = temp2;
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr1[i * 4 + j] != 32){
               
                if(arr1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", arr1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));




attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (arr2[i * 4 + j] != 32){
               
                if(arr2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", arr2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 125);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));



    refresh();

}   


int static multi_player(){
    time_t t;
    srand(time(&t));
    const int numbers1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,32};
    erase();
    int game1[16], randomizer1[16];
    for (int i = 0; i < 16; i++) {
        game1[i] = 0;
        randomizer1[i] = -1;
    }
    int temp1 = rand() % 16;
    game1[0] = numbers1[temp1];
    randomizer1[0] = temp1;
    int flag1 = 0;
    for (int i = 1; i < 16; i++) {
        while (flag1 != 16) {
            flag1 = 0;
            temp1 = rand() % 16;
            for (int j = 0; j < 16; j++) {
                if (temp1 != randomizer1[j])
                    flag1++;
            }   
        }
        game1[i] = numbers1[temp1];
        randomizer1[i] = temp1;
        flag1 = 0;
    }
    attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (game1[i * 4 + j] != 32){
               
                if(game1[i * 4 + j]/10 >0){
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("  %d   ", game1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("   %d   ", game1[i * 4 + j]);
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 36 + j*8);
                printw("       ");
                move(18 + i * 4, 36 + j*8);
                printw("       ");
                move(19 + i * 4, 36 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 48);
    attron(COLOR_PAIR(1));
    printw("W,A,S,D\n");
    attroff(COLOR_PAIR(1));













    const int numbers2[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,32};
     
    int game2[16], randomizer2[16];
    for (int i = 0; i < 16; i++) {
        game2[i] = 0;
        randomizer2[i] = -1;
    }
    int temp2 = rand() % 16;
    game2[0] = numbers2[temp2];
    randomizer2[0] = temp2;
    int flag2 = 0;
    for (int i = 1; i < 16; i++) {
        while (flag2 != 16) {
            flag2 = 0;
            temp2 = rand() % 16;
            for (int j = 0; j < 16; j++) {
                if (temp2 != randomizer2[j])
                    flag2++;
            }   
        }
        game2[i] = numbers2[temp2];
        randomizer2[i] = temp2;
        flag2 = 0;
    }
	attron(COLOR_PAIR(2));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {   
            if (game2[i * 4 + j] != 32){
               
                if(game2[i * 4 + j]/10 >0){
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("  %d   ", game2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                }else{

                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("   %d   ", game2[i * 4 + j]);
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               }
           
            }
            else{
                
               
                move(17 + i * 4, 113 + j*8);
                printw("       ");
                move(18 + i * 4, 113 + j*8);
                printw("       ");
                move(19 + i * 4, 113 + j*8);
                printw("       ");
                
               
            }
        }
    }
    attroff(COLOR_PAIR(2));
    move(37, 124);
    attron(COLOR_PAIR(1));
    printw("ARROWS\n");
    attroff(COLOR_PAIR(1));
	float time;
    refresh();
    while (check_board(game1) == false && check_board(game2) == false) {
        int c = getch();
        switch(c) {
            case KEY_UP: { go_up2(game1 , game2); break; }
            case KEY_DOWN: { go_down2(game1 ,game2); break; }
            case KEY_LEFT: { go_left2(game1 , game2); break; }
            case KEY_RIGHT: { go_right2(game1 , game2); break; }
            case 'w': { go_up1(game1 , game2); break; }
            case 's': { go_down1(game1 , game2); break; }
            case 'a': { go_left1(game1 , game2); break; }
            case 'd': { go_right1(game1 , game2); break; }
        	case 27: {
                erase();
                attron(COLOR_PAIR(1));
                move(25,80);
                addstr("The game was surrended...");
                attroff(COLOR_PAIR(1));
                refresh();
                usleep(2000000);
                erase();
                return 10000;
            }

		}
		time = clock()/CLOCKS_PER_SEC;
        move(24, 88);
        attron(COLOR_PAIR(2));
        printw("%0.lf sec", time);
        attroff(COLOR_PAIR(2));
        refresh();
    }
	if (check_board(game1) == true){
		move(15, 44);
    	attron(COLOR_PAIR(3));
    	addstr(" WINNER!");
    	attroff(COLOR_PAIR(3));
	}
	if (check_board(game2) == true){
        move(15, 125);
        attron(COLOR_PAIR(3));
        addstr(" WINNER!");
        attroff(COLOR_PAIR(3));
    }
    refresh();
    usleep(2000000);
    erase(); 
	return time;
}

void play() {
	float time;
	move(20, 40);
	attron(COLOR_PAIR(1));
	addstr("SINGLE PLAYER");
	move(0, 90);
	vline('|', 90);
	move(40, 77);
	addstr("PRESS 1 or 2 to switch mode");
	move(20, 130);
    addstr("MULTI PLAYERS");
    attroff(COLOR_PAIR(1));
	refresh();
	while(true){
		char num = getch();
		if (num == '1'){
			time = solo_player();
			break;
		}
		if(num == '2'){
	 	    time = multi_player();
			break;
		}
	}
	
}

void static about() {
    erase();
   clear();
    attron(COLOR_PAIR(1));
    move(20, 83);
    addstr("DEVELOPERS");
    move(22, 83);
    addstr("spshenychn");
    move(24, 83);
    addstr("mbashenko");
    move(26, 83);
    addstr(" vchaika");
    attroff(COLOR_PAIR(1));
    refresh();
    while(true){
        char num = getch();
        if (num == 27){
            break;
        }
    
    }
    
}
int main() {
	char *menus[] = {"     MENU     ", "     PLAY     ",
					"    ABOUT    ", "     EXIT     "};
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, true);
	nodelay(stdscr, true);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	noecho();
    attron(COLOR_PAIR(1));
	intro();
	curs_set(0);
    draw_menu(menus);
	draw_choise(menus, 1);
	refresh();
	int k = 1;
	while (true) {
		int ch = getch();
		switch(ch) {
			case KEY_DOWN: { if (k != 4) draw_choise(menus, ++k); break; }
			case KEY_UP: { if (k != 1) draw_choise(menus, --k); break; }
			case ' ': { 
				switch(k) {
					case 1: { erase(); refresh(); usleep(200000); play(); draw_menu(menus); refresh(); break; }
					case 2: { erase(); refresh(); usleep(200000); about();clear();  draw_menu(menus);refresh(); break; }
					case 3: { endwin(); return 0; }
				}

			}
		}
	}
}

