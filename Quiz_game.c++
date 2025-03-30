#include <iostream>
int main()
{
    std::string Questions[] = {"1. In which year was cpp created? ",
                               "2. Who created cpp? ",
                               "3. What is the name of standard library in cpp? ",
                               "4. Which sign is used in common basis in cpp? "};
    
    std::string Answers[][4] = {{"A. 1969","B. 1975","C. 1985","D. 1989"},
                               {"A. Guido Van Rossum","B. Bjarane Stroustrup","C. John Cardio","D. Janatier Lousier"},
                               {"A. #include <mistream>","B. #include <iostream>","C. #include <pistream>","D. #include <postream>"},
                               {"A. ;","B. :","C. '","D. ,"}};
    
    char Answer_key[] = {'A','B','B','A'};

    int size = sizeof(Questions)/sizeof(Questions[0]);
    char guess;
    int score;

    for (int i=0;i<size; i++)
    {
        std::cout<<"*******_*******_*******"<<std::endl;
        std::cout<<Questions[i]<<std::endl;
        std::cout<<"*******_*******_*******"<<std::endl;

        for (int j=0;j<sizeof(Answers[i])/sizeof(Answers[i][0]); j++)
        {
            std::cout<<Answers[i][j]<<std::endl;
        }
        std::cin>>guess;
        guess = toupper(guess);

        if (guess == Answer_key[i])
        {
            std::cout<<"Correct Answer"<<std::endl;
            score++;
        }
        else
        {
            std::cout<<"Incorrect Answer"<<std::endl;
            std::cout<<"Correct answer is "<<Answer_key[i]<<std::endl;
        }
    }
    std::cout<<"\n";
    std::cout<<"Your Current score is "<<score<<std::endl;
    std::cout<<"No. of Questions Attempted: "<<size<<std::endl;
    std::cout<<"No. of Answers given correctly: "<<score<<std::endl;

    return 0;
}