#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age(0);

    cout << "Hello world! How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " old!" << endl;

    return a.exec();
}

