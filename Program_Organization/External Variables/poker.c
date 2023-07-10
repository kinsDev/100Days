/*
The program will read and classify a poker hand.

Each card in the hand will have both a suit (clubs, diamonds, hearts,
or spades) and a rank (two, three, four, five, six, seven, eight, nine, ten, jack, queen,
king, or ace). We won't allow the use of jokers, and we’ll assume that aces are
high. The program will read a hand of five cards, then classify the hand into one of
the following categories (listed in order from best to worst):

straight flush (both a straight and a flush)
four-of-a-kind (four cards of the same rank)
full house (a three-of-a-kind and a pair)
flush (five cards of the same suit)
straight (five cards with consecutive ranks)
three-of-a-kind (three cards of the same rank)
two pairs
pair (two cards of the same rank)
high card (any other hand)

If a hand falls into two or more categories, the program will choose the best one.
For input purposes, we'll abbreviate ranks and suits as follows (letters may be
either upper- or lower-case):
Ranks: 2 3 4 5 6 7 8 9 t j q k a
Suits: c d h s

If the user enters an illegal card or tries to enter the same card twice, the program
will ignore the card, issue an error message, and then request another card. 
Entering the number 0 instead of a card will cause the program to terminate.

*/

/*
From this description of the program, we see that it has three tasks:
Read a hand of five cards.
Analyze the hand for pairs, straights, and so forth.
Print the classification of the hand.

We'll divide the program into three functions, read_cards, analyze_hand,
and print_result that perform these three tasks, main does nothing but call
these functions inside an endless loop.
*/

/*
we can begin to sketch an outline of the program:

#include directives go here
#define directives go here
declarations of external variables go here
prototypes for functions other than main
main function to call the prototypes of functions
*/

/*
The most pressing question that remains is how to represent the hand of cards.
Let’s see what operations read_cards and analyze_hand will perform on
the hand. 
During the analysis of the hand. analyze_hand will need to know
how many cards are in each rank and each suit. This suggests that we use two
arrays, num_in_rank and num_in_suit. The value of num_in_rank [r]
will be the number of cards with rank r, and the value of num_in_suit [s] will
be the number of cards with suit s. (We'll encode ranks as numbers between 0 and
12, and suits as numbers between 0 and 3.) 

We’ll also need a third array,
card_exists, so that read cards can detect duplicate cards. 
Each time read cards reads a card with rank r and suit s, it checks whether the value of
card exists [r] [s] is true. If so. the card was previously entered; if not,
read_cards assigns true to card_exists [r] [s].
Both the read_cards function and the analyze_hand function will need
access to the num_in_rank and num_in_suit arrays, so I'll make them exter¬
nal variables. The card exists array is used only by read cards, so it can
be local to that function. As a rule, variables should be made external only if necessary.

Having decided on the major data structures, we can now finish the program:
*/

/*Classifies a poker hand*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int num_in_rank[NUM_RANKS];
int num_in_suits[NUM_SUITS];
bool straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void)
{
    bool card_exists[NUM_RANKS][NUM_SUITS] = {false};
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
    }

    for (suit = 0; suit < NUM_SUITS; suit++)
    {
        num_in_suits[suit] = 0;
    }

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch)
        {
        case 'O':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
        {
            if (ch != ' ')
            {
                bad_card = true;
            }
        }

        if (bad_card)
        {
            printf("Bad Card; ignored.\n");
        }
        else if (card_exists[rank][suit])
        {
            printf("Duplicate card; ignored.\n");
        }
        else
        {
            num_in_rank[rank]++;
            num_in_suits[suit]++;
            card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    for (suit = 0; suit < NUM_SUITS; suit++)
    {
        if (num_in_suits[suit] == NUM_CARDS)
        {
            flush = true;
            break;
        }
    }

    rank = 0;
    while (num_in_rank[rank] == 0)
    {
        rank++;
    }

    for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
    {
        num_consec++;
    }

    if (num_consec == NUM_CARDS)
    {
        straight = true;
        return;
    }

    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (num_in_rank[rank] == 4)
        {
            four = true;
        }
        if (num_in_rank[rank] == 3)
        {
            three = true;
        }
        if (num_in_rank[rank] == 2)
        {
            pairs++;
        }
    }
}

void print_result(void)
{
    if (straight && flush)
    {
        printf("Straight flush\n");
    }
    else if (four)
    {
        printf("Four of a kind\n");
    }
    else if (three && pairs == 1)
    {
        printf("Full house\n");
    }
    else if (flush)
    {
        printf("Flush\n");
    }
    else if (straight)
    {
        printf("Straight\n");
    }
    else if (three)
    {
        printf("Three of a kind\n");
    }
    else if (pairs == 2)
    {
        printf("Two pairs\n");
    }
    else if (pairs == 1)
    {
        printf("Pair\n");
    }
    else
    {
        printf("High card\n");
    }
}