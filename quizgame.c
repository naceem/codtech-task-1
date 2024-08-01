#include <stdio.h>
#include <string.h>

int main() {
    printf("*********--QUIZ GAME--********\n");
    printf("Hello USER! Let's play a quiz game.\n");
    printf("Click (capital)F to proceed...\n");
    char press;
    scanf(" %c", &press);

    if (press == 'F') {
        printf("Let us first know each other. I am QUIZ BOT, What is your name? \n");
        char name[50];
        scanf("%s", name);
        printf("Okk %s, Let's START the Quiz.\nClick F to proceed...\n", name);

        char press1;
        scanf(" %c", &press1);

        if (press1 == 'F') {
            printf("********INSTRUCTION********\n");
            printf("Each question is a multiple choice question with 4 choices. Only ONE option is CORRECT. Type the correct option as A, B, C, and D.\n");

            // QUESTION 1
            printf("Question 1. What is the sum of the first 5 natural numbers?\n");
            printf("A. 25\nB. 15\nC. 10\nD. 5\nOPTION:\n");
            char ans;
            scanf(" %c", &ans);

            if (ans == 'B') {
                printf("Bravo %s, 15 is the correct answer.\n", name);
            } else {
                printf("Oops !! Wrong answer. Correct answer is Option B.\n");
            }

            printf("Let's hop to the next question...\nPress F\n");
            char press3;
            scanf(" %c", &press3);

            // QUESTION 2
            if (press3 == 'F') {
                printf("Question 2. What is the factorial of 5?\n");
                printf("A. 105\nB. 50\nC. 20\nD. 120\nOPTION:\n");
                char ans1;
                scanf(" %c", &ans1);

                if (ans1 == 'D') {
                    printf("Bravo %s, 120 is the correct answer.\n", name);
                } else {
                    printf("Oops !! Wrong answer. Correct answer is Option D.\n");
                }
            } else {
                printf("You need to press F to proceed...\n");
            }

            printf("Let's proceed to the next question.\nPress F\n");
            char press4;
            scanf(" %c", &press4);

            // QUESTION 3
            if (press4 == 'F') {
                printf("Question 3. What is the full form of WWW?\n");
                printf("A. World Wealth Web\nB. Women Women Women\nC. World Wide Web\nD. World Wide Window\nOPTION:\n");
                char ans2;
                scanf(" %c", &ans2);

                if (ans2 == 'C') {
                    printf("Bravo %s, Option C is the correct answer.\n", name);
                } else {
                    printf("Oops !! Wrong answer. Correct answer is Option C.\n");
                }
            } else {
                printf("You need to press F...\n");
            }

            printf("Let's move on to the next question.\nPress F.\n");
            char press5;
            scanf(" %c", &press5);

            // QUESTION 4
            if (press5 == 'F') {
                printf("Question 4. What is the chemical formula of common salt?\n");
                printf("A. MgCl2\nB. KCl\nC. NaCl\nD. NaI\nOPTION:\n");
                char ans3;
                scanf(" %c", &ans3);

                if (ans3 == 'C') {
                    printf("Very Good %s, NaCl is the correct answer.\n", name);
                } else {
                    printf("Oops !! Wrong answer. Correct answer is Option C.\n");
                }
            } else {
                printf("You need to press F.\n");
            }

            printf("Good Job, let's move to our last question.\nPress F\n");
            char press6;
            scanf(" %c", &press6);

            // QUESTION 5
            if (press6 == 'F') {
                printf("Question 5. Who is known as the FATHER of computer?\n");
                printf("A. Kaleen Bhaiya\nB. Charles Babbage\nC. Durgesh Nai\nD. Elvish Bhai\nOPTION:\n");
                char ans4;
                scanf(" %c", &ans4);

                if (ans4 == 'B') {
                    printf("Victory!! %s, Charles Babbage is the correct answer.\n", name);
                    printf("You have solved all the questions CORRECTLY.\n");
                    printf("*********************************************************\n");
                } else {
                    printf("Oops !! Wrong answer. Correct answer is Option B.\n");
                }
            } else {
                printf("You had to press F.\n");
            }

        } else {
            printf("Please Press F to proceed...\n");
        }
    } else {
        printf("Please Press F to proceed...\n");
    }

    return 0;
}
