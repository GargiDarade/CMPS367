// C++ implementation of Assignment 1 Problem 2: Birthday Date Meaning Generator
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string> // for string and to_string()
#include <iomanip>
using namespace std;
//this function returns meaning of birth year
string  BirthdayYearMeaning(int year)
{
    string meaning;
    switch (year)
    {
        case 2000:
            meaning = "You are moody and overconfident, but people find your energy enticing. You like to be in charge and tend\n\
to resent authority. You don't allow others to gossip around you and you hate liars. You work hard and use your\n\
intelligence to come up with great ideas, and don't let any difficulties get in the way of what you want.";
            break;
        case 2001:
            meaning= "You have a lot of energy and are very passionate about things. Learn to control your emotions or you\n\
will drive people away. You want to be in control and tend not to listen to other's ideas. You find it hard to\n\
trust other people's opinions. You work hard and will accomplish whatever goal you set your smind to.";
            break;
        case 2002:
            meaning= "You don't like to be restrained by convention, wishing instead to go your own way. You have a tendency\n\
to like a lot of things superficially, but need discipline to find any real substance in your interests.\n\
You don't like to take the advice of others, instead following your own desires. You love to be the Center of attention.";
            break;
        case 2003:
            meaning= "You have a tendency to worry, and need to learn to control this tendency. You are also shy and don't\n\
share your feelings with others. You do, however, love to take care of others and want to find someone who takes care of you in return.\n\
You have a deeply spiritual nature and a love of art and beauty.";
            break;
        case 2004:
            meaning= "You are strong-willed, intelligent, and creative. You are a natural-born leader and people are drawn to\n\
you. However, you need to control your tendency to be arrogant and dismissive of others to keep their loyalty.\n\
You communicate you ideas well. You love to learn and study to gain more knowledge for its own sake.";
            break;
        case 2005:
            meaning= "You are honest, intelligent, and ambitious, and like to rely on yourself rather than other people. You\n\
can be selfish and a little too blunt, and need to control this tendency to get along with those around you.\n\
You can be an emotional roller coaster and feel things very deeply. You're excitable, but quickly lose\n\ 
interest in things.";
            break;
        case 2006:
            meaning= "You are straightforward in thought and speech. Although most people are attracted to these qualities,\n\
they can find you cold and sometimes too blunt. Guard against these tendencies. People trust you and you are good at keeping 3 secrets.\n\
Once you fall in love, you are caring and devoted and would do anything to protect your partner.";
            break;
        case 2007:
            meaning= "People find you honest, and once you become close to someone, they really learn to appreciate your\n\
friendship. You find it hard to get close to people, but once you do, they are friends for life.Although you are quick to anger,\n\
you also hate arguments and calm down just as quickly. You have a positive outlook on life.";
            break;
        case 2008:
            meaning= "You are easygoing and adaptable and fit into just about any situation. As you grow, you find many\n\
subjects that interest you, as you have a great curiosity for life itself. Find what you love and do it for the rest of\n\
your life for greatest success. Material possessions are important to you, and you want to be comfortable.";
            break;
        case 2009:
            meaning= "Silent and hardworking, you tend to not draw attention to yourself. You are cautious in your approach to\n\
the world and are very shy. To make friends you will need to overcome this. You think for yourself and tend not to listen to those around you,\n\
choosing instead your own personal code of right and wrong.";
            break;
        case 2010:
            meaning= "You have a tendency to resist authority and want to do your own thing. You have a hard time controlling\n\
your emotions and will need to learn that skill as you grow older. You are intelligent and creative and want to\n\
pursue the arts. You love to be the center of attention and love to show off what you know.";
            break;
        case 2011:
            meaning= "You are sensitive and can take things to personally if you don't grow a thicker skin. You get bored\n\
easily and need to find ways to keep your life interesting.You always want to try something new. People like to\n\
be around you because you are funny and make them laugh. You love to have lots of friends.";
            break;
        case 2012:
            meaning= "You are impatient and want everything quickly. You have a lot of energy and need to find a way to\n\
control it. You are smart and figure things out quickly and keep trying until you succeed at what you want.\n\
You want everything and can't decide what is realistic and what you can't have.";
            break;
        case 2013:
            meaning= "You have a lot of energy and have difficulty controlling it. You need to learn to temper your fiery\n\
energy. You want to do everything yourself and don't want help from others. You hate to fail and keep trying until you succeed.\n\
You are quiet and polite, but have a lot of depth on the inside.";
            break;
        case 2014:
            meaning= "You desire a high-profile career and love to be surrounded by loving admirers. People listen to you and\n\
you have the knack for getting your ideas through to others. You rarely take your advice, preferring to be a trend setter.\n\
Make sure to keep your temper in check to assure you don't drive away the people you need to succeed.";
            break;
        case 2015:
            meaning= "Your strong faith has helped you through your life. You believe in the qualities of honesty, patience,\n\
and hard work and have lived your life respecting these. However, you have difficulty getting your thoughts\n\
through to others and they find you rude if you don't learn to temper your words. Your family is most important to you.";
            break;
        case 2016:
            meaning= "You have spent your life caring for others, and they find you gentle, warm, and trustworthy. You've\n\
enjoyed great romanticism in your life and know how to turn an enemy into a friend. Everyone loves you, and you\n\
are surrounded by a great many friends. You've been a dreamer your whole life and continue to follow your own ideas.";
            break;
        case 2017:
            meaning= "You show who you really are and people take comfort in your strength of character. People find you\n\
faithful, smart, and caring. You can, however, be rather cold and distant because you don't show your emotions.\n\
You are brave, but can suffer from anxiety and need to learn to temper these feelings.";
            break;
        case 2018:
            meaning= "Sensitive and compassionate, you don't tolerate meanness around you. You don't like the loud or\n\
boisterous, and prefer quiet evenings at home to a party. You know how to keep everyone around you happy and can make\n\
people laugh with your great sense of humor. Be careful when choosing your career as financial matters are difficult for you.";
            break;
        case 2019:
            meaning= "You are creative and intelligent and resist authority figures. Be careful to keep your emotions in\n\
check, or those in authority will hold it against you. People find you fun and easy to trust. You need to make\n\
sure to earn that respect. You are confident in your abilities and feel like you can conquer the world.";
            break;
        case 2020:
            meaning= "You're stubborn and need to temper this if you want to get along with others. You consider\n\
your options and are cautious before making a decision. Honest and devoted, you hold onto traditional values that\n\
aren't respected in your generation. You have a clear sense of right and wrong and hang onto this, no matter what\n\
others think.";
            break;
        case 2021:
            meaning= "You will succeed in life if you focus on the things that really interest you and follow\n\
your passions.You greatly desire material success and will work hard to get it. Stay out of leadership positions\n\
because you don't have a talent for it, although people love to be around you as an equal.";
            break;
        case 2022:
            meaning= "You are sincere and honest and trust most people. Make sure that others don't take advantage\n\
of your giving nature. You have a strong heart and want to take care of those around you. You have a positive outlook\n\
on life, and very little gets you down. You work hard to deal with your problems and don't hide from them.";
            break;
        case 2023:
            meaning= "Faithfulness, warmth, and intelligence are your best qualities. People find it easy\n\
to trust you, and you have earned that trust. People are drawn to you, and you make a good leader.\n\
However, you tend to follow your own ideas and can be very stubborn when you think something is right.\n\
Mind your emotions for feelings of anxiety.";
            break;
        default:
            meaning = "Entered year should be from 2000 to 2023  please try again.";
            break;
        }    
    return meaning;
}

