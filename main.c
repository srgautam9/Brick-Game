/*
    It contains the main function */

#include "header.h"
int main()
{
    system("COLOR F0"); /* set white background with purple text on it*/

	srand(time(NULL)); /* seed the randomizer*/

    score_1=score_2=miss_1=miss_2=0;
    pos_comp=12;
    pos=12;
    main_init_view();
    system("COLOR F0"); /* set white background with purple texxt on itn*/
    system("cls");
    main_view();
    system("cls");
    selection_loop();
    return 0;
}

