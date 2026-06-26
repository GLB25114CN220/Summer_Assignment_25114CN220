// --> Write a program to Create quiz application :--

#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("\n=====================================\n");
    printf("      WELCOME TO QUIZ APPLICATION");
    printf("\n=====================================\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    // Question 2
    printf("\n2. Who developed the C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    // Question 3
    printf("\n3. Which symbol ends a statement in C?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    // Question 4
    printf("\n4. Which header file is used for printf()?\n");
    printf("1. math.h\n2. string.h\n3. stdio.h\n4. conio.h\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    // Question 5
    printf("\n5. Which loop executes at least once?\n");
    printf("1. while\n2. for\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    // Question 6
    printf("\n6. 5 + 10 = ?\n");
    printf("1. 12\n2. 15\n3. 20\n4. 25\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    // Question 7
    printf("\n7. Which keyword is used to return a value?\n");
    printf("1. break\n2. continue\n3. return\n4. goto\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    // Question 8
    printf("\n8. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    // Question 9
    printf("\n9. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    // Question 10
    printf("\n10. Which operator is used for multiplication in C?\n");
    printf("1. +\n2. *\n3. /\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    // Final Result
    printf("\n=====================================\n");
    printf("             QUIZ RESULT");
    printf("\n=====================================\n");
    printf("Your Score = %d/10\n", score);

    if (score == 10)
        printf("Excellent! You answered all questions correctly.\n");
    else if (score >= 7)
        printf("Very Good! You passed the quiz.\n");
    else if (score >= 5)
        printf("Good! Keep practicing.\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}