//this function returns meaning of the month
string  MonthMeaning(string month)
{
    string meaning;
    if (month.compare("January") == 0 || month.compare("Jan") == 0)
    {
         meaning="Named for the Roman god Janus, protector of gates and doorways.";
    } else if (month.compare("February") == 0 || month.compare("Feb") == 0)
    {
         meaning="From the Latin word februa, 'to cleanse.'";
    } else if (month.compare("March") == 0 || month.compare("Mar") == 0)
    {
         meaning="Named for the Roman god of war, Mars.";
    } else if (month.compare("April") == 0 || month.compare("Apr") == 0)
    {
         meaning="From the Latin word aperio, 'to open (bud)', plants begin to grow in this month.";
    } else if (month.compare("May") == 0)
    {
         meaning="Named for the Roman goddess Maia, who oversaw the growth of plants.";
    } else if (month.compare("June") == 0 || month.compare("Jun") == 0)
    {
         meaning="Named for the Roman goddess Juno";
    } else if (month.compare("July") == 0 || month.compare("Jul") == 0)
    {
         meaning="Named to honor Roman dictator Julius Caesar (100 B.C.- 44 B.C.) after his death.";
    } else if (month.compare("August") == 0 || month.compare("Aug") == 0)
    {
         meaning="Named to honor the first Roman emperor (and grandnephew of Julius Caesar), Augustus Caesar (63 B.C.- A.D. 14).";
    } else if (month.compare("September") == 0 || month.compare("Sep") == 0)
    {
         meaning="September comes from the Latin word septem, meaning 'seven', because it was the seventh month of the early Roman calendar.";
    } else if (month.compare("October") == 0 || month.compare("Oct") == 0)
    {
         meaning="In the ancient Roman calendar, October was the name of the eighth month of the year. Its name comes from octo, the Latin word for 'eight.'";
    } else if (month.compare("November") == 0 || month.compare("Nov") == 0)
    {
         meaning="From the Latin word novem, 'nine,' this had been the ninth month of the early Roman calendar.";
    } else if (month.compare("December") == 0 || month.compare("Dec") == 0)
    {
         meaning="From the Latin word decem, 'ten,' this had been the tenth month of the early Roman calendar.";
    } else
    {
         meaning="Entered month is not correct, please try again.";
    }


     return meaning;
}

