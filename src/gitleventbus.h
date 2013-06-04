#ifndef GITLEVENTBUS_H
#define GITLEVENTBUS_H

#include <QList>
#include <QObject>
#include <QMutex>
#include <QMutexLocker>
#include "GitlDef.h"
#include "gitlevent.h"
#include "gitlmodual.h"


class GitlModualDelegate;

using namespace std;
class GitlEventBus : public QObject
{
    Q_OBJECT
private:
    GitlEventBus();

public:
    /*! connect a modual to the event bus
      */
    bool registerModual(GitlModualDelegate *pcModual);


public slots:
    /*! send event to event bus
      */
    void post(GitlEvent* pcEvt);

signals:
    /*! message to send
     */
    void eventTriggered(GitlEvent pcEvt);

private:

    ADD_CLASS_FIELD_PRIVATE( QList<GitlModual*>, cModuals )
    ADD_CLASS_FIELD_PRIVATE( QMutex, cModualQueMutex )
    ADD_CLASS_FIELD_PRIVATE( QMutex, cModualDispMutex )

    ///SINGLETON
    SINGLETON_PATTERN_DECLARE(GitlEventBus)

};

#endif // GITLEVTBUS_H
