#include <QCoreApplication>

#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Please enter your age:";
    cin >> age;

    switch(age) {
    case 0: //if(age == 0)
        qFatal("You did not enter a valid age!");
        break; //FALL Through
    case 16: //if(age == 16)
        qInfo() << "You can drive";
        break;
    case 18: //if(age == 18)
        qInfo() << "You can vote";
        break;
    case 21: //if(age == 21)
        qInfo() << "You can drink";
        break;
    case 67: //if(age == 67)
        qInfo() << "You can retire";
        break;
    default: // else
        qInfo("Nothing special this year.");
        break;
    }

    qInfo() << "Finished";

    return a.exec();
}
