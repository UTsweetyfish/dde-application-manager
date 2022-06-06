/*
 * This file was generated by qdbusxml2cpp-fix version 0.8
 * Command line was: qdbusxml2cpp-fix -c kwaylandmanager -p kwaylandmanager com.deepin.daemon.KWayland.WindowManager.xml
 *
 * qdbusxml2cpp-fix is Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "dbuskwaylandwindowmanager.h"

/*
 * Implementation of interface class __kwaylandmanager
 */

class __kwaylandmanagerPrivate
{
public:
   __kwaylandmanagerPrivate() = default;

    // begin member variables

public:
    QMap<QString, QDBusPendingCallWatcher *> m_processingCalls;
    QMap<QString, QList<QVariant>> m_waittingCalls;
};

__KwaylandManager::__KwaylandManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : DBusExtendedAbstractInterface(service, path, staticInterfaceName(), connection, parent)
    , d_ptr(new __kwaylandmanagerPrivate)
{
}

__KwaylandManager::~__KwaylandManager()
{
    qDeleteAll(d_ptr->m_processingCalls.values());
    delete d_ptr;
}

void __KwaylandManager::CallQueued(const QString &callName, const QList<QVariant> &args)
{
    if (d_ptr->m_waittingCalls.contains(callName))
    {
        d_ptr->m_waittingCalls[callName] = args;
        return;
    }
    if (d_ptr->m_processingCalls.contains(callName))
    {
        d_ptr->m_waittingCalls.insert(callName, args);
    } else {
        QDBusPendingCallWatcher *watcher = new QDBusPendingCallWatcher(asyncCallWithArgumentList(callName, args));
        connect(watcher, &QDBusPendingCallWatcher::finished, this, &__KwaylandManager::onPendingCallFinished);
        d_ptr->m_processingCalls.insert(callName, watcher);
    }
}

void __KwaylandManager::onPendingCallFinished(QDBusPendingCallWatcher *w)
{
    w->deleteLater();
    const auto callName = d_ptr->m_processingCalls.key(w);
    Q_ASSERT(!callName.isEmpty());
    if (callName.isEmpty())
        return;
    d_ptr->m_processingCalls.remove(callName);
    if (!d_ptr->m_waittingCalls.contains(callName))
        return;
    const auto args = d_ptr->m_waittingCalls.take(callName);
    CallQueued(callName, args);
}