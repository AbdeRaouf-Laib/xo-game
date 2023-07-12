#include <stdio.h>
#include <ncurses.h>


WINDOW * xo;
WINDOW * case1;
WINDOW * case2;
WINDOW * case3;
WINDOW * case4;
WINDOW * case5;
WINDOW * case6;
WINDOW * case7;
WINDOW * case8;
WINDOW * case9;
#define enter 10
#define curs_down 258
#define curs_up 259
#define curs_right 261
#define curs_left 260
#define esc 27
#define f1 265
#define space 32
#define BW 1
#define BLW 2
#define BLB 3
#define RB 4
char a;
char b;
char c;
char d;
char e;
char f;
char g;
char h;
char j;
int i = 0;
int i1 = 0;
int i2 = 0;
int i3 = 0;
int i4 = 0;
int i5 = 0;
int i6 = 0;
int i7 = 0;
int i8 = 0;
int i9 = 0;
int t1 = 0;
int t2 = 0;
int t3 = 0;
int t4 = 0;
int t5 = 0;
int t6 = 0;
int t7 = 0;
int t8 = 0;
int t9 = 0;
int k = 0;
int x;
int win1 = 0,win2 = 0;
    int y,x;
void Color(){
    init_pair(BW, COLOR_BLACK, COLOR_WHITE);
    init_pair(BLW, COLOR_BLUE, COLOR_WHITE);
    init_pair(BLB, COLOR_BLUE, COLOR_BLACK);
    init_pair(RB, COLOR_RED, COLOR_BLACK);
}
int enterxo(int bi,int ki,int kii){

    getmaxyx(stdscr,y,x);
        xo = newwin(19,49,y / 2 - 13,x / 2 - 25);
        box(xo,0,0);
        case1 = subwin(xo,5,13,y / 2 - 11,x / 2 - 20 );
        case2 = subwin(xo,5,13,y / 2 - 11,x / 2 - 7 );
        case3 = subwin(xo,5,13,y / 2 - 11,x / 2 + 6 );
        case4 = subwin(xo,5,13,y / 2 - 6,x / 2 - 20 );
        case5 = subwin(xo,5,13,y / 2 - 6,x / 2 - 7 );
        case6 = subwin(xo,5,13,y / 2 - 6,x / 2 + 6 );
        case7 = subwin(xo,5,13,y / 2 - 1,x / 2 - 20 );
        case8 = subwin(xo,5,13,y / 2 - 1,x / 2 - 7 );
        case9 = subwin(xo,5,13,y / 2 - 1,x / 2 + 6 );
        
        wborder(case1,'|','|','-','-','+','+','+','+');
        wborder(case2,'|','|','-','-','+','+','+','+');
        wborder(case3,'|','|','-','-','+','+','+','+');
        wborder(case4,'|','|','-','-','+','+','+','+');
        wborder(case5,'|','|','-','-','+','+','+','+');
        wborder(case6,'|','|','-','-','+','+','+','+');
        wborder(case7,'|','|','-','-','+','+','+','+');
        wborder(case8,'|','|','-','-','+','+','+','+');
        wborder(case9,'|','|','-','-','+','+','+','+');


        if(ki == 1 && kii == 1){
            wbkgd(case1,COLOR_PAIR(BW));
        }
        else if(ki == 1 && kii == 2){
            wbkgd(case2,COLOR_PAIR(BW));
        }
        else if(ki == 1 && kii == 3){
            wbkgd(case3,COLOR_PAIR(BW));
        }
        else if(ki == 2 && kii == 1){
            wbkgd(case4,COLOR_PAIR(BW));
        }
        else if(ki == 2 && kii == 2){
            wbkgd(case5,COLOR_PAIR(BW));
        }
        else if(ki == 2 && kii == 3){
            wbkgd(case6,COLOR_PAIR(BW));
        }
        else if(ki == 3 && kii == 1){
            wbkgd(case7,COLOR_PAIR(BW));
        }
        else if(ki == 3 && kii == 2){
        
            wbkgd(case8,COLOR_PAIR(BW));
        }
        else if(ki == 3 && kii == 3){
            wbkgd(case9,COLOR_PAIR(BW));
        }
        
        if(ki == 1 && kii == 1){
            if(bi == 10){
                i1 = 1;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 1 && kii == 2){
            if(bi == 10){
                i1 = 0;
                i2 = 2;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 1 && kii == 3){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 3;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;               
            }
        }
        else if(ki == 2 && kii == 1){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 4;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 2 && kii == 2){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 5;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 2 && kii == 3){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 6;
                i7 = 0;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 3 && kii == 1){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 7;
                i8 = 0;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 3 && kii == 2){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 8;
                i9 = 0;
                i++;
                k++;
            }
        }
        else if(ki == 3 && kii == 3){
            if(bi == 10){
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                i6 = 0;
                i7 = 0;
                i8 = 0;
                i9 = 9;
                i++;
                k++;
            }
        }
        if(i > 1){
    i = 0;
}    
if(t1 != 1){ 
    if(i1 == 1){
        if(i == 0){
            a = 'x';
        }
        if(i == 1){
            a = 'o';
        }
        t1 = 1;
    }
}
if(t2 != 1){    
    if(i2 == 2){
        if(i == 0){
            b = 'x';
        }
        if(i == 1){
            b = 'o';
        }
        t2 = 1;
 
    }
}
if(t3 != 1){       
    if(i3 == 3){
        if(i == 0){
            c = 'x';
        }
        if(i == 1){
            c = 'o';
        }
        t3 = 1;
    }
}
if(t4 != 1){
          
    if(i4 == 4){
        if(i == 0){
            d = 'x';
        }
        if(i == 1){
            d = 'o';
        }
        t4 = 1;
 
    }
}
if(t5 != 1){
          
    if(i5 == 5){
        if(i == 0){
            e = 'x';
        }
        if(i == 1){
            e = 'o';
        }
        t5 = 1;
     }
}
if(t6 != 1){
          
    if(i6 == 6){
        if(i == 0){
            f = 'x';
        }
        if(i == 1){
            f = 'o';
        }
        t6 = 1;
 
    }
}
if(t7 != 1){
    if(i7 == 7){
        if(i == 0){
            g = 'x';
        }
        if(i == 1){
            g = 'o';
        }
        t7 = 1;
    }
}
if(t8 != 1){
          
    if(i8 == 8){
        if(i == 0){
            h = 'x';
        }
        if(i == 1){
            h = 'o';
        }
        t8 = 1;
 
    }
}
if(t9 != 1){
          
    if(i9 == 9){
        if(i == 0){
            j = 'x';
        }
        if(i == 1){
            j = 'o';
        }
        t9 = 1;
 
    }
}

        if(i == 0){
            mvprintw(y / 2 - 15,x / 2 - 3,"player1:(o)");
            refresh();
        }
        else if(i == 1){
            mvprintw(y / 2 - 15,x / 2 - 3,"player2:(x)");
            refresh();
        }
    if(a == 'x' && b == 'x' && c == 'x'){
        win2 = 1;
        k = 9;
    }
       
    if(a == 'x' && d == 'x' && g == 'x'){
        win2 = 1;
        k = 9;
    }
        
    if(a == 'x' && e == 'x' && j == 'x'){
        win2 = 1;
        k = 9;
    }
        
    if(b == 'x' && e == 'x' && h == 'x'){
        win2 = 1;
        k = 9;
    }
        
    if(d == 'x' && e == 'x' && f == 'x'){
        win2 = 1;    
        k = 9;
    }
        
    if(c == 'x' && f == 'x' && j == 'x'){
        win2 = 1;
        k = 9;
    }
        
    if(c == 'x' && e == 'x' && g == 'x'){
         win2 = 1;
        k = 9;
    }
        
    if(g == 'x' && h == 'x' && j == 'x'){
         win2 = 1;
        k = 9;
    }
    if(a == 'o' && b == 'o' && c == 'o'){
        win1  = 1;
        k = 9;
    }
        
    if(a == 'o' && d == 'o' && g == 'o'){
        win1 = 1;
        k = 9;
    }
        
    if(a == 'o' && e == 'o' && j == 'o'){
        win1 = 1;
        k = 9;
    }
    if(b == 'o' && e == 'o' && h == 'o'){
        win1 = 1;
        k = 9;
    }
        
    if(d == 'o' && e == 'o' && f == 'o'){
        win1 = 1;
        k = 9;
    }
        
    if(c == 'o' && f == 'o' && j == 'o'){
        win1 = 1;
        k = 9;
    }
        
    if(c == 'o' && e == 'o' && g == 'o'){
        win1 = 1;
        k = 9;
    }
        
    if(g == 'o' && h == 'o' && j == 'o'){
        win1 = 1;
        k = 9;
    }
        return k;
}

