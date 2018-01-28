#include <iostream>
#include <string>

using namespace std;

int getScore();
int findLowest(int score1, int score2, int score3, int score4, int score5);
void calcAverage (int score1, int score2, int score3, int score4, int score5, int lowest);
int main()
{

int score1, score2, score3, score4, score5;
 score1=getScore();
 score2=getScore();
 score3=getScore();
 score4=getScore();
 score5=getScore();

 calcAverage(score1, score2, score3,score4, score5);

 return 0;
}

int getScore()
{
    int score;
    cout << "enter score:";
    cin >> score;
    while(score<0 || score>100){
        cout << "Enter score between 0 and 100";
        cin >> score;
    }
    return score;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest = score1;

    if (score2 < lowest) lowest = score2;
    if (score3<lowest) lowest = score3;
    if (score4<lowest) lowest = score4;
    if (score5<lowest) lowest = score5;
    return lowest;
}

void calcAverage (int score1, int score2, int score3, int score4, int score5)
{
    double average;
    int lowest=findLowest(score1, score2, score3, score4, score5);
    average = (((float)score1+score2+score3+score4+score5)-lowest)/4.0;
    cout << "Average score is" << average << endl;
}
