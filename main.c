#include <stdio.h>
#include <Windows.h>
#include "Main.h"

void print_menu(void);
int menu_select(void);
void menu1(void);
void menu2(void);
void menu3(void);
void menu4(void);
void menu5(void);
void menu6(void);
void menu7(void);
void menu8(void);
void EXIT(void);
void error(void);

int main(void)
{
	int input_num;


	while (1)
	{
		print_menu();

		input_num = menu_select();

		switch (input_num){
		case 1 : menu1(); break;
		case 2 : menu2(); break;
		case 3 : menu3(); break;
        case 4 : menu4(); break;
        case 5 : menu5(); break;
        case 6 : menu6(); break;
        case 7 : menu7(); break;
		case 8 : menu8(); break;
        case 9 : EXIT(); break;
		default : error(); break;
		};
	}

}

void print_menu(void)
{
	system("cls");
	printf("menu==============================================\n");
	printf("1. Linked List\n");
	printf("2. Stack\n");
	printf("3. Queue\n");
    printf("4. Priority Queue\n");
    printf("5. Sorting\n");
    printf("6. AVL\n");
	printf("7. BST\n");
    printf("8. Hashtable\n");
    printf("9. EXIT\n");
	printf("==================================================\n");
	printf("menu : ");
}

int menu_select(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void menu1(void)
{
	system("cls");
	printf("1. Linked List\n");
    printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n\n");
    LinkedListMain();
    printf("----------------------------\n");
	system("pause");
}

void menu2(void)
{
	system("cls");
	printf("2. Stack\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n\n");
    StackMain();
    printf("----------------------------\n");
	system("pause");
}

void menu3(void)
{
	system("cls");
	printf("3. Queue\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n\n");
    QueueMain();
    printf("----------------------------\n");
	system("pause");
	system("pause");
}

void menu4(void)
{
	system("cls");
	printf("4. Priority Queue\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n");
    PQMain();
    printf("----------------------------\n\n");
	system("pause");
}

void menu5(void)
{
	system("cls");
	printf("5. Sorting\n");
	printf("----------------------------\n");
	sortingmain();
	printf("----------------------------\n");
	system("pause");
}

void menu6(void)
{
	system("cls");
	printf("6. AVL\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n");
    AVLmain();
    printf("----------------------------\n\n");
	system("pause");
}

void menu7(void)
{
	system("cls");
	printf("7. BST\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.MENU\n");
    BSTmain();
    printf("----------------------------\n\n");
	system("pause");
}

void menu8(void)
{
	system("cls");
	printf("8. HastTable\n");
	printf("----------------------------\n");
    printf("options:\n0.insert\n1.delete\n2.find\n3.MENU\n\n");
    tablemain();
    printf("----------------------------\n\n");
	system("pause");
}

void EXIT(void){
    system("cls");
    printf("BYE");
    exit(0);
}

void error(void)
{
	system("cls");
	printf("Error\n");
	printf("Enter -> Menu");
	system("pause");
}