int main(){
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    Color();
    keypad(stdscr,TRUE);
    refresh();
    int k = 0;
    int ki = 1;
    int kii = 1;
    int bi;
    int code = 1;
    do{
        
        if(bi == 261 ){
            kii++;
        }
        if(bi == 260){
            kii--;
        }
        if(bi == 258){
            ki++;
        }
        if(bi == 259){
            ki--;
        }
        if(ki < 1){
            ki = 3;
        }
        if(ki > 3){
            ki = 1;
        }
        if(kii < 1){
            kii = 3;
        }
        if(kii > 3){
            kii = 1;
        }

        x = enterxo(bi,ki,kii);
        if(x == 9){
            break;
        }
        mvwprintw(case1,2,6,"%c",a);
        wrefresh(case1);
        mvwprintw(case2,2,6,"%c",b);
        wrefresh(case2);
        mvwprintw(case3,2,6,"%c",c);
        wrefresh(case3);
        mvwprintw(case4,2,6,"%c",d);
        wrefresh(case4);
        mvwprintw(case5,2,6,"%c",e);
        wrefresh(case5);
        mvwprintw(case6,2,6,"%c",f);
        wrefresh(case6);
        mvwprintw(case7,2,6,"%c",g);
        wrefresh(case7);
        mvwprintw(case8,2,6,"%c",h);
        wrefresh(case8);
        mvwprintw(case9,2,6,"%c",j);
        wrefresh(case9);
        wrefresh(xo);
        wrefresh(case1);
        wrefresh(case2);
        wrefresh(case3);
        wrefresh(case4);
        wrefresh(case5);
        wrefresh(case6);
        wrefresh(case7);
        wrefresh(case8);
        wrefresh(case9);
        bi = getch();
    }while(bi != 27 );
    clear();
    refresh();
    if(win1 == 1){
        mvprintw(10,0,"player1 is win");
        refresh();
    }
    else if(win2 == 1){
        mvprintw(10,0,"player2 is win");
        refresh();
    }
    else{
        mvprintw(10,0,"NULL!!!");
        refresh();
    }
    mvprintw(11,0,"\nendgame");
    refresh();
    getch();
    endwin();
    return 0;
}