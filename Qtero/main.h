#ifndef MAIN_H
#define MAIN_H

#include <QStringList>

#define STR(x)   #x
#define XSTR(x)  STR(x)

/**
 * @brief handleArgs
 * @param argc cli argument counter from main()
 * @param argv cli arguments from main()
 * @param argClean a list of indices to be ignored
 * @return
 */
QStringList handleArgs(int argc, char** argv, const QList<int>& argClean);


#endif // MAIN_H
