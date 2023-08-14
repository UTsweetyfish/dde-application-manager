// SPDX-FileCopyrightText: 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SYSTEMDSIGNALDISPATCHER_H
#define SYSTEMDSIGNALDISPATCHER_H

#include "global.h"

class SystemdSignalDispatcher : public QObject
{
    Q_OBJECT
public:
    ~SystemdSignalDispatcher() override = default;
    static SystemdSignalDispatcher &instance()
    {
        static SystemdSignalDispatcher dispatcher;
        return dispatcher;
    }
Q_SIGNALS:
    void SystemdUnitNew(QString unitName, QDBusObjectPath systemdUnitPath);
    void SystemdUnitRemoved(QString unitName, QDBusObjectPath systemdUnitPath);

private Q_SLOTS:
    void onUnitNew(QString unitName, QDBusObjectPath systemdUnitPath);
    void onUnitRemoved(QString unitName, QDBusObjectPath systemdUnitPath);

private:
    explicit SystemdSignalDispatcher(QObject *parent = nullptr)
        : QObject(parent)
    {
        if (!connectToSignals()) {
            std::terminate();
        }
    }
    bool connectToSignals() noexcept;
};

#endif