//this function returns meaning of day of month
string  BirthdayDateMeaning(int day)
{
    string meaning;
    switch (day)
    {
        case 1:
            meaning = "You are a self-starter with very innovative ways of creating opportunity.\n\
You've never been afraid to be the first to try something new. Your determination\n\
and endurance are powerful and will help you get through times of struggle and reach success.";
            break;
        case 2:
            meaning= "If your birthday is the 2nd, you have a great talent for finding solutions.\n\
Your intuitive and unbiased nature allow you to see all sides of any situation and advise\n\
others toward the most fair and beneficial outcome.";
            break;
        case 3:
            meaning= "Expression comes naturally to you. You are very skilled at communicating\n\
your thoughts through conversation and creative pursuits, and your upbeat, charismatic presence\n\ 
inspires others to get onboard with your ideas.";
            break;
        case 4:
            meaning= "With a 4 Birthday number, you bring stability and rationality to any situation.\n\
You are the rock and your hard work and perseverance make you a dependable friend, colleague, parent, and partner.";
            break;
        case 5:
            meaning= "Flexibility is your forte. When life throws you a curveball,\n\
you can easily adapt to new circumstances and find excitement in the unexpected change.\n\
This ability to turn on a dime gives you the power to jump on brief opportunities others may miss.";
            break;
        case 6:
            meaning= "If your date of birth is the 6th, then your heart is your gift.\n\
You are a natural-born nurturer and have a great talent for helping and healing others.\n\
You are the epitome of self-sacrifice and a fierce protector of those you love.";
            break;
        case 7:
            meaning= "You possess a very refined mind and a deep urge to uncover life's mysteries.\n\
Your ability to acquire vast knowledge on both the informational and spiritual planes gives\n\
you a greater awareness than most.";
            break;
        case 8:
            meaning= "With a Birthday number 8, yours is a story of success. Your talent for setting\n\
and reaching goals is like no other. You are self-sufficient and capable and hold a great amount\n\
of power to achieve your ambitions.";
            break;
        case 9:
            meaning= "It's your compassion that makes you shine. You're devoted to helping the greater good\n\
and have a strong talent for speaking up for others. Your soul is most satisfied when you are giving\n\
and being of service.";
            break;
        case 10:
            meaning= "Your 10 Birthday number blesses you with great leadership skills. Your mind is sharp\n\
and allows you to dream up ingenious ideas and organize all the details, then direct others\n\
how to carry things out.";
            break;
        case 11:
            meaning= "You have a keen awareness of what's happening around you. A strong intuition is your gift\n\
and will help you understand the unspoken feelings, thoughts, and fears of others. This insight allows\n\
you to be a great guide and supporter.";
            break;
        case 12:
            meaning= "With the number 12 as your date of birth, creativity is a driving force in your life.\n\
Your imagination is rich and you are able to express your feelings and insights in unique ways\n\
that others can benefit from.";
            break;
        case 13:
            meaning= "Driven by the number 13, you are a conscientious worker with a knack for\n\
coming up with creative ideas and turning them into something real. An optimistic but practical outlook\n\
keeps you determined and on track as you work steadily toward your goals.";
            break;
        case 14:
            meaning= "You are open-minded and always up to try something new, yet you are wise enough\n\
to stop and think before you jump right into things. This pragmatic approach helps ensure\n\
your time, attention, and efforts are directed into meaningful experiences.";
            break;
        case 15:
            meaning= "If you were born on the 15th day of the month, your love for others is powerful\n\
and you are able to spread your gift of support far and wide. Your curious and social nature brings\n\
you into contact with a variety of people, all who would benefit from your heartfelt words of wisdom.";
            break;
        case 16:
            meaning= "Your 16 Birthday number blesses you with an inquisitive mind that allows\n\
you to uncover important truths. You have a special ability to read into other people's feelings\n\
and motives and share with them your wisdom.";
            break;
        case 17:
            meaning= "The quality of work you can produce when you're going it alone is almost unbelievable.\n\
You are as independent as you are ambitious, capable of performing every step along the way with efficiency, focus, and skill.";
            break;
        case 18:
            meaning= "You are both open-minded and open-hearted and your ambition is to leave this\n\
world better than you found it. You are independent by nature but will feel most fulfilled and successful\n\
when you are of service to others.";
            break;
        case 19:
            meaning= "With your 19 Birthday number, independence and self-sufficiency are necessities\n\
to you. You are extremely capable in life and work and aren't afraid to take big risks to achieve the life you desire.";
            break;
        case 20:
            meaning= "You relate to others on an almost cosmic level. You are dedicated to\n\
building cooperative, harmonious relationships of all kinds and can use your sensitive intuition\n\
to sense and address the needs of others.";
            break;
        case 21:
            meaning= "If your birthday is on the 21st, you thrive in active social settings\n\
and find great value in connecting with people. Your natural charm paired with your creative styles\n\
of thinking and communicating makes you an exciting and inspiring presence to those in your life.";
            break;
        case 22:
            meaning= "A 22 Birthday number gives you the power to create great things.\n\
You are determined and hardworking and your ability to cooperate with others makes you an\n\
effective teammate or leader.";
            break;
        case 23:
            meaning= "You have a real zest for life and you're eager to experience anything\n\
and everything possible. You approach relationships and situations in an easygoing way and are a\n\
source of optimism and inspiration for others.";
            break;
        case 24:
            meaning= "With your Birthday number 24, you have a heart of gold and are very skilled\n\
at maintaining balanced, stable relationships. You are loyal to your loved ones and are able to be\n\
the nurturer, protector, and provider all at once.";
            break;
        case 25:
            meaning= "You have a great ability to take in and process information on both conscious\n\
and subconscious levels. Your curiosity is endless and your desire to dive deep into a variety of subjects\n\
will bring you an immense awareness of the world.";
            break;
        case 26:
            meaning= "If you were born on the 26th day of the month, you have a desire to succeed\n\
and will feel most accomplished when your work benefits others. Your intuitive awareness of what people\n\
want allows you to come up with innovative solutions to meet their needs.";
            break;
        case 27:
            meaning= "Your mind is wide open and you are tolerant and compassionate toward all ways of life.\n\
You are able to take in a vast amount of insights and information and apply this knowledge toward the greater good.";
            break;
        case 28:
            meaning= "In an effort to accomplish great things, you recognize the value of working with others.\n\
You make a capable and compassionate leader who can bring people together and drive the team toward achievement.";
            break;
        case 29:
            meaning= "With a 29 Birthday number, you have an amazing ability to bring things together.\n\
You receive powerful subconscious insights that help you clearly see how everything and everyone is connected.";
            break;
        case 30:
            meaning= "If the date of your birth is the 30th, you are an original, innovative thinker\n\
and an excellent communicator. You have a great talent for using creativity to convey your ideas\n\
and your optimistic attitude has an uplifting effect on others.";
            break;
        case 31:
            meaning= "Your approach to life is an effective mix of both practicality and imagination.\n\
Your mind is stirring with creative ideas and you have the organizational skills to manifest them on\n\
the physical plane.";
            break;
        default:
            meaning = "Entered day is out of range please try again.";
            break;
        }    
    return meaning;
}
// starting function/Driver code
int main()
{
    string month;
    int day,year;
    bool loop=true;
    char anotherOne;

    cout<<"\nWelcome to Birthday Date Meaning Generator!";
    //note initial value of loop is true
    while(loop)
    {
        cout<<"\nPlease enter the month of your birthday (January/Jan - December/Dec): ";
        cin>> month;
        cout<<"\nPlease enter the day of your birthday (1 - 31): ";
        cin>> day;
        cout<<"\nPlease enter the year of your birthday (2000 - 2023): ";
        cin>> year; 
        cout<<"\n\nThe month of "<< month <<" means:";
        cout<<"\n"<<MonthMeaning(month)<<"\n";
        cout<<"\nThe "<<day<<" of "<<month<<" means:";
        cout<<"\n"<<BirthdayDateMeaning(day)<<"\n";
        cout<<"\nThe year of "<< year << " means:";
        cout<<"\n"<<BirthdayYearMeaning(year)<<"\n";

        cout<<"\nWould you like to try another one? (y/n):";
        cin>>anotherOne;
        if(!(anotherOne=='Y' || anotherOne=='y'))
        {
            loop=false;
        }

    }

    cout<<"\nThanks for playing!";
    cout << endl;
    return 0;    
}