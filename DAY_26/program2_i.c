// --> Write a program to Create voting eligibility system :--

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ============================================
//              STRUCTURES
// ============================================

typedef struct
{
    int id;
    char name[50];
    int age;
    char citizenship[20];
    int isRegistered;
    int hasVoted;
    char idNumber[20];
} Voter;

typedef struct
{
    int id;
    char name[50];
    char party[30];
    int votes;
} Candidate;

// ============================================
//              GLOBAL VARIABLES
// ============================================

Voter voters[100];
Candidate candidates[10];
int voterCount = 0;
int candidateCount = 0;
int electionActive = 0;

// ============================================
//              UTILITY FUNCTIONS
// ============================================

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printLine(char ch, int length)
{
    for (int i = 0; i < length; i++)
        printf("%c", ch);
    printf("\n");
}

void printHeader(const char *title)
{
    printLine('=', 50);
    printf("   %s\n", title);
    printLine('=', 50);
}

void pressEnterToContinue()
{
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

void toUpperCase(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

// ============================================
//         ELIGIBILITY CHECK
// ============================================

int checkEligibility(Voter v)
{
    // Must be 18 or older
    if (v.age < 18)
        return 0;

    // Must be a citizen
    char citizenship[20];
    strcpy(citizenship, v.citizenship);
    toUpperCase(citizenship);
    if (strcmp(citizenship, "YES") != 0)
        return 0;

    // Must be registered
    if (!v.isRegistered)
        return 0;

    return 1;
}

void printEligibilityReport(Voter v)
{
    printLine('-', 50);
    printf("  ELIGIBILITY REPORT FOR: %s\n", v.name);
    printLine('-', 50);
    printf("  ID Number    : %s\n", v.idNumber);
    printf("  Age          : %d years\n", v.age);
    printf("  Citizenship  : %s\n", v.citizenship);
    printf("  Registered   : %s\n", v.isRegistered ? "Yes" : "No");
    printLine('-', 50);

    // Individual checks
    printf("\n  CRITERIA CHECKS:\n");
    printf("  [%s] Age 18 or above\n", v.age >= 18 ? "✓" : "✗");
    printf("  [%s] Valid Citizenship\n", (strcasecmp(v.citizenship, "yes") == 0) ? "✓" : "✗");
    printf("  [%s] Registered to Vote\n", v.isRegistered ? "✓" : "✗");

    printLine('-', 50);

    if (checkEligibility(v))
        printf("   STATUS: ELIGIBLE TO VOTE\n");
    else
        printf("   STATUS: NOT ELIGIBLE TO VOTE\n");

    printLine('-', 50);
}

// ============================================
//         VOTER REGISTRATION
// ============================================

void registerVoter()
{
    printHeader("VOTER REGISTRATION");

    if (voterCount >= 100)
    {
        printf(" Maximum voter limit reached!\n");
        return;
    }

    Voter v;
    v.id = voterCount + 1;
    v.hasVoted = 0;

    printf("Enter Full Name       : ");
    scanf(" %[^\n]", v.name);

    printf("Enter Age             : ");
    scanf("%d", &v.age);

    printf("Are you a Citizen?    : (Yes/No): ");
    scanf("%s", v.citizenship);

    printf("Enter ID Number       : ");
    scanf("%s", v.idNumber);

    // Check if ID already exists
    for (int i = 0; i < voterCount; i++)
    {
        if (strcmp(voters[i].idNumber, v.idNumber) == 0)
        {
            printf("\n A voter with this ID already exists!\n");
            pressEnterToContinue();
            return;
        }
    }

    // Check eligibility
    char citizenship[20];
    strcpy(citizenship, v.citizenship);
    toUpperCase(citizenship);

    if (v.age >= 18 && strcmp(citizenship, "YES") == 0)
    {
        v.isRegistered = 1;
        printf("\n Registration SUCCESSFUL!\n");
    }
    else
    {
        v.isRegistered = 0;
        printf("\n Registration DENIED - Does not meet eligibility criteria.\n");
    }

    voters[voterCount++] = v;
    printEligibilityReport(v);
    pressEnterToContinue();
}

// ============================================
//         CHECK ELIGIBILITY (QUICK)
// ============================================

void quickEligibilityCheck()
{
    printHeader("QUICK ELIGIBILITY CHECK");

    char idNumber[20];
    printf("Enter Voter ID Number: ");
    scanf("%s", idNumber);

    for (int i = 0; i < voterCount; i++)
    {
        if (strcmp(voters[i].idNumber, idNumber) == 0)
        {
            printEligibilityReport(voters[i]);
            pressEnterToContinue();
            return;
        }
    }

    printf("\n Voter not found in the system.\n");
    printf("   Please register first.\n");
    pressEnterToContinue();
}

// ============================================
//         CANDIDATE MANAGEMENT
// ============================================

void addCandidate()
{
    printHeader("ADD CANDIDATE");

    if (candidateCount >= 10)
    {
        printf(" Maximum candidate limit reached!\n");
        return;
    }

    Candidate c;
    c.id = candidateCount + 1;
    c.votes = 0;

    printf("Enter Candidate Name  : ");
    scanf(" %[^\n]", c.name);

    printf("Enter Party Name      : ");
    scanf(" %[^\n]", c.party);

    candidates[candidateCount++] = c;
    printf("\n Candidate '%s' added successfully!\n", c.name);
    pressEnterToContinue();
}

void listCandidates()
{
    printHeader("CANDIDATE LIST");

    if (candidateCount == 0)
    {
        printf("  No candidates registered yet.\n");
        pressEnterToContinue();
        return;
    }

    printf("  %-5s %-25s %-20s %s\n", "No.", "Name", "Party", "Votes");
    printLine('-', 50);

    for (int i = 0; i < candidateCount; i++)
    {
        printf("  %-5d %-25s %-20s %d\n",
               candidates[i].id,
               candidates[i].name,
               candidates[i].party,
               electionActive ? 0 : candidates[i].votes);
    }

    pressEnterToContinue();
}

// ============================================
//              CAST VOTE
// ============================================

void castVote()
{
    printHeader("CAST YOUR VOTE");

    if (candidateCount == 0)
    {
        printf(" No candidates available!\n");
        pressEnterToContinue();
        return;
    }

    char idNumber[20];
    printf("Enter your Voter ID: ");
    scanf("%s", idNumber);

    // Find voter
    int voterIndex = -1;
    for (int i = 0; i < voterCount; i++)
    {
        if (strcmp(voters[i].idNumber, idNumber) == 0)
        {
            voterIndex = i;
            break;
        }
    }

    if (voterIndex == -1)
    {
        printf("\n Voter ID not found. Please register first.\n");
        pressEnterToContinue();
        return;
    }

    Voter *v = &voters[voterIndex];

    // Eligibility check
    if (!checkEligibility(*v))
    {
        printf("\n You are NOT eligible to vote.\n");
        printEligibilityReport(*v);
        pressEnterToContinue();
        return;
    }

    // Already voted check
    if (v->hasVoted)
    {
        printf("\n You have ALREADY cast your vote!\n");
        printf("   Each voter can only vote once.\n");
        pressEnterToContinue();
        return;
    }

    // Show candidates
    printf("\n  Welcome, %s!\n", v->name);
    printf("\n  AVAILABLE CANDIDATES:\n");
    printLine('-', 50);
    for (int i = 0; i < candidateCount; i++)
    {
        printf("  %d. %-25s (%s)\n",
               candidates[i].id,
               candidates[i].name,
               candidates[i].party);
    }
    printLine('-', 50);

    int choice;
    printf("\n  Enter candidate number to vote: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > candidateCount)
    {
        printf("\n Invalid candidate selection!\n");
        pressEnterToContinue();
        return;
    }

    // Confirm vote
    printf("\n  You are voting for: %s (%s)\n",
           candidates[choice - 1].name,
           candidates[choice - 1].party);
    printf("  Confirm? (1=Yes / 0=No): ");
    int confirm;
    scanf("%d", &confirm);

    if (confirm == 1)
    {
        candidates[choice - 1].votes++;
        v->hasVoted = 1;
        printf("\n Your vote has been cast successfully!\n");
        printf("   Thank you for participating in democracy!\n");
    }
    else
    {
        printf("\n  Vote cancelled.\n");
    }

    pressEnterToContinue();
}

// ============================================
//              ELECTION RESULTS
// ============================================

void showResults()
{
    printHeader("ELECTION RESULTS");

    if (candidateCount == 0)
    {
        printf("  No candidates available.\n");
        pressEnterToContinue();
        return;
    }

    int totalVotes = 0;
    int winnerIndex = 0;

    for (int i = 0; i < candidateCount; i++)
    {
        totalVotes += candidates[i].votes;
        if (candidates[i].votes > candidates[winnerIndex].votes)
            winnerIndex = i;
    }

    printf("  %-5s %-20s %-15s %-8s %s\n",
           "No.", "Name", "Party", "Votes", "Percentage");
    printLine('-', 50);

    for (int i = 0; i < candidateCount; i++)
    {
        float percent = totalVotes > 0
                            ? (candidates[i].votes * 100.0 / totalVotes)
                            : 0;

        printf("  %-5d %-20s %-15s %-8d %.1f%%\n",
               candidates[i].id,
               candidates[i].name,
               candidates[i].party,
               candidates[i].votes,
               percent);
    }

    printLine('-', 50);
    printf("  Total Votes Cast : %d\n", totalVotes);
    printf("  Total Registered : %d\n", voterCount);

    if (totalVotes > 0)
    {
        printLine('=', 50);
        if (candidateCount > 1 &&
            candidates[winnerIndex].votes ==
                candidates[(winnerIndex + 1) % candidateCount].votes)
            printf("   RESULT: IT'S A TIE!\n");
        else
            printf("   WINNER: %s (%s) with %d votes!\n",
                   candidates[winnerIndex].name,
                   candidates[winnerIndex].party,
                   candidates[winnerIndex].votes);
        printLine('=', 50);
    }

    pressEnterToContinue();
}

// ============================================
//              VOTER LIST
// ============================================

void showVoterList()
{
    printHeader("REGISTERED VOTERS");

    if (voterCount == 0)
    {
        printf("  No voters registered yet.\n");
        pressEnterToContinue();
        return;
    }

    printf("  %-5s %-20s %-5s %-12s %-10s %s\n",
           "ID", "Name", "Age", "ID Number", "Eligible", "Voted");
    printLine('-', 60);

    for (int i = 0; i < voterCount; i++)
    {
        printf("  %-5d %-20s %-5d %-12s %-10s %s\n",
               voters[i].id,
               voters[i].name,
               voters[i].age,
               voters[i].idNumber,
               checkEligibility(voters[i]) ? " Yes" : " No",
               voters[i].hasVoted ? " Yes" : " No");
    }

    pressEnterToContinue();
}

// ============================================
//              MAIN MENU
// ============================================

void showMenu()
{
    printHeader("VOTING ELIGIBILITY SYSTEM");
    printf("  VOTER OPTIONS:\n");
    printf("  1. Register as Voter\n");
    printf("  2. Check My Eligibility\n");
    printf("  3. Cast My Vote\n");
    printf("\n  ADMIN OPTIONS:\n");
    printf("  4. Add Candidate\n");
    printf("  5. View All Candidates\n");
    printf("  6. View All Voters\n");
    printf("  7. View Election Results\n");
    printf("\n  0. Exit\n");
    printLine('=', 50);
    printf("  Enter your choice: ");
}

// ============================================
//              MAIN FUNCTION
// ============================================

int main()
{
    int choice;

    // Add some default candidates
    strcpy(candidates[0].name, "Alice Johnson");
    strcpy(candidates[0].party, "Progressive Party");
    candidates[0].id = 1;
    candidates[0].votes = 0;

    strcpy(candidates[1].name, "Bob Smith");
    strcpy(candidates[1].party, "Democratic Union");
    candidates[1].id = 2;
    candidates[1].votes = 0;

    strcpy(candidates[2].name, "Carol Williams");
    strcpy(candidates[2].party, "National Front");
    candidates[2].id = 3;
    candidates[2].votes = 0;

    candidateCount = 3;

    do
    {
        clearScreen();
        showMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            clearScreen();
            registerVoter();
            break;
        case 2:
            clearScreen();
            quickEligibilityCheck();
            break;
        case 3:
            clearScreen();
            castVote();
            break;
        case 4:
            clearScreen();
            addCandidate();
            break;
        case 5:
            clearScreen();
            listCandidates();
            break;
        case 6:
            clearScreen();
            showVoterList();
            break;
        case 7:
            clearScreen();
            showResults();
            break;
        case 0:
            printf("\n Thank you for using the Voting System!\n");
            printf("Goodbye!\n\n");
            break;
        default:
            printf("\n Invalid choice! Please try again.\n");
            pressEnterToContinue();
        }

    } while (choice != 0);

    return 0;
}